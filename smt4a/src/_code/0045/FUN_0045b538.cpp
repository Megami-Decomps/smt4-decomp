/* NON_MATCHING: the build advances the index after loading the node, omitting retail's index copy. */
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

/* Sets flag 0x40 on every node in the owner's collection. */
extern "C" void FUN_0045b538(FlaggedNodeOwner *owner)
{
    u32 index = 0;
    while (index < owner->list->count) {
        owner->list->entries[index++]->flags |= 0x40;
    }
}
