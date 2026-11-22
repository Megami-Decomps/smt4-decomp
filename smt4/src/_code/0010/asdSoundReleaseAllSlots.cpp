/* NON_MATCHING: written like its Apocalypse twin FUN_00141b24 (index-checked release helpers, the restore parts as
 * their own index-checked helpers); retail tests slot B's heapBase through the finished slot pointer where the build
 * folds it into the base, predicates slot C's stop argument and swaps r6/r7 in slot A (50 lines). */
#include "util/MemoryHelpers_VariantB.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void basicSoundStopOrFadeOut(s32 handle, s32 arg);
void nw_snd_SoundHandle_DetachSound(s32 *handle);
void nw_snd_SoundHeap_Destroy(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
}

/* Slot B's volume is written as a whole word, padding included. */
struct SlotBVolumeView {
    u8 unk00[0x48];
    u32 volume;
};

/* Restores a second-kind slot's heap and releases it. */
static void asdSoundReleaseSlotB(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index >= ASD_SND_SLOT_B_COUNT)
        return;
    AsdSndSlotB *slot = &sound->slotsB[index];
    if (slot->heapBase == NULL)
        return;
    reinterpret_cast<SlotBVolumeView *>(slot)->volume = ASD_SND_VOLUME_DEFAULT;
    nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
    slot->savedState = 0;
    nw_snd_SoundHeap_Destroy(slot->heap);
    asdMemFree(slot->heapBuffer);
}

/* Resets an auxiliary slot's volume and restores its heap to the saved state. */
static __inline void asdSoundRestoreAuxSlot(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index < 2) {
        AsdSndAuxSlot *slot = &sound->auxSlots[index];
        slot->unk34 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->unk38 = 0;
        nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
    }
}

/* Restores an auxiliary slot's heap and releases it. */
static void asdSoundReleaseAuxSlot(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index >= 2)
        return;
    AsdSndAuxSlot *slot = &sound->auxSlots[index];
    if (slot->heapBase == NULL)
        return;
    asdSoundRestoreAuxSlot(index);
    slot->savedState = 0;
    nw_snd_SoundHeap_Destroy(slot->heap);
    asdMemFree(slot->heapBuffer);
}

/* Stops a one-sound slot's sound and resets it. */
static __inline void asdSoundRestoreSlotC(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index < ASD_SND_SLOT_C_COUNT) {
        AsdSndSlotC *slot = &sound->slotsC[index];
        if (slot->handle != 0)
            basicSoundStopOrFadeOut(slot->handle, 0);
        slot->unk08 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->flag = 0;
    }
}

/* Stops and detaches a one-sound slot's sound. */
static __inline void asdSoundReleaseSlotC(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index >= ASD_SND_SLOT_C_COUNT)
        return;
    AsdSndSlotC *slot = &sound->slotsC[index];
    if (slot->active == 0)
        return;
    if (slot->handle != 0) {
        basicSoundStopOrFadeOut(slot->handle, 0);
        nw_snd_SoundHandle_DetachSound(&slot->handle);
    }
    slot->active = 0;
    asdSoundRestoreSlotC(index);
}

/* Stops a first-kind slot's sounds, resets its volume and restores its heap. */
static __inline void asdSoundRestoreSlotA(u32 index, AsdSndSlotA *slot)
{
    if (index < ASD_SND_SLOT_A_COUNT && slot != NULL) {
        for (s32 i = 0; i < 4; ++i) {
            if (slot->handles[i] != 0)
                basicSoundStopOrFadeOut(slot->handles[i], 0);
        }
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        if (slot->hasHeap != 0)
            nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
    }
}

/* Stops and detaches a first-kind slot's sounds and destroys its heap. */
static __inline void asdSoundReleaseSlotA(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index >= ASD_SND_SLOT_A_COUNT)
        return;
    AsdSndSlotA *slot = &sound->slotsA[index];
    if (slot->active == 0)
        return;
    for (s32 i = 0; i < 4; ++i) {
        if (slot->handles[i] != 0) {
            basicSoundStopOrFadeOut(slot->handles[i], 0);
            nw_snd_SoundHandle_DetachSound(&slot->handles[i]);
        }
    }
    if (slot->hasHeap != 0) {
        nw_snd_SoundHeap_Destroy(slot->heap);
        asdMemFree(slot->heapBuffer);
        slot->savedState = 0;
        slot->hasHeap = 0;
    }
    slot->active = 0;
    asdSoundRestoreSlotA(index, slot);
}

extern "C" {

/* Releases every sound slot: heaps are restored to their saved state and destroyed, voices
 * stopped and detached. */
void asdSoundReleaseAllSlots(void)
{
    for (s32 i = 0; i < ASD_SND_SLOT_B_COUNT; i++)
        asdSoundReleaseSlotB(i);
    for (s32 i = 0; i < 2; i++)
        asdSoundReleaseAuxSlot(i);
    for (s32 i = 0; i < ASD_SND_SLOT_C_COUNT; i++)
        asdSoundReleaseSlotC(i);
    for (s32 i = 0; i < ASD_SND_SLOT_A_COUNT; i++)
        asdSoundReleaseSlotA(i);
}

} /* extern "C" */
