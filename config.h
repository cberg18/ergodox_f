/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"
//#define PRODUCT         Dactyl Ergo(6x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 7
#define MATRIX_COLS 14

// wiring of each half
#define MATRIX_ROW_PINS { F0, F4, F5, F6, F7, B5, B6 }
#define MATRIX_COL_PINS { B7, D1, D2, D3, C6, D7, B4 }

#define DIODE_DIRECTION COL2ROW
/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
//#define MANUFACTURER    tshort

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0



