#pragma once
#include "common.h"

extern "C" {

/* Single-precision arc cosine (armlib acosf, named libm_acosf in build/w66_names.txt); the result is in radians. */
f32 libm_acosf(f32 value);

/* Single-precision cosine (libm cosf); the angle is in radians. */
f32 libm_cosf(f32 radians);

} /* extern "C" */
