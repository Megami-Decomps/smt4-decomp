#include "shard/W6_W6Match6_PhaseTrig.h"
#include "nn/math/MathArithmetic.h"

extern "C" {

/* The cosine of a phase (65536 per turn), interpolated from the 256-entry sine/cosine table
 * (nn::math's CosFIdx). */
f32 phaseCosInterpolate(f32 angle)
{
    f32 magnitude = fabsf(angle);
    while (magnitude >= 65536.0f)
        magnitude -= 65536.0f;
    u16 index = nn::math::F32ToU16(magnitude);
    f32 fraction = magnitude - nn::math::U16ToF32(index);
    index &= 0xff;
    return g_sinCosTable[index].cosine + fraction * g_sinCosTable[index].cosineDelta;
}
}
