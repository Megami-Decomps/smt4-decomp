/* Runs the fallback handlers when their checks fail; returns whether FUN_003c5d8c reported success. */
#include "common.h"

extern "C" {

extern s32 FUN_003c5d8c(void);
extern s32 scrGetCommandFrame(void);
extern void FUN_003afd30(void);
extern void FUN_0036f0a0(s32 arg);

u8 FUN_0038a3d8(void)
{
    s32 ok;

    if (scrGetCommandFrame() == 0) {
        FUN_003afd30();
    }
    ok = FUN_003c5d8c();
    if (ok == 0) {
        FUN_0036f0a0(ok);
    }
    return ok != 0;
}

}
