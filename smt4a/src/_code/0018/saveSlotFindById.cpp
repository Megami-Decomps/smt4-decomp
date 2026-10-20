#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
    /* 0x12E */ u8 unk12E[6];
} Slot;                         /* 0x134 */

typedef struct SaveState {
    /* 0x0000 */ u8 unk0000[0x1DDC];
    /* 0x1DDC */ Slot slots[12];
} SaveState;

SaveState *FUN_001ab888(void);

/* Returns the slot with the given index, or NULL when the index is out of range. */
static __inline Slot *getSlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &FUN_001ab888()->slots[index];
}

/* Returns the slot with the given id, or NULL. */
Slot *saveSlotFindById(u32 id)
{
    Slot *slot;
    s32 i;

    for (i = 0; i < 12; i++) {
        slot = getSlot(i);
        if (slot->id == id) {
            return slot;
        }
    }
    return NULL;
}

} /* extern "C" */
