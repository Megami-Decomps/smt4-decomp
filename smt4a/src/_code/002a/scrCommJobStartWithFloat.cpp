#include "common.h"

extern "C" {

u32 scrGetArg(s32 index);
f32 FUN_00275b10(s32 index);
void scrSetResult(u32 value);
s32 FUN_0039af04(void);
u32 FUN_0039af48(u32 id, u32 arg4, u32 arg1, u32 arg2, f32 arg3);
void eventTexSetJobParam(void);
void FUN_0036f298(u32 handle);

/* Script command: starts a job from args 0-4 (arg 3 is a float) when allowed and returns its handle (0 when not started). */
s32 scrCommJobStartWithFloat(void)
{
    u32 id = scrGetArg(0);
    u32 arg1 = scrGetArg(1);
    u32 arg2 = scrGetArg(2);
    f32 arg3 = FUN_00275b10(3);
    u32 arg4 = scrGetArg(4);
    u32 handle = 0;

    if (FUN_0039af04() != 0) {
        handle = FUN_0039af48(id, arg4, arg1, arg2, arg3);
        eventTexSetJobParam();
        FUN_0036f298(handle);
    }
    scrSetResult(handle);
    return 1;
}

} /* extern "C" */
