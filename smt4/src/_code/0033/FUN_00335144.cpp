#include "common.h"

extern "C" {

/* Object whose byte at 0x1f6 is cleared when an entry is deactivated. */
typedef struct {
    u8 unk00[0x1f6];
    u8 active;          /* 0x1f6 */
} Holder;

typedef struct {
    u8 unk00[0xc];
    s32 value;          /* 0x0c: negative = nothing to cancel */
    u8 unk10[0x1c];
    Holder *holder;     /* 0x2c */
} Target;

typedef struct {
    u32 flags;          /* 0x00: bit 1 = deactivated */
    u8 unk04[4];
    Target *target;     /* 0x08 */
} Entry;

typedef struct {
    u8 unk00[8];
    Entry *entry;       /* 0x08 */
    u8 unk0c[0x44];
} Slot;

typedef struct {
    u8 unk00[8];
    Entry *entry;       /* 0x08 */
    u8 unk0c[4];
    Slot slots[3];      /* 0x10 */
} Owner;

int asdMdlManagerMarkDestroy(Entry *entry);

/* Marks the owner's entry and each slot's entry deactivated, clearing the holder flag and cancelling when a target value is set. */
void FUN_00335144(Owner *owner)
{
    Entry *entry;
    int i;

    entry = owner->entry;
    if (entry != NULL) {
        entry->flags |= 2;
        entry->target->holder->active = 0;
        if (owner->entry->target->value >= 0) {
            asdMdlManagerMarkDestroy(owner->entry);
        }
    }
    for (i = 0; i < 3; i++) {
        Slot *slot = &owner->slots[i];

        entry = slot->entry;
        if (entry != NULL) {
            entry->flags |= 2;
            entry->target->holder->active = 0;
            if (slot->entry->target->value >= 0) {
                asdMdlManagerMarkDestroy(slot->entry);
            }
        }
    }
}

} /* extern "C" */
