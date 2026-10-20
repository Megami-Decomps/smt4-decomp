/* Runs the fallback handlers when their checks fail; returns whether FUN_00246708 reported success. */
#include "common.h"

extern "C" {

extern s32 FUN_00246708(void);
extern s32 FUN_002893d8(void);
extern void FUN_0024679c(void);
extern void FUN_002ee56c(s32 arg);

u8 FUN_002fe194(void)
{
    s32 ok;

    if (FUN_002893d8() == 0) {
        FUN_0024679c();
    }
    ok = FUN_00246708();
    if (ok == 0) {
        FUN_002ee56c(ok);
    }
    return ok != 0;
}

}
