#include "common.h"

extern "C" {

void FUN_0031caec(s32 arg);
void FUN_0039b7fc(void);
s32 scrGetArg(s32 index);
s32 FUN_002deb84(void);
s32 FUN_0035c3a8(void);

/* Script command: when FUN_002deb84 reports nonzero, runs FUN_0039b7fc if FUN_0035c3a8 allows it and returns whether it did; otherwise passes script argument 0 to FUN_0031caec and returns 0. */
u8 FUN_002c1440(void)
{
    s32 result;
    s32 arg;

    result = FUN_002deb84();
    if (result != 0) {
        result = FUN_0035c3a8();
        if (result != 0) {
            FUN_0039b7fc();
        }
        return result != 0;
    }
    arg = scrGetArg(0);
    FUN_0031caec(arg);
    return 0;
}

} /* extern "C" */
