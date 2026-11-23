/* nn::math's table trig: the sine table lookup and its radian header inline. */
#ifndef NW_MATH_TRIG_H
#define NW_MATH_TRIG_H

#include "common.h"

/* The trig table lookup (nn::math's SinCosFIdx): sine and cosine of an index of 256 steps a turn. */
extern "C" void mathSinCos(f32 *sine, f32 *cosine, f32 index);

/* nn::math::SinCosRad: the sine table takes the angle as a table index. */
static __inline void sinCosRad(f32 *sine, f32 *cosine, f32 radians)
{
    mathSinCos(sine, cosine, radians * 40.743664f);
}

/* nn::math::TanRad: the tangent as the table's sine over its cosine. */
static __inline f32 tanRad(f32 radians)
{
    f32 sine;
    f32 cosine;
    sinCosRad(&sine, &cosine, radians);
    return sine / cosine;
}

#endif
