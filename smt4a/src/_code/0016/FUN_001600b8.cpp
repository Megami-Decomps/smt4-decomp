/* NON_MATCHING: retail uses ldr r4, [pc, #52] where the compiled block uses ldr r4, [pc, #56]. */
#include "common.h"

struct AllocationNode {
    u8 unk00[0x20];        // 0x00
    u32 unk20;            // 0x20
    u32 unk24;            // 0x24
};

struct AllocationState {
    AllocationNode* first; // 0x00
    u32 firstCount;        // 0x04
    AllocationNode* last;  // 0x08
    u32 lastCount;         // 0x0C
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

        AllocationState* activeState = DAT_005b40e8;
        activeState->first = node;
        activeState->firstCount = 0;
        activeState->last = node;
        activeState->lastCount = 0;
        result = 0;
    }
    return result;
}
}
