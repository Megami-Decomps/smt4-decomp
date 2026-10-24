#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
int soundChannelRequestIfEnabled(u32 handle, u32 a, u32 frames);

/* Script command: requests the sound channel from the argument with 60 frames. */
u32 scrComm_Sound_RequestChannel60(void)
{
    soundChannelRequestIfEnabled(scrGetArg(0), 0, 60);
    return 1;
}

} /* extern "C" */
