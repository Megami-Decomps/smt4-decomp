/* NON_MATCHING: node/count pairs store with strd as retail does; armcc keeps the result in r2 and the state pointer in r3, retail swaps them */
#include "common.h"

struct AllocationNode {
    u8 unk00[0x20];        // 0x00
    u32 unk20;            // 0x20
    u32 unk24;            // 0x24
};

/* A node and the number of entries counted from it. */
struct NodeSlot {
    AllocationNode* node;  // 0x00
    u32 count;             // 0x04
};

struct AllocationState {
    NodeSlot first;        // 0x00
    NodeSlot last;         // 0x08
};

extern "C" {
extern AllocationState* DAT_005b40e8;
AllocationNode* FUN_0017cd48(AllocationState* state);

u32 FUN_001600b8(AllocationState* state)
{
    DAT_005b40e8 = state;
    AllocationNode* node = FUN_0017cd48(state);
    u32 result;
    if (node == NULL) {
        result = 0xFFFFFFFFu;
    } else {
        node->unk20 = 0;
        node->unk24 = 0;
        result = 0;

        NodeSlot slot;
        slot.node = node;
        slot.count = 0;
        AllocationState* activeState = DAT_005b40e8;
        activeState->first = slot;
        activeState->last = slot;
    }
    return result;
}
}
