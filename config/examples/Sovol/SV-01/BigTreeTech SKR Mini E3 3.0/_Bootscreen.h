/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */
#define CUSTOM_BOOTSCREEN_BMPWIDTH  112

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000011,B11100100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B11110000,B00111111,B11111111,B00000000,
  B00000100,B00011100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000011,B00011100,B00000111,B10000001,B11000000,
  B00001000,B00001100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000011,B00001110,B00000111,B10000000,B11100000,
  B00010000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000011,B00001110,B00000111,B10000000,B01110000,
  B00010000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000011,B00001110,B00000111,B10000000,B01110000,
  B00011000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00001110,B00000111,B10000000,B00111000,
  B00011100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00001110,B00000111,B10000000,B00111000,
  B00011111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B10000000,B00000000,B00001100,B00000111,B10000000,B00111000,
  B00001111,B11111000,B00000011,B11100001,B11111000,B01111000,B00111110,B00000001,B10000000,B00000000,B00010000,B00000111,B10000000,B00111100,
  B00000111,B11111100,B00001100,B00110000,B01110000,B00000000,B11000011,B00000001,B10000000,B00000001,B11110000,B00000111,B10000000,B00111100,
  B00000001,B11111110,B00011100,B00011000,B01110000,B00100001,B11000001,B10000001,B10000000,B00000000,B00011100,B00000111,B10000000,B00111100,
  B00000000,B00011110,B00011100,B00011100,B00111000,B00000001,B11000001,B11000001,B10000000,B00000000,B00001110,B00000111,B10000000,B00111100,
  B00000000,B00000110,B00111100,B00011100,B00111000,B01000011,B11000001,B11000001,B10000000,B00000000,B00000111,B00000111,B10000000,B00111000,
  B00000000,B00000010,B00111100,B00011100,B00011100,B00000011,B11000001,B11000001,B10000000,B00000000,B00000111,B00000111,B10000000,B00111000,
  B00000000,B00000010,B00111100,B00011100,B00011100,B10000011,B11000001,B11000001,B10000000,B00000000,B00000111,B00000111,B10000000,B00111000,
  B00010000,B00000010,B00111100,B00011100,B00001110,B00000011,B11000001,B11000001,B10000000,B00000111,B00000111,B00000111,B10000000,B01110000,
  B00010000,B00000010,B00011100,B00011100,B00001111,B00000001,B11000001,B11000001,B10000000,B00000111,B00000111,B00000111,B10000000,B01110000,
  B00011000,B00000100,B00011100,B00011000,B00000110,B00000001,B11000001,B10000001,B10000000,B00000110,B00001110,B00000111,B10000000,B11100000,
  B00011100,B00001000,B00001100,B00110000,B00000110,B00000000,B11000011,B00000001,B10000000,B00000010,B00001100,B00000111,B10000001,B11000000,
  B00010011,B11110000,B00000011,B11100000,B00000000,B00000000,B00111110,B00000111,B11100000,B00000001,B11110000,B00111111,B11111111,B00000000
};
