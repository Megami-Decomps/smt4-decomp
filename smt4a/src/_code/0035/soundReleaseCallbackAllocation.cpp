#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" void asdMemFree(void *allocation);

/* Release the sound archive's string block once. */
extern "C" void soundReleaseCallbackAllocation(void)
{
    if (g_asdSoundSystem.stringBlock != NULL) {
        asdMemFree(g_asdSoundSystem.stringBlock);
        g_asdSoundSystem.stringBlock = NULL;
    }
}
