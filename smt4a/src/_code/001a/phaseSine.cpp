#include "shard/W6_W6Match6_PhaseTrig.h"
#include "nn/math/MathArithmetic.h"

extern "C" {

/* The sine of a phase (65536 per turn), interpolated from the 256-entry sine/cosine table
 * (nn::math's SinFIdx; this build wraps the phase with a float remainder instead of a loop). */
f32 phaseSine(f32 x)
{
    f32 magnitude = fabsf(x);
    if (magnitude >= 65536.0f)
        magnitude = fmodf(magnitude, 65536.0f);
    u16 index = nn::math::F32ToU16(magnitude);
    f32 fraction = magnitude - nn::math::U16ToF32(index);
    index &= 0xff;
    f32 value = g_sinCosTable[index].sine + fraction * g_sinCosTable[index].sineDelta;
    return x < 0.0f ? -value : value;
}

} /* extern "C" */
