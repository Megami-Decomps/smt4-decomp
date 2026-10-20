#include "common.h"

extern "C" {

void FUN_00208a34(s32 a, u32 b);
s32 scrGetArg(s32 index);
s32 FUN_0023a5d8(void);
s32 scrGetCommandFrame(void);

/* Script command: when scrGetCommandFrame reports 0, forwards script arguments 0 (as a short) and 1 to FUN_00208a34; returns whether FUN_0023a5d8 holds. */
u8 FUN_0025ff00(void)
{
    s16 first;
    s32 result;
    u32 second;

    result = scrGetCommandFrame();
    if (result == 0) {
        first = scrGetArg(0);
        second = scrGetArg(1);
        FUN_00208a34(first, second);
    }
    result = FUN_0023a5d8();
    return result != 0;
}

} /* extern "C" */
