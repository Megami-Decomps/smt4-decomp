#include "common.h"

extern "C" {

void FUN_0039b604(void);
void FUN_003b6d04(void);
s32 scrGetCommandFrame(void);
s32 FUN_00330904(void);

/* Script command: when scrGetCommandFrame reports nonzero, runs FUN_003b6d04 if FUN_00330904 allows it and returns whether it did; otherwise runs FUN_0039b604 and returns 0. */
u8 FUN_002c14cc(void)
{
    s32 result;

    result = scrGetCommandFrame();
    if (result != 0) {
        result = FUN_00330904();
        if (result != 0) {
            FUN_003b6d04();
        }
        return result != 0;
    }
    FUN_0039b604();
    return 0;
}

} /* extern "C" */
