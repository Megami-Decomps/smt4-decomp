/* Runs the three steps of the script command on the value from scrGetArg(0); always returns 1. */
#include "common.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern u32 FUN_00285e44(u32 value, s32 a, u32 b);
extern void FUN_00289234(u32 value);
extern void eventTexSetJobParam(void);
extern void scrSetResult(u32 value);

u32 FUN_001ab8ec(void)
{
    u32 value = scrGetArg(0);
    u32 arg = scrGetArg(1);

    value = FUN_00285e44(value, 0, arg);
    eventTexSetJobParam();
    FUN_00289234(value);
    scrSetResult(value);
    return 1;
}

}
