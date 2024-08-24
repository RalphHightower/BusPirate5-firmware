// en-us is our base language translation file
#include "translation/base.h"
static char const * const bs_ba[]={
	[T_ON]="ON",
	[T_OFF]="OFF",
	[T_GND]="GND",
	[T_INPUT]="INPUT",
	[T_OUTPUT]="OUTPUT",
	[T_EXIT]="Izlaz",
	[T_LOADED]="Učitano",
	[T_SAVED]="Spremljeno",
	[T_WARN_VOUT_VREF_LOW]="VOUT/VREF pin is not powered. Use W to enable power, or attach an external supply",
	[T_USE_PREVIOUS_SETTINGS]="Koristi prethodne postavke?",
	[T_MODE_ERROR_NO_EFFECT]="GREŠKA: naredba nema efekta ovdje",
	[T_MODE_ERROR_NO_EFFECT_HIZ]="Naredba nema efekta u HiZ modu, pritisnite 'm' za izabir moda",
	[T_MODE_NO_HELP_AVAILABLE]="Pomoć nije dostupna",
	[T_PRESS_ANY_KEY_TO_EXIT]="Pritisnite bilo koju tipku za izlaz",
	[T_PRESS_ANY_KEY]="Press any key",
	[T_PRESS_BUTTON]="Press button",
	[T_PRESS_X_TO_EXIT]="Press 'x' to exit",
	[T_MODE_MODE_SELECTION]="Izbor moda",
	[T_MODE_MODE]="Mod",
	[T_MODE_NUMBER_DISPLAY_FORMAT]="Format prikaza brojeva",
	[T_MODE_INVALID_OPTION]="Nevažeći izbor",
	[T_MODE_CHOOSE_AVAILABLE_PIN]="Izaberite slobodan pin:",
	[T_MODE_ALL_PINS_IN_USE]="Svi pinovi u upotrebi",
	[T_MODE_PULLUP_RESISTORS]="Pull-up otpornik",
	[T_MODE_POWER_SUPPLY]="Napajanje",
	[T_MODE_DISABLED]="Onemogućeno",
	[T_MODE_DISPLAY]="Display",
	[T_MODE_DISPLAY_SELECTION]="Display selection",
	[T_MODE_ENABLED]="Omogućeno",
	[T_MODE_BITORDER]="Bitorder",
	[T_MODE_BITORDER_MSB]="MSB",
	[T_MODE_BITORDER_LSB]="LSB",
	[T_MODE_DELAY]="Delay",
	[T_MODE_US]="us",
	[T_MODE_MS]="ms",
	[T_MODE_ADC_VOLTAGE]="Volta na",
	[T_MODE_ERROR_PARSING_MACRO]="Greška u parsiranju makroa",
	[T_MODE_ERROR_NO_MACROS_AVAILABLE]="Nema dostupnih makroa",
	[T_MODE_ERROR_MACRO_NOT_DEFINED]="Makro nije definisan",
	[T_MODE_TICK_CLOCK]="Tick clock",
	[T_MODE_SET_CLK]="Set clock",
	[T_MODE_SET_DAT]="Set data",
	[T_MODE_READ_DAT]="Read data",
	[T_MODE_NO_VOUT_VREF_ERROR]="No voltage detected on VOUT/VREF pin",
	[T_MODE_NO_VOUT_VREF_HINT]="Hint: Use W to enable power, or attach an external supply",
	[T_MODE_PWM_GENERATE_FREQUENCY]="Generiši frekvenciju",
	[T_MODE_FREQ_MEASURE_FREQUENCY]="Mjerenje frekvencije",
	[T_MODE_FREQ_FREQUENCY]="Frekvencija",
	[T_MODE_FREQ_DUTY_CYCLE]="Radni ciklus",
	[T_PSU_DAC_ERROR]="PSU DAC greška, molimo pokrenite self-test",
	[T_PSU_CURRENT_LIMIT_ERROR]="Struja iznad granice, napajanje onemogućeno",
	[T_PSU_SHORT_ERROR]="Moguć kratki spoj, napajanje onemogućeno",
	[T_PSU_ALREADY_DISABLED_ERROR]="Napajanje već onemogućeno",
	[T_SYNTAX_EXCEEDS_MAX_SLOTS]="Rezultati prekoračuju dostupni prostor (%d slotova)",
	[T_HWSPI_SPEED_MENU]="SPI brzina",
	[T_HWSPI_SPEED_MENU_1]="1 do 62500kHz",
	[T_HWSPI_SPEED_PROMPT]="kHz (%s%dkHz*%s)",
	[T_HWSPI_BITS_MENU]="Data bita",
	[T_HWSPI_BITS_MENU_1]="4 do 8 bita",
	[T_HWSPI_BITS_PROMPT]="Bita (%s%d*%s)",
	[T_HWSPI_CLOCK_POLARITY_MENU]="Clock polaritet",
	[T_HWSPI_CLOCK_POLARITY_MENU_1]="Prazan LOW",
	[T_HWSPI_CLOCK_POLARITY_MENU_2]="Prazan HIGH",
	[T_HWSPI_CLOCK_POLARITY_PROMPT]="Polaritet",
	[T_HWSPI_CLOCK_PHASE_MENU]="Clock faza",
	[T_HWSPI_CLOCK_PHASE_MENU_1]="LEADING edge",
	[T_HWSPI_CLOCK_PHASE_MENU_2]="TRAILING edge",
	[T_HWSPI_CLOCK_PHASE_PROMPT]="Faza",
	[T_HWSPI_CS_IDLE_MENU]="Čip select",
	[T_HWSPI_CS_IDLE_MENU_1]="Aktivan HIGH (CS)",
	[T_HWSPI_CS_IDLE_MENU_2]="Aktivan LOW (/CS)",
	[T_HWSPI_CS_IDLE_PROMPT]="CS",
	[T_HWSPI_ACTUAL_SPEED_KHZ]="Stvarna brzina",
	[T_HWSPI_CS_SELECT]="CS Omogućen",
	[T_HWSPI_CS_DESELECT]="CS Onemogućen",
	[T_UART_SPEED_MENU]="UART brzina",
	[T_UART_SPEED_MENU_1]="1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200 etc",
	[T_UART_SPEED_PROMPT]="Baud (%s%d*%s)",
	[T_UART_PARITY_MENU]="Paritet",
	[T_UART_PARITY_MENU_1]="None",
	[T_UART_PARITY_MENU_2]="Paran",
	[T_UART_PARITY_MENU_3]="Neparan",
	[T_UART_PARITY_PROMPT]="Paritet",
	[T_UART_DATA_BITS_MENU]="Data bita",
	[T_UART_DATA_BITS_MENU_1]="5 do 8 bita",
	[T_UART_DATA_BITS_PROMPT]="Bita (%s%d*%s)",
	[T_UART_STOP_BITS_MENU]="Stop bita",
	[T_UART_STOP_BITS_MENU_1]="1",
	[T_UART_STOP_BITS_MENU_2]="2",
	[T_UART_STOP_BITS_PROMPT]="Bita",
	[T_UART_BLOCKING_MENU]="Koristite blokirajuće funkcije?",
	[T_UART_BLOCKING_MENU_1]="Ne",
	[T_UART_BLOCKING_MENU_2]="Da",
	[T_UART_BLOCKING_PROMPT]="Blokiraj",
	[T_UART_ACTUAL_SPEED_BAUD]="Stvarna brzina",
	[T_UART_BAUD]="baud",
	[T_UART_OPEN]="UART OPEN",
	[T_UART_OPEN_WITH_READ]="UART OPEN (ASYNC READ)",
	[T_UART_CLOSE]="UART CLOSE",
	[T_UART_NO_DATA_READ]="Nema podataka za čiranje",
	[T_UART_NO_DATA_TIMEOUT]="Timeout čitanja podataka",
	[T_HWI2C_SPEED_MENU]="I2C brzina",
	[T_HWI2C_SPEED_MENU_1]="1kHz do 1000kHz",
	[T_HWI2C_SPEED_PROMPT]="kHz (%s%dkHz*%s)",
	[T_HWI2C_DATA_BITS_MENU]="Data bita",
	[T_HWI2C_DATA_BITS_MENU_1]="8",
	[T_HWI2C_DATA_BITS_MENU_2]="10",
	[T_HWI2C_DATA_BITS_PROMPT]="Bita",
	[T_HWI2C_START]="I2C START",
	[T_HWI2C_STOP]="I2C STOP",
	[T_HWI2C_ACK]="ACK",
	[T_HWI2C_NACK]="NACK",
	[T_HWI2C_NO_PULLUP_DETECTED]="pull-up nije detektovan. Koristite P da omogućite pull-up otpornike na ploči",
	[T_HWI2C_TIMEOUT]="I2C timeout",
	[T_HWI2C_I2C_ERROR]="I2C bus greška",
	[T_HW2WIRE_SPEED_MENU]="2WIRE speed",
	[T_HW2WIRE_RST_LOW]="RST LOW",
	[T_HW2WIRE_RST_HIGH]="RST HIGH",
	[T_HWLED_DEVICE_MENU]="LED tip",
	[T_HWLED_DEVICE_MENU_1]="WS2812/SK6812/'NeoPixel' (single wire interface)",
	[T_HWLED_DEVICE_MENU_2]="APA102/SK9822 (clock i data interface)",
	[T_HWLED_DEVICE_MENU_3]="LEDovi na ploči (16 SK6812s)",
	[T_HWLED_DEVICE_PROMPT]="Type",
	[T_HWLED_NUM_LEDS_MENU]="Broj LEDova u traci",
	[T_HWLED_NUM_LEDS_MENU_1]="1 do 10000",
	[T_HWLED_NUM_LEDS_PROMPT]="LEDovi (%s%d*%s)",
	[T_HWLED_RESET]="RESET",
	[T_HWLED_FRAME_START]="START FRAME (0x00000000)",
	[T_HWLED_FRAME_STOP]="STOP FRAME (0xFFFFFFFF)",
	[T_HW1WIRE_RESET]="1-Wire RESET",
	[T_HW1WIRE_PRESENCE_DETECT]="Uređaj detektovan",
	[T_HW1WIRE_NO_DEVICE]="Nema detektovanog uređaja",
	[T_CMDLN_INVALID_COMMAND]="Nevažeća naredba: %s. Unesite ? za pomoć.",
	[T_CMDLN_NO_HELP]="Pomoć trenutno nije dostupna za ovu naredbu.",
	[T_CMDLN_LS]="ls {direktorij} - listing datoteka u trenutnoj lokaciji ili {direktorij} lokaciji.",
	[T_CMDLN_CD]="cd {direktorij} - premjestite se u {direktorij} lokaciju.",
	[T_CMDLN_MKDIR]="mkdir {direktorij} - kreirajte {direktorij}.",
	[T_CMDLN_RM]="rm {datoteka/direktorij} - uklonite datoteku ili (prazan) direktorij.",
	[T_CMDLN_CAT]="cat {datoteka} - prikažite sadržaj {datoteka}.",
	[T_CMDLN_MODE]="m - promjenite protokol mod, prikažite izbornik.",
	[T_CMDLN_PSU_EN]="W - omogućite napojnu jedinicu na ploči, prikažite konfiguracijski izbornik.",
	[T_CMDLN_RESET]="# - poništite postavke i ponovno pokrenite Bus Pirate.",
	[T_CMDLN_BOOTLOAD]="$ - poništite postavke i otvorite bootloader mod za ažuriranje.",
	[T_CMDLN_INT_FORMAT]="= {vrijednost} - konvertujte {vrijednost} u BIN/DEC/HEX/ASCII.",
	[T_CMDLN_INT_INVERSE]="| {vrijednost} - invertirajte bite u {vrijednost}.",
	[T_CMDLN_HELP]="? - prikažite pomoć za naredbe i sintaksu.",
	[T_CMDLN_CONFIG_MENU]="c - otvorite Bus Pirate konfiguracijski izbornik.",
	[T_CMDLN_FREQ_ONE]="f {IOx} - izmjerite frekvenciju na {IOx} jedanput.",
	[T_CMDLN_FREQ_CONT]="F {IOx} - izmjerite frekvenciju na {IOx} kontinualno.",
	[T_CMDLN_PWM_CONFIG]="G - konfigurišite frekvencijski generator (PWM) na slobodnom IOx pinu.",
	[T_CMDLN_PWM_DIS]="g {IOx} - onemogućite frekvencijski generator (PWM) na pinu {IOx}.",
	[T_CMDLN_HELP_MODE]="h - prikažite ekran pomoći za izabrani mod.",
	[T_CMDLN_HELP_DISPLAY]="hd - show display mode specific help screen.",
	[T_CMDLN_INFO]="i - prikažite Bus Pirate informacijski i status ekran.",
	[T_CMDLN_BITORDER_MSB]="l - zadajte Most Significant Bit red ispisa.",
	[T_CMDLN_BITORDER_LSB]="L - zadajte Least Significant Bit red ispisa.",
	[T_CMDLN_DISPLAY_FORMAT]="o - podesite format ispisa brojeva.",
	[T_CMDLN_PULLUPS_EN]="P - omogućite pull-up otpornike na ploči.",
	[T_CMDLN_PULLUPS_DIS]="p - onemogućite pull-up otpornike na ploči.",
	[T_CMDLN_PSU_DIS]="w - onemogućite napojnu jedinicu na ploči.",
	[T_CMDLN_ADC_CONT]="V {IOx} - kontinualno mjerenje napona na pinu {IOx}. Unesite bez broja pina za mjerenje napona na svim pinovima.",
	[T_CMDLN_ADC_ONE]="v {IOx} - jednokratno mjerenje napona na pinu {IOx}. Unesite bez broja pina za jednokratno mjerenje napona na svim pinovima.",
	[T_CMDLN_SELFTEST]="~ - izvršite fabrički self-test. Odspojite sve priključene uređaje i pređite u HiZ mod prije pokretanja testa.",
	[T_CMDLN_AUX_IN]="@ {IOx} - postavite pin {IOx} kao ulaz, pročitajte stanje.",
	[T_CMDLN_AUX_LOW]="a {IOx} - postavite pin {IOx} kao izlaz i LOW.",
	[T_CMDLN_AUX_HIGH]="A {IOx} - postavite pin {IOx} kao izlaz i HIGH.",
	[T_CMDLN_DUMP]="dump {datoteka} {uređaj} - zapišite sadržaj flash {uređaj} u {datoteka}. Upozorenje: trenutno radi kao prototip samo sa 25LC020 u SPI modu.",
	[T_CMDLN_LOAD]="load {datoteka} {uređaj} - učitajte saržaj {datoteka} na flash {uređaj}. Upozorenje: trenutno radi kao prototip sa 25LC020 u SPI modu.",
	[T_CMDLN_DISPLAY]="d - change display mode, show selection menu.",
	[T_CMDLN_LOGIC]="logic <frequency in kHz> <samples> <trigger pin> <trigger level> - logic analyzer. <frequency> 1kHz-62500kHz, <trigger pin> 0:7, <trigger level> 0:1.",
	[T_CMDLN_HEX]="hex <file> - print contents of <file> in HEX",
	[T_HELP_TITLE]="Opšte naredbe\t\t\tBus sintaksa",
	[T_HELP_GENERAL_COMMANDS]="Opšte naredbe",
	[T_HELP_BUS_SYNTAX]="Bus sintaksa",
	[T_HELP_DISK_COMMANDS]="Disk naredbe",
	[T_HELP_BLANK]="\t\t\t",
	[T_HELP_SECTION_IO]="work with pins, input, output measurement",
	[T_HELP_SECTION_CAPTURE]="measure analog and digital signals",
	[T_HELP_SECTION_CONFIGURE]="configure the terminal, LEDs, display and mode",
	[T_HELP_SECTION_SYSTEM]="restart, firmware updates and diagnostic",
	[T_HELP_SECTION_FILES]="list files and navigate the storage",
	[T_HELP_SECTION_PROGRAMS]="useful commands and mini-programs",
	[T_HELP_SECTION_MODE]="enter a mode to use protocols",
	[T_HELP_SECTION_SYNTAX]="send and receive data in modes using bus syntax",
	[T_HELP_SECTION_HELP]="get more help",
	[T_HELP_GREATER_THAN]="Pokrenite Bus sintaksa (vidjeti: Bus sintaksa)",
	[T_HELP_SYNTAX_ADC]="Mjeri napon na IO.x\t",
	[T_HELP_CMD_LS]="Izlistaj datoteke",
	[T_HELP_CMD_CD]="Promjeni direktorij",
	[T_HELP_CMD_MKDIR]="Napravi direktorij",
	[T_HELP_CMD_RM]="Ukloni datoteku/Direktorij",
	[T_HELP_CMD_PAUSE]="Pause for user input, optional exit",
	[T_HELP_CMD_FORMAT]="Format storage disk (FAT16)",
	[T_HELP_CMD_CAT]="Ispiši sadržaj datoteke",
	[T_HELP_CMD_HEX]="Print file contents in HEX",
	[T_HELP_CAPTURE_SCOPE]="Oscilloscope interface",
	[T_HELP_CAPTURE_LA]="Logic analyzer interface",
	[T_HELP_CMD_FLASH]="Erase, write, read and verify SPI flash chips",
	[T_HELP_CMD_LABEL]="Get or set the disk label",
	[T_HELP_1_2]="Konvertuj x/obrni x\t",
	[T_HELP_1_3]="Selftest\t\t",
	[T_HELP_1_4]="Poništi postavke na Bus Pirate\t",
	[T_HELP_1_5]="Prebaci na bootloader\t",
	[T_HELP_1_6]="Odloži 1 us/MS (d:4 za ponavljanje)",
	[T_HELP_1_7]="Postavi IO.x stanje (low/HI/READ)",
	[T_HELP_COMMAND_AUX]="Postavi IO x stanje (low/HI/READ)",
	[T_HELP_COMMAND_DISPLAY]="Change screen display mode",
	[T_HELP_1_9]="Konfiguracijski izbornik\t",
	[T_HELP_1_22]="Prikaži napon na IOx (jednom/CONT)",
	[T_HELP_1_10]="Prikaži napon na svim IO (jednom/CONT)",
	[T_HELP_1_11]="Izmjeri frekvenciju na IOx (jednom/CONT)",
	[T_HELP_1_23]="Prati frekvenciju (off/ON)\t",
	[T_HELP_1_12]="Generiši frekvenciju (off/ON)",
	[T_HELP_HELP_GENERAL]="Global, mode and display help. Try '?', '? mode' and '? display'",
	[T_HELP_HELP_DISPLAY]="Help with a display mode such as the scope",
	[T_HELP_HELP_COMMAND]="Add -h for command help: ls -h",
	[T_HELP_1_14]="Versioninfo/statusinfo\t",
	[T_HELP_1_15]="Bitorder (msb/LSB)\t",
	[T_HELP_1_16]="Promjeni mod\t\t",
	[T_HELP_1_17]="Zadaj format prikaza brojeva",
	[T_HELP_1_18]="Pull-up otpornik (off/ON)",
	[T_HELP_1_19]="-\t\t\t",
	[T_HELP_1_20]="Prikaži napon/stanja\t",
	[T_HELP_1_21]="Napajanje (off/ON)\t",
	[T_HELP_2_1]="Makro mod x/prikaži sve\t",
	[T_HELP_2_3]="Start",
	[T_HELP_2_4]="Stop",
	[T_HELP_2_7]="Pošalji string",
	[T_HELP_2_8]="",
	[T_HELP_2_9]="",
	[T_HELP_2_10]="Pošalji vrijednost",
	[T_HELP_2_11]="Čitaj",
	[T_HELP_SYN_CLOCK_HIGH]="Clock high",
	[T_HELP_SYN_CLOCK_LOW]="Clock low",
	[T_HELP_SYN_CLOCK_TICK]="Clock tick",
	[T_HELP_SYN_DATA_HIGH]="Data high",
	[T_HELP_SYN_DATA_LOW]="Data low",
	[T_HELP_SYN_DATA_READ]="Read data pin state",
	[T_HELP_2_18]="Čitaj bit",
	[T_HELP_2_19]="Ponovi npr. r:10",
	[T_HELP_2_20]="Pročitaj/zapiši bita npr. 0x55.2",
	[T_HELP_2_21]="Korisnički makro x/izlistaj sve",
	[T_HELP_2_22]="Korisnički makro dodijeli x",
	[T_HELP_HINT]="Uvežite više naredbi sa ; || &&.\r\n\r\nProbajte -h pomoć: ls -h",
	[T_HELP_FLASH]="read, write and erase flash chips using SFDP info if available",
	[T_HELP_FLASH_ERASE]="Erase flash chip. flash erase [-v(erify)]",
	[T_HELP_FLASH_WRITE]="Write file to flash chip. flash write -f <file> [-e(rase)] [-v(erify)]",
	[T_HELP_FLASH_READ]="Read flash chip to file. flash read -f <file>",
	[T_HELP_FLASH_VERIFY]="Verify flash chip against file. flash verify -f <file>",
	[T_HELP_FLASH_TEST]="Erase and write full chip with dummy data, verify. flash test",
	[T_HELP_FLASH_PROBE]="Probe flash chip for ID and SFDP info. flash probe",
	[T_HELP_FLASH_INIT]="Reset and initialize flash chip. Default if no options given. flash",
	[T_HELP_FLASH_FILE_FLAG]="File flag. File to write, read or verify. flash verify -f <file>",
	[T_HELP_FLASH_ERASE_FLAG]="Erase flag. Add erase before write. flash write -f <file> -e",
	[T_HELP_FLASH_VERIFY_FLAG]="Verify flag. Add verify after write or erase. flash write -f <file> -v",
	[T_INFO_FIRMWARE]="Firmware",
	[T_INFO_BOOTLOADER]="Bootloader",
	[T_INFO_WITH]="sa",
	[T_INFO_RAM]="RAM",
	[T_INFO_FLASH]="FLASH",
	[T_INFO_SN]="S/N",
	[T_INFO_WEBSITE]="https://BusPirate.com/",
	[T_INFO_TF_CARD]="Storage",
	[T_INFO_FILE_SYSTEM]="File System",
	[T_NOT_DETECTED]="Not Detected",
	[T_INFO_AVAILABLE_MODES]="Dostupni modovi",
	[T_INFO_CURRENT_MODE]="Aktivni mod",
	[T_INFO_POWER_SUPPLY]="Napajanje",
	[T_INFO_CURRENT_LIMIT]="Granica struje",
	[T_INFO_PULLUP_RESISTORS]="Pull-up otpornik",
	[T_INFO_FREQUENCY_GENERATORS]="Generatori frekvencija",
	[T_INFO_DISPLAY_FORMAT]="Format prikaza",
	[T_INFO_DATA_FORMAT]="Format podataka",
	[T_INFO_BITS]="biti",
	[T_INFO_BITORDER]="bitorder",
	[T_CONFIG_FILE]="Konfiguracijska datoteka",
	[T_CONFIG_CONFIGURATION_OPTIONS]="Konfiguracijske opcije",
	[T_CONFIG_LANGUAGE]="Jezik",
	[T_CONFIG_ANSI_COLOR_MODE]="ANSI color mode",
	[T_CONFIG_ANSI_COLOR_FULLCOLOR]="ANSI Full-Color (16M colors)",
	[T_CONFIG_ANSI_COLOR_256]="ANSI-256 color",
	[T_CONFIG_ANSI_TOOLBAR_MODE]="ANSI toolbar mode",
	[T_CONFIG_LANGUAGE_ENGLISH]="Engleski",
	[T_CONFIG_LANGUAGE_CHINESE]="Kineski",
	[T_CONFIG_LANGUAGE_POLISH]="Poljski",
	[T_CONFIG_LANGUAGE_BOSNIAN]="Bosnian",
	[T_CONFIG_LANGUAGE_ITALIAN]="Italian",
	[T_CONFIG_DISABLE]="Onemogući",
	[T_CONFIG_ENABLE]="Omogući",
	[T_CONFIG_SCREENSAVER]="LCD screensaver",
	[T_CONFIG_SCREENSAVER_5]="5 minuta",
	[T_CONFIG_SCREENSAVER_10]="10 minuta",
	[T_CONFIG_SCREENSAVER_15]="15 minuta",
	[T_CONFIG_LEDS_EFFECT]="LED efektri",
	[T_CONFIG_LEDS_EFFECT_SOLID]="Jednobojno",
	[T_CONFIG_LEDS_EFFECT_ANGLEWIPE]="Ugaono kruženje",
	[T_CONFIG_LEDS_EFFECT_CENTERWIPE]="Centrirano kruženje",
	[T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE]="Kruženje u smijeru kazaljke",
	[T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE]="Prelaz odozgo",
	[T_CONFIG_LEDS_EFFECT_SCANNER]="Skener",
	[T_CONFIG_LEDS_EFFECT_GENTLE_GLOW]="Gentle glow",
	[T_CONFIG_LEDS_EFFECT_CYCLE]="Ludnica mod",
	[T_CONFIG_LEDS_COLOR]="LED boja",
	[T_CONFIG_LEDS_COLOR_RAINBOW]="Duga",
	[T_CONFIG_LEDS_COLOR_RED]="Crvena",
	[T_CONFIG_LEDS_COLOR_ORANGE]="Narandžasta",
	[T_CONFIG_LEDS_COLOR_YELLOW]="Žuta",
	[T_CONFIG_LEDS_COLOR_GREEN]="Zelena",
	[T_CONFIG_LEDS_COLOR_BLUE]="Plava",
	[T_CONFIG_LEDS_COLOR_PURPLE]="Ljubičasta",
	[T_CONFIG_LEDS_COLOR_PINK]="Roza",
	[T_CONFIG_LEDS_COLOR_WHITE]="White",
	[T_CONFIG_LEDS_BRIGHTNESS]="LED svjetlina",
	[T_CONFIG_LEDS_BRIGHTNESS_10]="10%",
	[T_CONFIG_LEDS_BRIGHTNESS_20]="20%",
	[T_CONFIG_LEDS_BRIGHTNESS_30]="30%",
	[T_CONFIG_LEDS_BRIGHTNESS_40]="40%",
	[T_CONFIG_LEDS_BRIGHTNESS_50]="50%",
	[T_CONFIG_LEDS_BRIGHTNESS_100]="100% ***UPOZORENJE: doći će do oštećenja bez vanjskog USB napajanja***",
	[T_CONFIG_BINMODE_SELECT]="Select binary mode",
	[T_HELP_DUMMY_COMMANDS]="Dummy commands valid in position 1",
	[T_HELP_DUMMY_INIT]="Dummy init command",
	[T_HELP_DUMMY_TEST]="Dummy test command",
	[T_HELP_DUMMY_FLAGS]="Dummy flags",
	[T_HELP_DUMMY_B_FLAG]="-b require Bus Pirate button to be pushed. Takes no parameters",
	[T_HELP_DUMMY_I_FLAG]="-i <integer>. Requires integer number parameter",
	[T_HELP_DUMMY_FILE_FLAG]="-f <file>. Create/write/read <file>. Requires file string parameter",
	[T_HELP_SLE4442]="SLE4442 smart card interface",
	[T_HELP_SLE4442_INIT]="Initialize card with ISO7816-3 ATR. Default action",
	[T_HELP_SLE4442_DUMP]="Display main, security and protect memory",
	[T_HELP_SLE4442_UNLOCK]="Unlock card with Programmable Security Code (PSC)",
	[T_HELP_SLE4442_WRITE]="Write data to card (requires unlock)",
	[T_HELP_SLE4442_ERASE]="Erase data from range 0x32-0x255 (requires unlock)",
	[T_HELP_SLE4442_PSC]="Change Programmable Security Code (PSC)",
	[T_HELP_SLE4442_ADDRESS_FLAG]="Write address flag",
	[T_HELP_SLE4442_VALUE_FLAG]="Write value flag",
	[T_HELP_SLE4442_CURRENT_PSC_FLAG]="Current Programmable Security Code (PSC) flag",
	[T_HELP_SLE4442_NEW_PSC_FLAG]="New Programmable Security Code (PSC) flag",
	[T_HELP_GCMD_W]="onboard power supply with programmable fuse",
	[T_HELP_GCMD_W_DISABLE]="Disable onboard power supply",
	[T_HELP_GCMD_W_ENABLE]="Enable onboard power supply, show configuration menu",
	[T_HELP_GCMD_W_VOLTS]="Voltage, 0.8-5.0volts",
	[T_HELP_GCMD_W_CURRENT_LIMIT]="Current limit, 0-500mA",
	[T_HELP_GCMD_P]="onboard pull-up resistors",
	[T_HELP_HELP]="help for Bus Pirate commands and modes",
	[T_HELP_SYS_COMMAND]="Commands to access the help system",
	[T_HELP_SYS_DISPLAY]="Show display mode help (such as oscilloscope)",
	[T_HELP_SYS_MODE]="Show mode specific commands and help",
	[T_HELP_SYS_HELP]="How to use the help system",
	[T_HELP_GCMD_SELFTEST]="run a complete system self-test",
	[T_HELP_GCMD_SELFTEST_CMD]="Run self-test",
	[T_HELP_GCMD_SELFTEST_H_FLAG]="Self-test help",
	[T_HELP_AUXIO]="set IO pin state, read input pins",
	[T_HELP_AUXIO_LOW]="Output, low/0. Reserves pin for output",
	[T_HELP_AUXIO_HIGH]="Output, high/1. Reserves pin for output",
	[T_HELP_AUXIO_INPUT]="Input, read state. Releases reserved pin",
	[T_HELP_AUXIO_IO]="IO pin number, 0-7",
	[T_HELP_DISK_HEX]="Print file contents in HEX format",
	[T_HELP_DISK_HEX_FILE]="Name of file in 8.3 format (example1.bin)",
	[T_HELP_DISK_HEX_ADDR]="Show address offset",
	[T_HELP_DISK_HEX_ASCII]="Show also ASCII dump",
	[T_HELP_DISK_HEX_SIZE]="Set line size in bytes",
	[T_HELP_DISK_HEX_OFF]="Set file read start offset in bytes",
	[T_HELP_DISK_HEX_PAGER_OFF]="Disable the pager for dumping",
	[T_HELP_DISK_CAT]="print file contents as text",
	[T_HELP_DISK_CAT_FILE]="Name of file in 8.3 format (example1.txt)",
	[T_HELP_DISK_MKDIR]="create directory on internal storage",
	[T_HELP_DISK_MKDIR_DIR]="Directory name, 8 characters max",
	[T_HELP_DISK_CD]="change to a directory on local storage",
	[T_HELP_DISK_CD_DIR]="Directory name, 8 characters max",
	[T_HELP_DISK_RM]="delete file or directory on local storage",
	[T_HELP_DISK_RM_FILE]="Name of file to delete, 8.3 format",
	[T_HELP_DISK_RM_DIR]="Name of directory to delete, 8 characters max",
	[T_HELP_DISK_LS]="list files and directories on local storage",
	[T_HELP_DISK_LS_DIR]="List contents of this directory, optional",
	[T_HELP_DISK_FORMAT]="erase and format internal storage in FAT16 format",
	[T_HELP_DISK_FORMAT_CMD]="All data will be lost, answer 'y' twice to continue",
	[T_HELP_DISK_LABEL]="get or set the disk label",
	[T_HELP_DISK_LABEL_GET]="returns the current label of the disk",
	[T_HELP_DISK_LABEL_SET]="sets the current label of the disk",
	[T_HELP_VADC]="measure voltage on IO pins",
	[T_HELP_VADC_SINGLE]="Single measurement",
	[T_HELP_VADC_CONTINUOUS]="Continuous measurement",
	[T_HELP_VADC_IO]="IO pin number, 0-7",
	[T_HELP_I2C_SCAN]="scan I2C addresses, with optional part number",
	[T_HELP_I2C_SCAN_VERBOSE]="Verbose mode, print potential part numbers",
	[T_HELP_FLAG]="Get additional help",
	[T_HELP_I2C_SI7021]="Read temperature and humidity from SI7021/HTU21/SHT21 sensor",
	[T_HELP_I2C_MS5611]="Read temperature and pressure from MS5611 sensor",
	[T_HELP_I2C_TSL2561]="Read light intensity (LUX) from TSL2561 sensor",
	[T_HELP_1WIRE_SCAN]="scan for 1-Wire devices",
	[T_HELP_1WIRE_DS18B20]="Query DS18B20 temperature sensor",
	[T_HELP_UART_BRIDGE]="open UART with raw data IO, usb to serial bridge mode",
	[T_HELP_UART_BRIDGE_EXIT]="UART bridge. Press Bus Pirate button to exit.",
	[T_HELP_UART_BRIDGE_TOOLBAR]="ENABLE toolbar while bridge is active (default: disabled)",
	[T_HELP_UART_BRIDGE_SUPPRESS_LOCAL_ECHO]="Suppress local echo, don't echo back sent data",
	[T_HELP_UART_NMEA]="parse NMEA GPS data",
	[T_HELP_SECTION_SCRIPT]="run scripts, macros and assign button functions",
	[T_HELP_CMD_SCRIPT]="Run script files, automation",
	[T_HELP_CMD_BUTTON]="Assign button functions",
	[T_HELP_CMD_MACRO]="Run macros, load a macro file",
	[T_HELP_CMD_TUTORIAL]="Run tutorial files",
	[T_HELP_CMD_PAUSE_KEY]="Press any key to continue (default)",
	[T_HELP_CMD_PAUSE_BUTTON]="Press the Bus Pirate button to continue",
	[T_HELP_CMD_PAUSE_EXIT]="'x' key to exit (e.g. script mode)",
	[T_HELP_BUTTON]="Assign script file to button press",
	[T_HELP_BUTTON_SHORT]="Assign script file to short button press",
	[T_HELP_BUTTON_LONG]="Assign script file to long button press",
	[T_HELP_BUTTON_FILE]="Script file to assign to button press",
	[T_HELP_BUTTON_HIDE]="Hide comments",
	[T_HELP_BUTTON_EXIT]="Exit script on error",
	[T_HELP_LOGIC]="logic analyzer control",
	[T_HELP_LOGIC_START]="start logic analyzer",
	[T_HELP_LOGIC_STOP]="stop logic analyzer",
	[T_HELP_LOGIC_HIDE]="hide logic graph",
	[T_HELP_LOGIC_SHOW]="show logic graph",
	[T_HELP_LOGIC_NAV]="navigate logic graph with arrow keys, x to exit",
	[T_HELP_LOGIC_INFO]="show configuration info",
	[T_HELP_LOGIC_FREQUENCY]="set sample frequency in Hz",
	[T_HELP_LOGIC_OVERSAMPLE]="set oversample rate, multiplies the sample frequency",
	[T_HELP_LOGIC_DEBUG]="set debug level: 0-2",
	[T_HELP_LOGIC_SAMPLES]="set number of samples",
	[T_HELP_LOGIC_TRIGGER_PIN]="set trigger pin, 0-7",
	[T_HELP_LOGIC_TRIGGER_LEVEL]="set trigger level, 0-1",
	[T_HELP_CMD_CLS]="Clear and reset the terminal",
	[T_HELP_SECTION_TOOLS]="tools and utilities",
	[T_HELP_CMD_LOGIC]="Logic analyzer",
	[T_HELP_CMD_SMPS]="Switch mode power supply (plank required)",

};

static_assert(count_of(bs_ba)==T_LAST_ITEM_ALWAYS_AT_THE_END, "Missing bs_ba translations!");
