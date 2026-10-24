#include "shard/W6_W6Match2_ScrollList.h"

/* A scroll owner whose first list's selection is set directly. */
struct ScrollValueOwner {
    /* 0x00 */ ScrollList list;
    /* 0x28 */ u8 unk28[0x38];
    /* 0x60 */ u8 changed;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 locked;
};

extern "C" {

s32 scrollListGetTop(const ScrollList *list);

// Stores a new selection value when unlocked, marking the owner changed if it differs.
void scrollOwnerSetValue(ScrollValueOwner *owner, s32 value)
{
    if (owner->locked == 0) {
        if (scrollListGetTop(&owner->list) != value) {
            owner->changed = 1;
        }
        owner->list.offset = value;
    }
}

} /* extern "C" */
