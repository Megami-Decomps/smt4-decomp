/* NON_MATCHING: retail hoists the 0 and 0x40 constants into r8/r9 and reloads the g_asdSound base per loop (ldrlt); built keeps the base in r9 and 0x40 in sl, and folds the slot-B heapBase offset into the base */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
void FUN_002bda30(s32 handle, s32 arg);
void asdMemFree(void *memory);
void nw_snd_SoundHandle_DetachSound(s32 *handle);
void nw_snd_SoundHeap_Destroy(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

/* Slot B's volume is written as a whole word, padding included. */
struct SlotBVolumeView {
    u8 unk00[0x48];
    u32 volume;
};

static __inline void asdSoundReleaseSlotB(u32 index)
{
    if (index < ASD_SND_SLOT_B_COUNT) {
        AsdSndSlotB *slot = &g_asdSound.slotsB[index];
        if (slot->heapBase != NULL) {
            reinterpret_cast<SlotBVolumeView *>(slot)->volume = ASD_SND_VOLUME_DEFAULT;
            nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
            slot->savedState = 0;
            nw_snd_SoundHeap_Destroy(slot->heap);
            asdMemFree(slot->heapBuffer);
        }
    }
}

static __inline void asdSoundReleaseAuxSlot(u32 index)
{
    AsdSndAuxSlot *slot = &g_asdSound.auxSlots[index];
    if (slot->heapBase != NULL) {
        if (index < 2) {
            slot->unk34 = 0;
            slot->volume = ASD_SND_VOLUME_DEFAULT;
            slot->unk38 = 0;
            nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
        }
        slot->savedState = 0;
        nw_snd_SoundHeap_Destroy(slot->heap);
        asdMemFree(slot->heapBuffer);
    }
}

static __inline void asdSoundReleaseSlotC(u32 index)
{
    AsdSndSlotC *slot = &g_asdSound.slotsC[index];
    if (slot->pad0e[0] != 0) {
        if (slot->handle != 0) {
            FUN_002bda30(slot->handle, 0);
            nw_snd_SoundHandle_DetachSound(&slot->handle);
        }
        slot->pad0e[0] = 0;
        if (index < ASD_SND_SLOT_C_COUNT) {
            if (slot->handle != 0)
                FUN_002bda30(slot->handle, 0);
            slot->unk08 = 0;
            slot->volume = ASD_SND_VOLUME_DEFAULT;
            slot->flag = 0;
        }
    }
}

static __inline void asdSoundReleaseSlotA(u32 index)
{
    AsdSndSlotA *slot = &g_asdSound.slotsA[index];
    if (slot->active != 0) {
        for (s32 i = 0; i < 4; i++) {
            if (slot->handles[i] != 0) {
                FUN_002bda30(slot->handles[i], 0);
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
        if (index < ASD_SND_SLOT_A_COUNT && slot != NULL) {
            for (s32 i = 0; i < 4; i++) {
                if (slot->handles[i] != 0)
                    FUN_002bda30(slot->handles[i], 0);
            }
            slot->volume = ASD_SND_VOLUME_DEFAULT;
            if (slot->hasHeap != 0)
                nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
        }
    }
}

/* Releases every sound slot: heaps are restored to their saved state and destroyed, voices
 * stopped and detached. */
void FUN_0010c350(void)
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
