/* NON_MATCHING: loop shape and bls guard match; the allocator swaps r2/r3 between the list pointer and the index copy. */
#include "common.h"

struct FlaggedNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 flags;
};

struct FlaggedNodeList {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0C */ FlaggedNode** entries;
    /* 0x10 */ u16 count;
};

struct FlaggedNodeOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ FlaggedNodeList* list;
};

// Set flag 0x40 on every node in the owner's collection.
extern "C" void FUN_0045b538(FlaggedNodeOwner* owner)
{
    for (u32 index = 0; index < owner->list->count;) {
        u32 current = index;
        index++;
        owner->list->entries[current]->flags |= 0x40;
    }
}
