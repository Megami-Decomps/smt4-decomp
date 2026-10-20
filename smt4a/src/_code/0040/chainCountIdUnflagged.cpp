#include "shard/Shard0040.h"

extern "C" {

typedef struct ChainNode {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 flags;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ s32 id;
    /* 0x0C */ struct ChainNode *next;
} ChainNode;

typedef struct ChainOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ChainNode *head;
} ChainOwner;

/* Number of entries in the chain starting at +8 with the given id whose flag bit 2 is clear. */
s32 chainCountIdUnflagged(ChainOwner *owner, s32 id)
{
    s32 count = 0;
    ChainNode *node;

    for (node = owner->head; node != NULL; node = node->next) {
        if (node->id == id && (node->flags & 4) == 0) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
