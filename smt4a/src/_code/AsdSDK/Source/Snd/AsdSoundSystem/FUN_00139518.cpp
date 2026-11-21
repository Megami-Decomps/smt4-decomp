/* NON_MATCHING: the barrier (mcr c7, c10, 5) matches via nn/svc.h; retail loads g_asdSoundSystem into r7 at entry and resets the duck through r0 (status derived from it), where armcc keeps the duck base and folds the status offsets into it. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "nn/svc.h"

/* The sound thread object the engine reaches through _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv: its two request words. */
struct SoundThreadView {
    u8 unk000[0x1e8];
    u32 requestLow;
    u32 requestHigh;
};

extern "C" {
extern AsdSndControlA g_asdSoundDuck;

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
    AsdSndStatusApoc *status = &g_asdSoundDuck.status;
    if (status->ready != 0) {
        SoundThreadView *soundThread = _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv();
        soundThread->requestLow = 0;
        nn::os::DataMemoryBarrier();
        soundThread->requestHigh = 0;

        for (s32 i = 0; i < status->objectCount; ++i) {
            FUN_00152bf8(asdSoundObjectAt(i));
        }
        status->ready = 0;
        status->section.unk08 = -1;
    }
    if (g_asdSoundSystem.workBuffer != NULL) {
        asdMemFree(g_asdSoundSystem.workBuffer);
    }
    sndSystemFinalize();
    sndSystemShutdown();
    dspUnloadIdleComponent();
    dspCallbackShutdown();
}
