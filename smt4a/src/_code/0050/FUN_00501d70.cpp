/* NON_MATCHING: register allocation: retail keeps both stack arguments in r4/r8 (and saves r3-r9); the build keeps the last one in s16 (vldr/vstr) and saves fewer registers. */
#include "nn/Result.h"

extern "C" {

s32 FUN_0042d3d8(s32 first, s32 second);
s32 FUN_00430894(u32 handle, u32 first, u32 second, u32 third, s32 fourth);

extern u8 g_asdCecModuleFlags[]; /* 0x5b448b - 1 */

/* Runs the cec call; when it fails with the not-ready result, starts the module (sets its ready flag) and runs it once more. */
s32 FUN_00501d70(u32 unused, u32 handle, u32 first, u32 second, u32 third, s32 fourth)
{
    s32 result = FUN_00430894(handle, first, second, third, fourth);

    if (!nnResultIsSuccess(result) && result == (s32)0xc8a10bf0) {
        FUN_0042d3d8(1, 0);
        g_asdCecModuleFlags[1] = 1;
        result = FUN_00430894(handle, first, second, third, fourth);
    }
    return result;
}

} /* extern "C" */
