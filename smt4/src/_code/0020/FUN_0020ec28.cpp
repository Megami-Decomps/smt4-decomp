/* NON_MATCHING: retail lays the returns out differently (a shared `return 0` at the end, `return 1` right after the first branch); built branches the other way */
#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 FUN_002b89a4(s32 arg);
s32 FUN_002c1d5c(void);
void FUN_002a03d8(s32 index, s32 value);

/* Script wait: returns 1 while the condition is still pending. After the first frame it waits for FUN_002b89a4 twice; on the first frame it
 * starts the effect (FUN_002a03d8 for both indices) unless FUN_002c1d5c holds or script argument 0 is neither 0 nor 1. */
u32 FUN_0020ec28(s32 firstArg)
{
    s32 value = scrGetArg(firstArg);

    s32 mode;

    if (scrGetCommandFrame() != 0) {
        if (FUN_002b89a4(0) != 0 && FUN_002b89a4(0) != 0) {
            return 1;
        }
        return 0;
    }
    if (FUN_002c1d5c() != 0) {
        return 1;
    }
    mode = scrGetArg(0);
    if (mode != 0 && mode != 1) {
        return 1;
    }
    FUN_002a03d8(0, value);
    FUN_002a03d8(1, value);
    return 0;
}

} /* extern "C" */
