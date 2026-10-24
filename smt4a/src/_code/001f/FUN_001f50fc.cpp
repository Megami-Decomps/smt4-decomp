/* NON_MATCHING: slot selection/addressing: retail forms the slot address with the +0x29510 displacement folded into a pre-indexed ldr and selects the target with 'ip = 0; if (slot) ip = slot' on each exit path; the build merges the exits into one conditional select and adds the base separately. */
#include "common.h"

/* A 0x28-byte keyed slot of the save data; a key of 0 marks it free. */
struct KeyedSlot {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
    /* 0x08 */ u8 unk08[0x20];
};

struct SlotSaveView {
    /* 0x00000 */ u8 unk00000[0x29510];
    /* 0x29510 */ KeyedSlot slots[16];
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
    KeyedSlot *firstFree = NULL;
    KeyedSlot *found = NULL;
    KeyedSlot *slot;

    for (s32 i = 0; i < 16; i++) {
        slot = &g_gameDataBlocks.save->slots[i];
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
