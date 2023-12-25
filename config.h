// Copyright 2023 Jared McNamara (@jaredm577)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define HAL_USE_I2C TRUE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP20
#define I2C1_SCL_PIN GP21
#define ENCODERS_PAD_A { GP27 }
#define ENCODERS_PAD_B { GP28 }

#define OLED_DISPLAY_128X64

#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE

#include_next <mcuconf.h> // for i2c
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
