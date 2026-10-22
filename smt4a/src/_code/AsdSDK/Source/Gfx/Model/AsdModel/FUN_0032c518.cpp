/* NON_MATCHING: Canonical model fields fold the retail separate-array bases and writeback stores. */
#include "shard/S1GfxModel.h"
extern "C" {
extern ModelSlotList* g_asdModelSlotArray0[2];
u8 FUN_00197eb0(ModelSlotVector*, u32);

// Temporarily replaces the selected scene slot, retaining its old node for restoration.
void FUN_0032c518(u32 node, s32 mode)
{
    GfxModelState* state = reinterpret_cast<GfxModelState*>(
        (u8*)g_asdModelSlotArray0 - offsetof(GfxModelState, sceneNode));
    ModelSlotNodes* nodes = &state->owner[mode]->slot->nodes;
    if (mode != 0) {
        if (mode == 1) {
            FUN_00197eb0(&g_asdModelSlotArray0[1]->slots, state->node1);
            u32 previous = state->node1;
            state->node1 = node;
            state->pendingNode[1] = previous;
            nodes->target[1] = node;
            state->unkCC[1] = 1;
        }
        return;
    }
    FUN_00197eb0(&g_asdModelSlotArray0[0]->slots, state->node0);
    u32 previous = state->node0;
    state->node0 = node;
    state->pendingNode[0] = previous;
    nodes->target[1] = node;
    state->unkCC[0] = 1;
}
}
