#include "camp/Unite/UniteGlobals.h"

extern "C" {

void soundChannelRequestIfEnabled(u32 handle, s32 a, s32 b);

/* Calls soundChannelRequestIfEnabled(handle, 0, 0x3C) for the record at 0x57F290 and returns 1; returns 0 when there is none. */
u32 uniteSoundRequest(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    soundChannelRequestIfEnabled(g_unite->returnState.soundChannel, 0, 0x3C);
    return 1;
}

} /* extern "C" */
