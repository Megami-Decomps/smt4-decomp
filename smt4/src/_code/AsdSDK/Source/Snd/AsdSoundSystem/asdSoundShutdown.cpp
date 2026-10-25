/* NON_MATCHING: system pointer lifetime matches; duck-global and floating-zero pool entries remain reversed. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndDuck g_asdSoundDuck;

void FUN_001177e0(void);
void FUN_0010c350(void);
void FUN_0010bf78(void);
void sndSystemFinalize(void);
void sndSystemShutdown(void);
void FUN_0010fc90(void);
void asdMemFree(void *block);

/* Shuts the sound system down: stops everything, clears the duck state and frees the work memory. */
void asdSoundShutdown(void)
{
    AsdSoundSystem *system = &g_asdSound;
    FUN_001177e0();
    FUN_0010c350();
    g_asdSoundDuck.holdFrames = 0;
    g_asdSoundDuck.level = 0.0f;
    g_asdSoundDuck.fadeInFrames = 0;
    g_asdSoundDuck.fadeOutFrames = 0;
    g_asdSoundDuck.unk08 = 0;
    g_asdSoundDuck.timer = 0;
    g_asdSoundDuck.fading = 0;
    g_asdSoundDuck.flags = 0;
    g_asdSoundDuck.active = 0;
    FUN_0010bf78();
    if (system->workBuffer != NULL) {
        asdMemFree(system->workBuffer);
    }
    sndSystemFinalize();
    sndSystemShutdown();
    dspComponentUnload();
    FUN_0010fc90();
}

} /* extern "C" */
