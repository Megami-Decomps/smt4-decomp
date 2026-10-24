#include "common.h"

extern "C" {

void whisperEffectStart(s32 id);
s32 scrGetArg(s32 index);

/* Script command: starts the whisper effect given by the first argument. */
u32 FUN_0036f734(void)
{
    whisperEffectStart(scrGetArg(0));
    return 1;
}

} /* extern "C" */
