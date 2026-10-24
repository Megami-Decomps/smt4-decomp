#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void whisperEffectStart(u32 devilId);

/* Script command: starts the whisper effect for the devil in argument zero. */
s32 FUN_002eea04(void)
{
    whisperEffectStart(scrGetArg(0));
    return 1;
}

} /* extern "C" */
