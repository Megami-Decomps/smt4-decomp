#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x062 */ u16 id;
    /* 0x064 */ u8 unk064[0x130 - 0x64];
    /* 0x130 */ u32 flags;
} Slot;                         /* 0x134 */

typedef struct SaveState {
    /* 0x0000 */ u8 unk0000[0x1DDC];
    /* 0x1DDC */ Slot slots[12];
} SaveState;

SaveState *gameGetSlotTable(void);

/* Returns the slot with the given index, or NULL when the index is out of range. */
static __inline Slot *getSlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* Returns whether an active slot (flag bit 0) has the given id. */
u32 saveSlotIsActiveWithId(u32 id)
{
    Slot *slot;
    s32 i;

    for (i = 0; i < 12; i++) {
        slot = getSlot(i);
        if (slot != NULL && (slot->flags & 1) && slot->id == id) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
