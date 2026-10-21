#include "common.h"

extern "C" {

extern u32 scrGetArg(void);
extern f32 FUN_00266b44(int kind);
extern u32 FUN_0030a0f0(u32 arg, f32 a, f32 b);
extern void eventTexSetJobParam(void);
extern void eventTexAddJob(u32 handle);
extern void scrSetResult(u32 value);

/* Script command. */
u32 FUN_001ed3d4(void)
{
    u32 arg = scrGetArg();
    u32 handle;

    handle = FUN_0030a0f0(arg, FUN_00266b44(1), 0.0f);
    eventTexSetJobParam();
    eventTexAddJob(handle);
    scrSetResult(handle);
    return 1;
}

} /* extern "C" */
