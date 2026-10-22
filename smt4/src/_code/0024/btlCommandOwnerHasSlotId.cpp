#include "common.h"

/* A command slot: kinds 2 and 3 refer to an id. */
struct BtlCommandSlot {
    /* 0x00 */ s16 kind;
    /* 0x02 */ s16 id;
    /* 0x04 */ u8 unk04[4];
};

struct BtlCommandOwner {
    /* 0x000 */ u32 flags; /* 0x10: only the first slot is in use */
    /* 0x004 */ u8 unk004[0x21c];
    /* 0x220 */ BtlCommandSlot slots[6];
};

#define BTL_COMMAND_SLOT_HAS_ID(slot) ((slot)->kind == 2 || (slot)->kind == 3)

extern "C" {

/* Returns 1 when one of the owner's id-carrying command slots refers to `id`. */
s32 btlCommandOwnerHasSlotId(const BtlCommandOwner *owner, s32 id)
{
    if (owner->flags & 0x10) {
        if (BTL_COMMAND_SLOT_HAS_ID(&owner->slots[0]) && owner->slots[0].id == id) {
            return 1;
        }
    } else {
        for (s32 i = 1; i < 6; i++) {
            if (BTL_COMMAND_SLOT_HAS_ID(&owner->slots[i]) && owner->slots[i].id == id) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
