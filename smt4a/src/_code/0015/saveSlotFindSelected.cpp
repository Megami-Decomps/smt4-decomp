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
    /* 0x2C4C */ u16 selectedId;
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

/* Returns the slot whose id is the selected id, or NULL when nothing is selected or nothing matches. */
Slot *saveSlotFindSelected(void)
{
    SaveState *state;
    Slot *slot;
    s32 i;

    state = FUN_001ab888();
    if (state->selectedId == 0) {
        return NULL;
    }
    for (i = 0; i < 12; i++) {
        slot = getSlot(i);
        if (slot->id == state->selectedId) {
            return slot;
        }
    }
    return NULL;
}

} /* extern "C" */
