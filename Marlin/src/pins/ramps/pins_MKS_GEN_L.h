/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_INFO_NAME "MKS GEN L"

//
// Heaters / Fans
//
// Power outputs EFBF or EFBE
#define MOSFET_D_PIN 7

//
// CS Pins wired to avoid conflict with the LCD
// See https://www.thingiverse.com/asset:66604
//

#ifndef X_CS_PIN
  #define X_CS_PIN 59
#endif

#ifndef Y_CS_PIN
  #define Y_CS_PIN 63
#endif

#include "pins_RAMPS.h"

#undef SD_DETECT_PIN
#define SD_DETECT_PIN -1

#define FORCE_SOFT_SPI true

#undef DOGLCD_CS
#undef DOGLCD_MOSI
#undef DOGLCD_SCK
#undef DOGLCD_A0

#define DOGLCD_CS       27
#define DOGLCD_MOSI     29
#define DOGLCD_SCK      37
#define DOGLCD_A0       25


#undef BTN_EN1
#undef BTN_EN2
#undef BTN_ENC

#define BTN_EN1                         17
#define BTN_EN2                         23
#define BTN_ENC                         35