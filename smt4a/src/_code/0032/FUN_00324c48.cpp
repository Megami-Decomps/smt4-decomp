/* NON_MATCHING: compiler uses r0 rather than ip for the floating-point store base. */
#include "common.h"

namespace { struct EffectSettings { u32 first; u32 second; u32 flags; u32 third; f32 values[5]; }; }

extern "C" {
/* Updates or returns the requested state. */
extern EffectSettings g_mapSelection;
void FUN_00324c48(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e)
{
    g_mapSelection.first = first;
    g_mapSelection.second = second;
    g_mapSelection.flags = 0xffffffff;
    g_mapSelection.values[0] = a;
    g_mapSelection.values[1] = b;
    g_mapSelection.values[2] = c;
    g_mapSelection.values[3] = d;
    g_mapSelection.values[4] = e;
    g_mapSelection.third = third;
}
}
