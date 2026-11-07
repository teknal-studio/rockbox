/*
 * This config file is for Rockbox as an application on Android (Innioasis Y2)
 *
 * The Y2 runs the same hosted Android app as the Y1: the same 480x360 screen
 * size, the same five buttons, wheel and volume keys, and the same Android
 * services. So this target reuses the Y1 configuration and every
 * INNIOASIS_Y1 code path, which marks the shared Innioasis app. Code that is
 * only for the Y2 checks INNIOASIS_Y2.
 *
 * What differs is how the Y2's keys reach Android: the wheel arrives as
 * DPAD_UP/DOWN and Previous/Next as DPAD_LEFT/RIGHT (the Y1 sends media
 * keys). The Android app translates them where key events enter it.
 */
#ifndef INNIOASIS_Y1
#define INNIOASIS_Y1 1
#endif

#include "config/innioasisy1.h"
