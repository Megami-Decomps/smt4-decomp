/* NON_MATCHING: registers and stores match; retail sets the -1 result only on the failed allocation (mvneq), this build sets it unconditionally before the branch. */
#include "common.h"

/* A cleared 0x28-byte block from the graphics allocator: two 16-byte entries, then a count and the next block. */
struct AllocationNode {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
};

/* A node and the number of entries counted from it. */
struct NodeSlot {
    /* 0x00 */ AllocationNode *node;
    /* 0x04 */ u32 count;
};

/* The block list: its first block and the block in use. */
struct AllocationState {
    /* 0x00 */ NodeSlot first;
    /* 0x08 */ NodeSlot last;
};

extern "C" {
extern AllocationState *DAT_005b40e8;
AllocationNode *FUN_0017cd48(void);

/* Makes `state` the active block list and starts it with one new block; returns 0, or -1 when no block could be allocated. */
u32 gfxBlockListStart(AllocationState *state)
{
    DAT_005b40e8 = state;
    AllocationNode *node = FUN_0017cd48();
    u32 result = 0xFFFFFFFFu;
    if (node != NULL) {
        node->unk20 = 0;
        node->unk24 = 0;
        result = 0;

        NodeSlot slot;
        slot.node = node;
        slot.count = 0;
        AllocationState *activeState = DAT_005b40e8;
        activeState->first = slot;
        activeState->last = slot;
    }
    return result;
}
}
