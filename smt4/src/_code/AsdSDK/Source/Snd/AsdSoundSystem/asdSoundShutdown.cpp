/* NON_MATCHING: 2 lines: the 0.0f duck level is loaded one instruction earlier than retail's. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match7_SoundInit.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndDuck g_asdSoundDuck;
extern AsdSndStatus g_asdSoundStatus;

void FUN_001177e0(void);
void asdSoundReleaseAllSlots(void);
void FUN_0010bf78(void);
void sndSystemFinalize(void);
void soundCallbacksCloseDspResource(void);
void asdMemFree(void *block);

/* asdSoundDuckSetup's body: AsdSoundSystem.cpp's own callers inline it (shutdown clears the duck with enable 0). */
static __inline void duckSetup(f32 level, s32 enable, u32 holdFrames, u32 unk08, u32 fadeInFrames, u32 fadeOutFrames)
{
    if (enable != 0) {
        AsdSndDuck *duck = &g_asdSoundDuck;
        duck->flags |= 1;
        duck->level = level;
        if (duck->level <= 0.0f) {
            duck->level = 0.0f;
        }
        if (duck->level > 1.0f) {
            duck->level = 1.0f;
        }
        duck->holdFrames = holdFrames;
        duck->fadeInFrames = fadeInFrames;
        duck->fadeOutFrames = fadeOutFrames;
        duck->unk08 = unk08;
        if (g_asdSoundStatus.hasStream == 0) {
            return;
        }
        duck->active = 1;
    } else {
        g_asdSoundDuck.holdFrames = 0;
        g_asdSoundDuck.level = 0.0f;
        g_asdSoundDuck.fadeInFrames = 0;
        g_asdSoundDuck.fadeOutFrames = 0;
        g_asdSoundDuck.unk08 = 0;
        g_asdSoundDuck.timer = 0;
        g_asdSoundDuck.fading = 0;
        g_asdSoundDuck.flags = 0;
        g_asdSoundDuck.active = 0;
    }
}

/* Shuts the sound system down: stops everything, clears the duck state and frees the work memory. */
void asdSoundShutdown(void)
{
    AsdSoundSystem *system = &g_asdSound;
    FUN_001177e0();
    asdSoundReleaseAllSlots();
    duckSetup(0.0f, 0, 0, 0, 0, 0);
    FUN_0010bf78();
    if (system->workBuffer != NULL) {
        asdMemFree(system->workBuffer);
    }
    sndSystemFinalize();
    sndSystemShutdown();
    dspComponentUnload();
    soundCallbacksCloseDspResource();
}

} /* extern "C" */
