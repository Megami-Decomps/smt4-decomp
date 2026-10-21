/* NON_MATCHING: retail copies the loop index to r3 and increments r1 before loading the node; compiler indexes directly then increments. */
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
    u32 index = 0;
    if (index < owner->list->count) {
        do {
            FlaggedNode* node = owner->list->entries[index];
            ++index;
            node->flags |= 0x40;
        } while (index < owner->list->count);
    }
}
