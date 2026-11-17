#include "camp/Unite/UniteGlobals.h"

extern "C" {

int soundChannelRequestIfEnabled(u32 value, int a, int b);

u32 uniteRequestSoundChannel(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    soundChannelRequestIfEnabled(g_unite->scriptIV.soundChannel, 0, 0x3c);
    return 1;
}

} /* extern "C" */
