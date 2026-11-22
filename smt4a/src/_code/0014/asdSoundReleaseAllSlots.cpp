/* NON_MATCHING: the slot-B release loads heapBase from the array base plus 0x534 where retail loads it through the
 * finished slot pointer (r5) after copying it into r0; the rest matches (10 lines). */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void asdSoundObjectStop(s32 handle, s32 immediate); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdMemFree(void *block); // declcheck: local (the shared declaration does not compile here or changes this unit)
void nw_snd_SoundHandle_DetachSound(void *handle);
void nw_snd_SoundHeap_Destroy(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
}

/* Restores a second-kind slot's heap and releases it. */
static void asdSoundSlotBRelease(u32 index)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    if (index >= ASD_SND_SLOT_B_COUNT)
        return;
    AsdSndSlotBA *slot = &sound->slotsB[index];
    if (slot->heapBase == NULL)
        return;
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
    slot->savedState = 0;
    nw_snd_SoundHeap_Destroy(slot->heap);
    asdMemFree(slot->heapBuffer);
}

/* Resets an auxiliary slot's volume and restores its heap to the saved state. */
static __inline void asdSoundAuxSlotRestore(u32 index)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    if (index < 2) {
        AsdSndAuxSlot *slot = &sound->auxSlots[index];
        slot->unk34 = 0;
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->unk38 = 0;
        nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
    }
}

/* Restores an auxiliary slot's heap and releases it. */
static void asdSoundAuxSlotRelease(u32 index)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    if (index >= 2)
        return;
    AsdSndAuxSlot *slot = &sound->auxSlots[index];
    if (slot->heapBase == NULL)
        return;
    asdSoundAuxSlotRestore(index);
    slot->savedState = 0;
    nw_snd_SoundHeap_Destroy(slot->heap);
    asdMemFree(slot->heapBuffer);
}

/* Stops a first-kind slot's sounds, resets its volume and restores its heap. */
static __inline void asdSoundSlotARestore(u32 index, AsdSndSlotA *slot)
{
    if (index < ASD_SND_SLOT_A_COUNT && slot != NULL) {
        for (s32 i = 0; i < 4; ++i) {
            if (slot->handles[i] != 0)
                asdSoundObjectStop(slot->handles[i], 0);
        }
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        if (slot->hasHeap != 0)
            nw_snd_SoundHeap_LoadState(slot, slot->savedState);
    }
}

/* Stops and detaches a first-kind slot's sounds and destroys its heap. */
static __inline void asdSoundSlotARelease(u32 index)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    if (index >= ASD_SND_SLOT_A_COUNT)
        return;
    AsdSndSlotA *slot = &sound->slotsA[index];
    if (slot->active == 0)
        return;
    for (s32 i = 0; i < 4; ++i) {
        if (slot->handles[i] != 0) {
            asdSoundObjectStop(slot->handles[i], 0);
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
    asdSoundSlotARestore(index, slot);
}

extern "C" {

/* Shuts the sound slots down: restores and destroys the heaps, stops and detaches every playing handle and frees the
 * registered-sound list. */
void asdSoundReleaseAllSlots(void)
{
    for (s32 i = 0; i < ASD_SND_SLOT_B_COUNT; i++)
        asdSoundSlotBRelease(i);
    for (s32 i = 0; i < 2; i++)
        asdSoundAuxSlotRelease(i);

    AsdSndHandleList *list = &g_asdSoundSystem.registered;
    AsdSndHandleNode *node = list->handles;
    while (node != NULL) {
        if (node->handle != 0) {
            asdSoundObjectStop(node->handle, 0);
            nw_snd_SoundHandle_DetachSound(node);
        }
        AsdSndHandleNode *next = node->next;
        asdMemFree(node);
        node = next;
    }
    list->handles = NULL;
    list->count = 0;

    for (s32 i = 0; i < ASD_SND_SLOT_A_COUNT; i++)
        asdSoundSlotARelease(i);
}

} /* extern "C" */
