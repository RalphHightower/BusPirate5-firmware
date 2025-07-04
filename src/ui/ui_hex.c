#include <stdio.h>
#include "pico/stdlib.h"
#include <stdint.h>
#include "pirate.h"
#include "ui/ui_term.h"
#include "ui/ui_cmdln.h"
#include "ui/ui_hex.h"


bool ui_hex_get_args(uint32_t max_size_bytes, uint32_t *start_address, uint32_t *read_bytes) {
    command_var_t arg;
    // start address
    if (cmdln_args_find_flag_uint32('s' | 0x20, &arg, start_address)) {
        if ((*start_address) >= max_size_bytes) {
            printf("Start address out of range: %d\r\n", (*start_address));
            return true; // error
        }
    } else {
        (*start_address) = 0; // default to 0
    }

    // end address: user provides number of bytes to read/write, we calculate the end address
    if (cmdln_args_find_flag_uint32('b' | 0x20, &arg, read_bytes)) {
        if((*read_bytes) == 0) {
           (*read_bytes) = 1;
        }
    }else{
       (*read_bytes) =max_size_bytes;
    }

    return false; // no error
}

//align a given start address to 16 bytes, and calculate the end address also aligned to 16 bytes
void ui_hex_align(uint32_t start_address, uint32_t read_bytes, uint32_t max_bytes, uint32_t *aligned_start, uint32_t *aligned_end, uint32_t *total_read_bytes) {
    // user specified start address: align to 16 bytes, then adjust the number of bytes to read
    (*aligned_start) = start_address & 0xFFFFFFF0; // align to 16 bytes
    (*aligned_end) = (((start_address) + (read_bytes-1))|0xF); // align to 16 bytes, remember -1 to account for the start byte (0)
    (*total_read_bytes) = ((*aligned_end)-(*aligned_start))+1;
    //printf("Total read before %04X\r\n", total_read_bytes);
    if(max_bytes > 0 && (*aligned_end) > max_bytes) {
        (*aligned_end) = (max_bytes-1); // limit to device size, adjust for 0 based index
        (*total_read_bytes) = ((*aligned_end) - (*aligned_start))+1; // recalculate the total read bytes
    }
    //printf("Total read after %04X\r\n", total_read_bytes);
}

void ui_hex_header(uint32_t aligned_start, uint32_t aligned_end, uint32_t total_read_bytes) {
    printf("Start address: 0x%08X, end address: 0x%08X, total bytes: %d\r\n\r\n", aligned_start, aligned_end, total_read_bytes);
    printf("          00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F\r\n");
    printf("---------------------------------------------------------\r\n");
}

void ui_hex_row(uint32_t address, uint8_t *buf, uint32_t buf_size, struct hex_config_t *config) {
    if(buf_size > 16) {
        printf("Error: Buffer size must be <16 bytes\r\n");
        return; // error
    }
    
    // print the address
    printf("%08X: ", address);
    
    bool is_nonzero = false; // flag to highlight the address
    // print the data in hex
    for(uint32_t j = 0; j < 16; j++) {
        if(j < buf_size) {
            /*if(config->highlight && (address + j) >= config->highlight_start && (address + j) <= config->highlight_end) {
                ui_term_color_background(config->highlight_color); // highlight the address if it is in the range
            } else {
                ui_term_color_background(0x000000);
            }*/
            if(buf[j] == 0x00 || buf[j] == 0xFF) {
                if(is_nonzero) {
                    is_nonzero = false; // stop highlighting the address if we have a zero byte
                    printf("%s", ui_term_color_reset()); // reset color
                }
                printf("%02X ", (uint8_t)buf[j]);                
            }else{
                if(!is_nonzero) {
                    is_nonzero = true; // highlight the address if we have a non-zero byte
                    printf("%s", ui_term_color_num_float()); // start highlighting
                }
                printf("%02X ",(uint8_t)buf[j]); // print the byte in hex
            }
            
        } else {
            printf("   "); // print spaces for empty bytes
        }
    }
    printf("%s ", ui_term_color_reset()); // reset color after hex data
    
    // print the ASCII representation of the data
    printf("|");
    is_nonzero = false; // reset highlight flag for ASCII representation 
    for(uint32_t j = 0; j < 16; j++) {
        if(j < buf_size) {
            char c = (char)buf[j];
            if(c >= 32 && c <= 126) { // printable ASCII range
                if(!is_nonzero) {
                    is_nonzero = true; // highlight the character if it is printable
                    printf("%s", ui_term_color_info()); // start highlighting
                }
                printf("%c", c); // print the character in color
            } else {
                if(is_nonzero) {
                    is_nonzero = false; // stop highlighting the address if we have a non-printable character
                    printf("%s", ui_term_color_reset()); // reset color
                }
                printf("."); // non-printable characters as dot
            }
        } else {
            printf(" "); // print space for empty bytes
        }
    }
    printf("%s|\r\n", ui_term_color_reset()); // reset color after ASCII representation
}
