/* NON_MATCHING: compiler uses r0 rather than ip for the floating-point store base. */
#include "common.h"

namespace { struct EffectSettings { u32 first; u32 second; u32 flags; u32 third; f32 values[5]; }; }

extern "C" {
/* Updates or returns the requested state. */
extern EffectSettings DAT_0049fd14;
void FUN_00289574(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e)
{
    DAT_0049fd14.first = first;
    DAT_0049fd14.second = second;
    DAT_0049fd14.flags = 0xffffffff;
    DAT_0049fd14.values[0] = a;
    DAT_0049fd14.values[1] = b;
    DAT_0049fd14.values[2] = c;
    DAT_0049fd14.values[3] = d;
    DAT_0049fd14.values[4] = e;
    DAT_0049fd14.third = third;
}
}
