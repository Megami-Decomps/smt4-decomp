/* NON_MATCHING: 18 lines: the wrap loop is the plain float compare retail has (armcc compiles it to the integer bit compare); retail converts and subtracts the whole part before the table loads and loads the table address ahead of the sign test. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[256];

/* Interpolates sine and cosine from a phase measured in 256 steps per revolution. */
void mathSinCos(f32 *sine, f32 *cosine, f32 phase)
{
    f32 magnitude = fabsf(phase);
    while (magnitude >= 65536.0f) {
        magnitude -= 65536.0f;
    }
    u16 whole = (u32)magnitude;
    f32 fraction = magnitude - (f32)whole;
    const PhaseTrigEntry &entry = g_sinCosTable[(u8)whole];
    f32 interpolatedSine = entry.sine + fraction * entry.sineDelta;
    f32 interpolatedCosine = entry.cosine + fraction * entry.cosineDelta;
    if (phase < 0.0f) {
        interpolatedSine = -interpolatedSine;
    }
    *sine = interpolatedSine;
    *cosine = interpolatedCosine;
}

} /* extern "C" */
