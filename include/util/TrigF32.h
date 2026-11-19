#pragma once
#include "common.h"

extern "C" {

/* Single-precision sine (libm sinf); the angle is in radians. */
f32 mathRemPio2f(f32 radians);

/* Single-precision cosine (libm cosf); the angle is in radians. */
f32 libm_cosf(f32 radians);

} /* extern "C" */
