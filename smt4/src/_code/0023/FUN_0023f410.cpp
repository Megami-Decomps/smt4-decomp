/* NON_MATCHING: the flags word is loaded into r8 instead of r1, and the unk4c store is scheduled before the flags load. */
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
    u32 first = 0;
    int count = 0;
    u32 end;
    u32 i;

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
    end = count + first;
    for (i = first; (int)end > (int)i; i++) {
        Slot *slot = &owner->slots[i];
        u32 state = slot->state;

        if ((state & 1) && (state & 0x80) && !(state & 2)) {
            u32 oldFlags = slot->flags;
            u32 flags = (oldFlags & ~6) | 1;

            slot->flags = flags;
            slot->unk4c = 0;
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
