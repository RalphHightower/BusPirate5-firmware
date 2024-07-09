/**
 * @file		spi_nand.h
 * @author		Andrew Loebs
 * @brief		Header file of the spi nand module
 *
 * SPI NAND flash chip driver for the Micron MT29F1G01ABAFDWB.
 *
 */

#ifndef __SPI_NAND_H
#define __SPI_NAND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "../dhara/nand.h" // for `struct dhara_nand` definition

#define SPI_NAND_LOG2_PAGE_SIZE              (  11)
#define SPI_NAND_LOG2_PAGES_PER_ERASE_BLOCK  (   6)
#define SPI_NAND_PAGES_PER_ERASE_BLOCK       (1 << SPI_NAND_LOG2_PAGES_PER_ERASE_BLOCK)
#define SPI_NAND_PAGE_SIZE                   (1 << SPI_NAND_LOG2_PAGE_SIZE)

#if SPI_NAND_PAGE_SIZE != 2048
    #error "Currently only 2048-byte pages are supported" // cannot be static assert (until C23?)
#endif

/// @brief SPI return statuses
enum {
    SPI_NAND_RET_OK = 0,
    SPI_NAND_RET_BAD_SPI = -1,
    SPI_NAND_RET_TIMEOUT = -2,
    SPI_NAND_RET_DEVICE_ID = -3,
    SPI_NAND_RET_BAD_ADDRESS = -4,
    SPI_NAND_RET_INVALID_LEN = -5,
    SPI_NAND_RET_ECC_REFRESH = -6,
    SPI_NAND_RET_ECC_ERR = -7,
    SPI_NAND_RET_P_FAIL = -8,
    SPI_NAND_RET_E_FAIL = -9,
};


/// @brief Nand row address
typedef union {
    uint32_t whole;
    struct {
        uint32_t page  : SPI_NAND_LOG2_PAGES_PER_ERASE_BLOCK; // least significant bits
        uint32_t block : (32 - SPI_NAND_LOG2_PAGES_PER_ERASE_BLOCK);
    };
} row_address_t;
/// @brief Nand column address (valid range 0-2175)
typedef uint16_t column_address_t;

/// @brief Initializes the spi nand driver
int spi_nand_init(struct dhara_nand *dhara_parameters_out);

/// @brief Performs a read page operation
int spi_nand_page_read(row_address_t row, column_address_t column, void *data_out,
                       size_t read_len);

/// @brief Performs a page program operation
int spi_nand_page_program(row_address_t row, column_address_t column, const void *data_in,
                          size_t write_len);

/// @brief Copies the source page to the destination page using nand's internal cache
int spi_nand_page_copy(row_address_t src, row_address_t dest);

/// @brief Performs a block erase operation
/// @note Block operation -- page component of row address is ignored
int spi_nand_block_erase(row_address_t row);

/// @brief Checks if a given block is bad
/// @note Block operation -- page component of row address is ignored
/// @return SPI_NAND_RET_OK if good block, SPI_NAND_RET_BAD_BLOCK if bad, other returns if error is
/// encountered
int spi_nand_block_is_bad(row_address_t row, bool *is_bad);

/// @brief Marks a given block as bad
/// @note Block operation -- page component of row address is ignored
int spi_nand_block_mark_bad(row_address_t row);

/// @brief Checks if a given page is free
int spi_nand_page_is_free(row_address_t row, bool *is_free);

/// @brief Erases all blocks from the device, ignoring those marked as bad
int spi_nand_clear(void);

#endif // __SPI_NAND_H
