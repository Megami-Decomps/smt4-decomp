/* NON_MATCHING: the barrier (mcr c7, c10, 5) now matches via nn/svc.h; retail keeps the sound-system address in r7 from entry and the status pointer in r5/r6 (ldrb [r5,#25]) where armcc folds it into the duck base here. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "nn/svc.h"

/* The sound thread object the engine reaches through _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv: its two request words. */
struct SoundThreadView {
    u8 unk000[0x1e8];
    u32 requestLow;
    u32 requestHigh;
};

/* Apocalypse's allocation pointer lies past the shared IV sound-system definition. */
struct SoundSystemMemoryView {
    u8 unk000[0x4cc];
    void *buffer;
};

/* The duck state and the sound layer's status block, which follows it. */
struct SoundControl {
    AsdSndDuck duck;
    AsdSndStatusApoc status;
};

extern "C" {
extern SoundSystemMemoryView g_asdSoundSystem;
extern SoundControl g_asdSoundDuck;

void FUN_00150784(void);
void FUN_00141b24(void);
SoundThreadView *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
void FUN_00152bf8(AsdSndObject *object);
void asdMemFree(void *memory);
void sndSystemFinalize(void);
void sndSystemShutdown(void);
u32 dspUnloadIdleComponent(void);
void dspCallbackShutdown(void);
}

/* The index-th live sound object, or NULL when the index is outside the list. */
static AsdSndObject *asdSoundObjectAt(s32 index)
{
    AsdSndStatusApoc *status = &g_asdSoundDuck.status;
    AsdSndObject *object = NULL;

    if (index >= 0 && status->objectCount > index) {
        object = status->objects;
        for (s32 i = 0; i < index; ++i) {
            object = object->next;
        }
    }
    return object;
}

/* Clears the ducking state. */
static void asdSoundDuckReset(AsdSndDuck *duck)
{
    duck->holdFrames = 0;
    duck->level = 0.0f;
    duck->fadeInFrames = 0;
    duck->fadeOutFrames = 0;
    duck->unk08 = 0;
    duck->timer = 0;
    duck->fading = 0;
    duck->flags = 0;
    duck->active = 0;
}

/* Shuts the sound layer down: stops the sound objects, drops the allocation and finalizes the
 * sound system and its DSP component. */
extern "C" void FUN_00139518(void)
{
    FUN_00150784();
    FUN_00141b24();
    asdSoundDuckReset(&g_asdSoundDuck.duck);
    if (g_asdSoundDuck.status.ready != 0) {
        SoundThreadView *soundThread = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        soundThread->requestLow = 0;
        nn::os::DataMemoryBarrier();
        soundThread->requestHigh = 0;

        for (s32 i = 0; i < g_asdSoundDuck.status.objectCount; ++i) {
            FUN_00152bf8(asdSoundObjectAt(i));
        }
        g_asdSoundDuck.status.ready = 0;
        g_asdSoundDuck.status.unk14 = -1;
    }
    if (g_asdSoundSystem.buffer != NULL) {
        asdMemFree(g_asdSoundSystem.buffer);
    }
    sndSystemFinalize();
    sndSystemShutdown();
    dspUnloadIdleComponent();
    dspCallbackShutdown();
}
