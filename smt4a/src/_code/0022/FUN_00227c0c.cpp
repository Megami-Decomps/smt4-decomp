#include "common.h"

extern "C" {

void FUN_00333784(u32 a, u32 b);
void FUN_00371b74(void);
u32 scrGetArg(u32 index);
s32 FUN_00268690(void);
s32 scrGetCommandFrame(void);

/* Script command: when scrGetCommandFrame reports 0, forwards script arguments 0 and 1 to FUN_00333784 and returns 0; otherwise runs FUN_00371b74 if FUN_00268690 allows it and returns whether it did. */
u8 FUN_00227c0c(void)
{
    s32 result;
    u32 arg0;
    u32 arg1;

    result = scrGetCommandFrame();
    if (result != 0) {
        result = FUN_00268690();
        if (result != 0) {
            FUN_00371b74();
        }
        return result != 0;
    }
    arg0 = scrGetArg(0);
    arg1 = scrGetArg(1);
    FUN_00333784(arg0, arg1);
    return 0;
}

} /* extern "C" */
