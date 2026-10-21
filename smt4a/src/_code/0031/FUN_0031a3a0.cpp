#include "common.h"

extern "C" {
s32 scrGetCommandFrame(void);
s32 FUN_002e58d8(void);
s32 eventEffectIsLoaded(void);
void FUN_0036fad8(s32);

// Start the operation on its first command frame, then wait for completion.
u32 FUN_0031a3a0(void)
{
    if (scrGetCommandFrame() != 0)
        return FUN_002e58d8() != 0;
    if (eventEffectIsLoaded() != 0)
        return 1;
    FUN_0036fad8(1);
    return 0;
}
}
