/* NON_MATCHING: retail inlines the per-slot "stop and release" helpers with their index range checks (the repeated stop loops after the heap is destroyed are dead there); this version writes each slot's shutdown once, so the code differs. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

// A slot of the second kind in the Apocalypse sound layer (0x70 bytes).
struct AsdSndSlotBApoc {
    /* 0x00 */ u8 heap[0x10];         /* nw::snd::SoundHeap */
    /* 0x10 */ void *heapBase;        /* the heap's buffer, NULL until it is created */
    /* 0x14 */ u8 unk14[0x4c];
    /* 0x60 */ void *heapBuffer;
    /* 0x64 */ u32 savedState;
    /* 0x68 */ u32 volume;
    /* 0x6c */ u8 unk6c[4];
};

struct SoundHandleList {
    /* 0x00 */ AsdSndHandleNode *head;
    /* 0x04 */ s32 count;
};

extern "C" {
extern AsdSndSlotBApoc g_asdSoundSlotsB[4];  // 0x63e70c
extern AsdSndAuxSlot g_asdSoundAuxSlots[2];  // 0x63e8cc
extern SoundHandleList g_soundHandleList;
extern AsdSndSlotA g_asdSoundSlotsA[4];      // 0x63e94c

void asdSoundObjectStop(s32 handle, s32 immediate);
void asdMemFree(void *block);
void nw_snd_SoundHandle_DetachSound(void *handle);
void nw_snd_SoundHeap_Destroy(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

// Shuts the sound slots down: restores and destroys the heaps, stops and detaches every playing handle and frees the
// registered-sound list.
void FUN_00141b24(void)
{
    for (s32 i = 0; i < 4; i++) {
        AsdSndSlotBApoc *slot = &g_asdSoundSlotsB[i];
        if (slot->heapBase != NULL) {
            slot->volume = ASD_SND_VOLUME_DEFAULT;
            nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
            slot->savedState = 0;
            nw_snd_SoundHeap_Destroy(slot->heap);
            asdMemFree(slot->heapBuffer);
        }
    }

    for (s32 i = 0; i < 2; i++) {
        AsdSndAuxSlot *slot = &g_asdSoundAuxSlots[i];
        if (slot->heapBase != NULL) {
            slot->unk34 = 0;
            slot->unk38 = 0;
            slot->volume = ASD_SND_VOLUME_DEFAULT;
            nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
            slot->savedState = 0;
            nw_snd_SoundHeap_Destroy(slot->heap);
            asdMemFree(slot->heapBuffer);
        }
    }

    AsdSndHandleNode *node = g_soundHandleList.head;
    while (node != NULL) {
        if (node->handle != 0) {
            asdSoundObjectStop(node->handle, 0);
            nw_snd_SoundHandle_DetachSound(node);
        }
        AsdSndHandleNode *next = node->next;
        asdMemFree(node);
        node = next;
    }
    g_soundHandleList.head = NULL;
    g_soundHandleList.count = 0;

    for (s32 i = 0; i < 4; i++) {
        if (g_asdSoundSlotsA[i].active != 0) {
            for (s32 h = 0; h < 4; h++) {
                if (g_asdSoundSlotsA[i].handles[h] != 0) {
                    asdSoundObjectStop(g_asdSoundSlotsA[i].handles[h], 0);
                    nw_snd_SoundHandle_DetachSound(&g_asdSoundSlotsA[i].handles[h]);
                }
            }
            if (g_asdSoundSlotsA[i].hasHeap != 0) {
                nw_snd_SoundHeap_Destroy(g_asdSoundSlotsA[i].heap);
                asdMemFree(g_asdSoundSlotsA[i].heapBuffer);
                g_asdSoundSlotsA[i].savedState = 0;
                g_asdSoundSlotsA[i].hasHeap = 0;
            }
            g_asdSoundSlotsA[i].active = 0;
            g_asdSoundSlotsA[i].volume = ASD_SND_VOLUME_DEFAULT;
        }
    }
}
}
