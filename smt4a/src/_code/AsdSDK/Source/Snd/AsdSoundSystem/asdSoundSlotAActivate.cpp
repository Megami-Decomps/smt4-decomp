/* NON_MATCHING: O3 drops the selector's active recheck, splits duck timing stores and reloads flags; pointer/register scheduling differs. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct SoundSlotSystemApoc {
    u8 unk000[0x764];
    AsdSndSlotA slotsA[ASD_SND_SLOT_A_COUNT];
    u8 unk854[0xad0];
    AsdSndSlotA *currentSlotA;
};

struct SoundDuckBlockApoc {
    AsdSndDuck duck;
    AsdSndStatusApoc status;
};

extern "C" {
extern SoundSlotSystemApoc g_asdSoundSystem;
extern AsdSndDuck g_asdSoundDuck;
void *asdMemoryAlloc(s32 heap, u32 alignment, u32 flags, s32 size, u32 fromFront);
u32 nw_snd_SoundHeap_Create(void *heap, void *buffer, u32 size);
u32 nw_snd_SoundHeap_SaveState(void *heap);
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
void asdSoundObjectStop(AsdSndObject *sound, s32 frames);
}

static inline void selectActiveSoundSlotA(u32 index, u32 reset)
{
    if (index == ~0u) {
        g_asdSoundSystem.currentSlotA = NULL;
        return;
    }
    if (index >= ASD_SND_SLOT_A_COUNT) {
        return;
    }
    AsdSndSlotA *slot = &g_asdSoundSystem.slotsA[index];
    if (slot->active == 0) {
        return;
    }
    if (reset != 0) {
        for (s32 i = 0; i < 4; ++i) {
            if (slot->handles[i] != 0) {
                asdSoundObjectStop(reinterpret_cast<AsdSndObject *>(slot->handles[i]), 0);
            }
        }
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        if (slot->hasHeap != 0) {
            nw_snd_SoundHeap_LoadState(slot, slot->savedState);
        }
    }
    g_asdSoundSystem.currentSlotA = slot;
}

extern "C" u32 asdSoundSlotAActivate(u32 index, s32 heapSize)
{
    if (index >= ASD_SND_SLOT_A_COUNT || g_asdSoundSystem.slotsA[index].active != 0) {
        return 0;
    }
    AsdSndSlotA *slot = &g_asdSoundSystem.slotsA[index];
    if (heapSize != 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 0x134a);
        slot->heapBuffer = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, heapSize, 1);
        nw_snd_SoundHeap_Create(slot, slot->heapBuffer, heapSize);
        slot->savedState = nw_snd_SoundHeap_SaveState(slot);
        slot->hasHeap = 1;
    }
    slot->active = 1;
    slot->index = index;
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    SoundDuckBlockApoc &duckState = *reinterpret_cast<SoundDuckBlockApoc *>(&g_asdSoundDuck);
    duckState.duck.level = 0.5f;
    duckState.duck.flags |= 1;
    duckState.duck.holdFrames = 30;
    duckState.duck.unk08 = 30;
    duckState.duck.fadeInFrames = 15;
    duckState.duck.fadeOutFrames = 15;
    if (duckState.status.hasStream != 0) {
        duckState.duck.active = 1;
    }
    for (s32 i = 0; i < ASD_SND_SLOT_A_COUNT; ++i) {
        if (g_asdSoundSystem.slotsA[i].active != 0) {
            selectActiveSoundSlotA(i, duckState.duck.flags);
            break;
        }
    }
    return 1;
}
