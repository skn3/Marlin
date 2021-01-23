/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            3
#define STATUS_LOGO_WIDTH       24

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,
  B11111111,B11111111,B11111111,
  B10000010,B01001000,B00100001,
  B10000010,B01001000,B00100001,
  B10011110,B01001001,B00111001,
  B10000010,B00001001,B00100001,
  B10000010,B00011001,B00100001,
  B11110010,B01001001,B00111001,
  B10000010,B01001001,B00100001,
  B10000010,B01001001,B00100001,
  B11111111,B11111111,B11111111,
  B00000000,B00000000,B00000000,
  B11101110,B10111000,B01010111,
  B10001010,B10101000,B01010001,
  B10001010,B10101011,B01010011,
  B10001100,B10101000,B01010001,
  B11101010,B10111000,B00100111,
  B00000000,B00000000,B00000000
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#if HOTENDS < 2
  #define STATUS_LOGO_X          8
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          72
#else
  #define STATUS_LOGO_X          0
  #define STATUS_HEATERS_X      32
  #define STATUS_BED_X          80
#endif
