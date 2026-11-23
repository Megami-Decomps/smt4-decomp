/* NON_MATCHING: nn::math's SinCosFIdx as in IV's matched mathSinCos (with the float-remainder wrap of the matched phaseCosine); only the index registers differ: retail keeps the u16 index in r2 and masks it into r0, the build reuses r0. */
#include "shard/W6_W6Match6_PhaseTrig.h"
#include "nn/math/MathArithmetic.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[256];

/* Interpolates sine and cosine from a phase measured in 256 steps per revolution. */
void mathSinCos(f32 *sine, f32 *cosine, f32 phase)
{
    f32 magnitude = fabsf(phase);
    if (magnitude >= 65536.0f)
        magnitude = fmodf(magnitude, 65536.0f);
    u16 index = nn::math::F32ToU16(magnitude);
    f32 fraction = magnitude - nn::math::U16ToF32(index);
    index &= 0xff;
    f32 sineValue = g_sinCosTable[index].sine + fraction * g_sinCosTable[index].sineDelta;
    f32 cosineValue = g_sinCosTable[index].cosine + fraction * g_sinCosTable[index].cosineDelta;
    *sine = phase < 0.0f ? -sineValue : sineValue;
    *cosine = cosineValue;
}

} /* extern "C" */
