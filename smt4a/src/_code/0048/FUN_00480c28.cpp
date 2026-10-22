/* NON_MATCHING: retail uses a separate second-tier base and a different schedule for float conversions. */
#include "common.h"

extern "C" {
extern u32 DAT_0057f6f8[2][11];
extern u32 DAT_0057f750[11];
extern u32 DAT_0057f77c[11];
extern u32 DAT_0057f7a8[11];
s32 FUN_001ba3d4(u32 value);

// Sum five tiers of counters using their respective score weights.
s32 FUN_00480c28()
{
    s32 first = 0;
    s32 second = 0;
    s32 third = 0;
    s32 fourth = 0;
    s32 fifth = 0;
    for (s32 i = 0; i < 11; ++i) {
        first += FUN_001ba3d4(DAT_0057f6f8[0][i]);
        second += FUN_001ba3d4(DAT_0057f6f8[1][i]);
        third += FUN_001ba3d4(DAT_0057f750[i]);
        fourth += FUN_001ba3d4(DAT_0057f77c[i]);
        fifth += FUN_001ba3d4(DAT_0057f7a8[i]);
    }
    return (s32)((f32)first * 70.4f + (f32)second * 300.8f + (f32)third * 800.0f
                 + (f32)fourth * 2120.0f + (f32)fifth * 5600.0f);
}
}
