#pragma once

/*
### Key Configuration Options

**Interface Selection (choose one):**

- `SERIAL_FLASHER_INTERFACE_UART` (default)
- `SERIAL_FLASHER_INTERFACE_SPI` (RAM loading only)
- `SERIAL_FLASHER_INTERFACE_USB`
- `SERIAL_FLASHER_INTERFACE_SDIO` (experimental)

**Common Options:**

- `MD5_ENABLED`: Enable flash verification (default: enabled, disable for ESP8266)
- `SERIAL_FLASHER_WRITE_BLOCK_RETRIES`: Number of write retries (default: 3)
- `SERIAL_FLASHER_RESET_HOLD_TIME_MS`: Reset assertion time (default: 100ms)
- `SERIAL_FLASHER_BOOT_HOLD_TIME_MS`: Boot pin assertion time (default: 50ms)
*/

#define SERIAL_FLASHER_INTERFACE_UART       1
#define MD5_ENABLED                         1
#define SERIAL_FLASHER_WRITE_BLOCK_RETRIES  3
#define SERIAL_FLASHER_RESET_HOLD_TIME_MS   100
#define SERIAL_FLASHER_BOOT_HOLD_TIME_MS    50
