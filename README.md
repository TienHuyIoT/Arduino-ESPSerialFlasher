# Esp Serial flasher

## Overview
Arduino Library for programming and interacting with Espressif SoCs from other MCUs using UART communication interface.

## Limitations
The following limitations are currently known:

- ESP8266 targets require `MD5_ENABLED=0` due to ROM bootloader limitations
- Only one target can be flashed at a time (library holds state in static variables)

## Licence

Code is distributed under Apache 2.0 license.

## Credits
This Library is based off of code from [esp-serial-flasher](https://github.com/espressif/esp-serial-flasher) and reference [ESPSerialFlasher](https://github.com/winner10920/ESPSerialFlasher)

## Contact Me
If you have any Questions, Comments, Concerns please email me tienhuyiot@gmail.com
