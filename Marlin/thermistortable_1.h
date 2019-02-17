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

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
// 100k bed thermistor
const short temptable_1[][2] PROGMEM = {
  { OV(  27), 300 },
  { OV(  28), 295 },
  { OV(  31), 290 },
  { OV(  33), 285 },
  { OV(  35), 280 },
  { OV(  38), 275 },
  { OV(  41), 270 },
  { OV(  44), 265 },
  { OV(  48), 260 },
  { OV(  52), 255 },
  { OV(  56), 250 },
  { OV(  61), 245 },
  { OV(  66), 240 },
  { OV(  71), 235 },
  { OV(  78), 230 },
  { OV(  84), 225 },
  { OV(  92), 220 },
  { OV( 100), 215 },
  { OV( 109), 210 },
  { OV( 120), 205 },
  { OV( 131), 200 },
  { OV( 143), 195 },
  { OV( 156), 190 },
  { OV( 171), 185 },
  { OV( 187), 180 },
  { OV( 205), 175 },
  { OV( 224), 170 },
  { OV( 245), 165 },
  { OV( 268), 160 },
  { OV( 293), 155 },
  { OV( 320), 150 },
  { OV( 348), 145 },
  { OV( 379), 140 },
  { OV( 411), 135 },
  { OV( 445), 130 },
  { OV( 480), 125 },
  { OV( 516), 120 },
  { OV( 553), 115 },
  { OV( 591), 110 },
  { OV( 628), 105 },
  { OV( 665), 100 },
  { OV( 702),  95 },
  { OV( 737),  90 },
  { OV( 770),  85 },
  { OV( 801),  80 },
  { OV( 830),  75 },
  { OV( 857),  70 },
  { OV( 881),  65 },
  { OV( 903),  60 },
  { OV( 922),  55 },
  { OV( 939),  50 },
  { OV( 954),  45 },
  { OV( 966),  40 },
  { OV( 977),  35 },
  { OV( 985),  30 },
  { OV( 993),  25 },
  { OV( 999),  20 },
  { OV(1004),  15 },
};
