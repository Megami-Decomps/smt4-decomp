#include "common.h"

extern "C" {

void FUN_0031caec(s32 arg);
void FUN_0039b7fc(void);
s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 eventEffectIsStateFive(void);

/* Script command: when scrGetCommandFrame reports nonzero, runs FUN_0039b7fc if eventEffectIsStateFive allows it and returns whether it did; otherwise passes script argument 0 to FUN_0031caec and returns 0. */
u8 FUN_002c1440(void)
{
    s32 result;
    s32 arg;

    result = scrGetCommandFrame();
    if (result != 0) {
        result = eventEffectIsStateFive();
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
