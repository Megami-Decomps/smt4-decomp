/* NON_MATCHING: compiler uses r0 rather than ip for the floating-point store base. */
#include "map/MapSelection.h"

#include "common.h"

extern "C" {
/* Updates or returns the requested state. */

void FUN_00324c48(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e)
{
    g_mapSelection.id = first;
    g_mapSelection.kind = second;
    g_mapSelection.counter = 0xffffffff;
    g_mapSelection.values[0] = a;
    g_mapSelection.values[1] = b;
    g_mapSelection.values[2] = c;
    g_mapSelection.values[3] = d;
    g_mapSelection.values[4] = e;
    g_mapSelection.flags = third;
}
}
