#include "common.h"

struct SoundCallbackHeapState {
    /* 0x000 */ u8 unk000[0x4e0];
    /* 0x4E0 */ void *allocation;
};

extern "C" SoundCallbackHeapState g_asdSoundSystem;
extern "C" void asdMemFree(void *allocation);

/* Release the sound subsystem's callback allocation once. */
extern "C" void soundReleaseCallbackAllocation(void)
{
    if (g_asdSoundSystem.allocation != NULL) {
        asdMemFree(g_asdSoundSystem.allocation);
        g_asdSoundSystem.allocation = NULL;
    }
}
