/* NON_MATCHING: slot block addressing now matches (block at +0x29500, slots at +0x10); retail passes each exit pointer through a null-preserving select (`ip = 0; if (slot) ip = slot`) and keeps `key` in a copy (r5), which armcc here does not emit. */
#include "common.h"

/* A 0x28-byte keyed slot of the save data; a key of 0 marks it free. */
struct KeyedSlot {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
    /* 0x08 */ u8 unk08[0x20];
};

struct SlotBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ KeyedSlot slots[16];
};

struct SlotSaveView {
    /* 0x00000 */ u8 unk00000[0x29500];
    /* 0x29500 */ SlotBlock block;
};

extern "C" {

struct GameDataBlocks {
    u32 unk00;
    SlotSaveView *save;
};

extern GameDataBlocks g_gameDataBlocks; /* 0x57f698 */

/* Stores `value` in the save data slot keyed `key`, using the first free slot when no slot has that key. */
void FUN_001f50fc(s32 key, s32 value)
{
    s32 i;
    SlotBlock *block = &g_gameDataBlocks.save->block;
    KeyedSlot *firstFree = NULL;
    KeyedSlot *found = NULL;
    KeyedSlot *slot;

    for (i = 0; i < 16; i++) {
        slot = &block->slots[i];
        if (slot->key == 0 && firstFree == NULL) {
            firstFree = slot;
        }
        if (slot->key == key) {
            found = slot;
            break;
        }
    }
    slot = found != NULL ? found : firstFree;
    if (slot->key == 0) {
        slot->key = key;
    }
    slot->value = value;
}

} /* extern "C" */
