/* NON_MATCHING: the duck setup (asdSoundDuckSetup's body) and the slot selection now follow retail's code; retail
 * computes the slot pointer before the active test, reads hasStream through the duck's address (duck + 0x1c is the
 * status block) and keeps the duck flags in a register for the selection; registers differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern AsdSndDuck g_asdSoundDuck;
extern AsdSndStatus g_asdSoundStatus;

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void nw_snd_SoundHeap_Create(void *heap, void *buffer, u32 size);
u32 nw_snd_SoundHeap_SaveState(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
void basicSoundStopOrFadeOut(s32 handle, s32 unk);
}

/* asdSoundDuckSetup's body: AsdSoundSystem.cpp's own callers inline it. */
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

/* Selects slot `index` of the first kind (-1 clears the selection), restarting it when `reset` is set. */
static __inline void selectActiveSoundSlotA(u32 index, u32 reset)
{
    if (index == ~0u) {
        g_asdSound.currentSlotA = NULL;
        return;
    }
    if (index >= ASD_SND_SLOT_A_COUNT) {
        return;
    }
    AsdSndSlotA *slot = &g_asdSound.slotsA[index];
    if (slot->active == 0) {
        return;
    }
    if (reset != 0) {
        for (s32 i = 0; i < 4; ++i) {
            if (slot->handles[i] != 0) {
                basicSoundStopOrFadeOut(slot->handles[i], 0);
            }
        }
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        if (slot->hasHeap != 0) {
            nw_snd_SoundHeap_LoadState(slot, slot->savedState);
        }
    }
    g_asdSound.currentSlotA = slot;
}

/* Activates slot `index` of the first kind, optionally with a sound heap of `heapSize` bytes,
 * resets the duck state to its defaults and selects the first active slot. Returns 0 when the
 * index is out of range or the slot is already in use. */
extern "C" s32 asdSoundSlotAActivate(u32 index, s32 heapSize)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index >= ASD_SND_SLOT_A_COUNT) {
        return 0;
    }
    AsdSndSlotA *slot = &sound->slotsA[index];
    if (slot->active != 0) {
        return 0;
    }
    if (heapSize != 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 3920);
        slot->heapBuffer = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, heapSize, 1);
        nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
        slot->savedState = nw_snd_SoundHeap_SaveState(slot);
        slot->hasHeap = 1;
    }
    slot->active = 1;
    slot->index = index;
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    duckSetup(0.5f, 1, 30, 30, 15, 15);
    for (s32 i = 0; i < ASD_SND_SLOT_A_COUNT; ++i) {
        if (sound->slotsA[i].active != 0) {
            selectActiveSoundSlotA(i, g_asdSoundDuck.flags);
            break;
        }
    }
    return 1;
}
