/* NON_MATCHING: retail schedules the sign test and interpolation table loads earlier. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
f32 FUN_001b4030(f32 value, f32 divisor);
extern const PhaseTrigEntry g_sinCosTable[256];

/* Interpolates sine and cosine from a phase measured in 256 steps per revolution. */
void mathSinCos(f32 *sine, f32 *cosine, f32 phase)
{
    union { f32 value; s32 bits; } magnitude;
    magnitude.value = fabsf(phase);
    if (magnitude.bits >= 0x47800000) {
        magnitude.value = FUN_001b4030(magnitude.value, 65536.0f);
    }
    u16 whole = (u32)magnitude.value;
    f32 fraction = magnitude.value - (f32)whole;
    const PhaseTrigEntry &entry = g_sinCosTable[(u8)whole];
    f32 interpolatedSine = entry.sine + fraction * entry.sineDelta;
    f32 interpolatedCosine = entry.cosine + fraction * entry.cosineDelta;
    if (phase < 0.0f)
        *sine = -interpolatedSine;
    else
        *sine = interpolatedSine;
    *cosine = interpolatedCosine;
}

} /* extern "C" */
