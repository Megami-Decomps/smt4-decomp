/* NON_MATCHING: the flags word is loaded into r1; retail loads it into r8. */
#include "common.h"

extern "C" {

/* One 0x114-byte slot of the table at owner+0x1e98. */
typedef struct {
    u8 unk00[0x48];
    s32 mode;      /* 0x48 */
    s32 unk4c;     /* 0x4c */
    u32 state;     /* 0x50: bit0 active, bit1 busy, bit7 ready */
    u32 flags;     /* 0x54 */
    u16 flags58;   /* 0x58 */
    u8 unk5a[0x114 - 0x5a];
} Slot;

/* Owner object: only the slot table pointer is used here. */
typedef struct {
    u8 unk00[0x1e98];
    Slot *slots;   /* 0x1e98 */
} SlotOwner;

/* Resets every ready slot of group `group` to mode 4; bit 3 of flags follows `keepFlag`. */
void FUN_0023f410(SlotOwner *owner, int group, int keepFlag, int keepFlag58)
{
    s32 first = 0;
    s32 count = 0;
    s32 i;

    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 0x32;
    } else if (group == 2) {
        first = 0x36;
        count = 1;
    } else if (group == 3) {
        first = 0x43;
        count = 0x2a;
    }
    for (i = first; i < first + count; i++) {
        Slot *slot = &owner->slots[i];

        if ((slot->state & 1) && (slot->state & 0x80) && !(slot->state & 2)) {
            slot->flags = (slot->flags & ~6) | 1;
            slot->unk4c = 0;
            u32 flags = slot->flags;
            if (keepFlag != 0) {
                flags |= 8;
            }
            slot->mode = 4;
            if (keepFlag != 0) {
                slot->flags = flags;
            }
            if (keepFlag58 == 0) {
                slot->flags58 |= 0x200;
            }
        }
    }
}

} /* extern "C" */
