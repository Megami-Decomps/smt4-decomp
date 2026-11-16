/* smt4a: the 16 keyed slots of the save data (a 0x28-byte record each, at +0x29500 + 0x10 of the block that
 * g_gameDataBlocks points at). A key of 0 marks a slot free. keyedSlotFind() is shared by the lookup and
 * the store routines. */
#ifndef GAMEDATA_KEYEDSAVESLOTS_H
#define GAMEDATA_KEYEDSAVESLOTS_H

#include "common.h"
#include <stddef.h>

struct KeyedSlot {
    /* 0x00 */ s32 key;
    /* 0x04 */ s32 value;
    /* 0x08 */ u8 unk08[0x20];
};

struct KeyedSlotBlock {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ KeyedSlot slots[16];
};

struct KeyedSlotSaveView {
    /* 0x00000 */ u8 unk00000[0x29500];
    /* 0x29500 */ KeyedSlotBlock block;
};

struct KeyedSlotDataBlocks {
    u32 unk00;
    KeyedSlotSaveView *save;
};

typedef char KeyedSlotLayoutCheck[sizeof(KeyedSlot) == 0x28 && sizeof(KeyedSlotBlock) == 0x290 &&
    offsetof(KeyedSlotSaveView, block) == 0x29500 ? 1 : -1];

extern "C" KeyedSlotDataBlocks g_gameDataBlocks; /* 0x57f698 */

/* The slot keyed `key`, else the first free slot, else NULL. */
static __inline KeyedSlot *keyedSlotFind(s32 key)
{
    KeyedSlotBlock *block = &g_gameDataBlocks.save->block;
    KeyedSlot *firstFree = NULL;
    KeyedSlot *found = NULL;

    for (s32 i = 0; i < 16; i++) {
        KeyedSlot *slot = &block->slots[i];
        if (slot->key == 0 && firstFree == NULL) {
            firstFree = slot;
        }
        if (slot->key == key) {
            found = slot;
            break;
        }
    }
    KeyedSlot *selected = NULL;
    if (found != NULL) {
        selected = found;
    } else if (firstFree != NULL) {
        selected = firstFree;
    }
    return selected;
}

#endif
