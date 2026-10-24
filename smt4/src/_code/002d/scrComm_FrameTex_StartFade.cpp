#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void frameTexStartFade(s32 mode);

/* Script command: starts the frame texture fade selected by the argument. */
u32 scrComm_FrameTex_StartFade(void)
{
    frameTexStartFade(scrGetArg(0));
    return 1;
}

} /* extern "C" */
