/* NON_MATCHING: Canonical model fields fold the retail separate-array bases and writeback stores. */
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"
extern "C" {
extern ModelSlotListA * g_asdModelSlotArray0[2];

// Temporarily replaces the selected scene slot, retaining its old node for restoration.
void gfxModelSlotReplaceTemporary(u32 node, s32 mode)
{
    GfxSettings* state = reinterpret_cast<GfxSettings*>(
        (u8*)g_asdModelSlotArray0 - offsetof(GfxSettings, sceneNode));
    ModelSlotNodes* nodes = &state->owner[mode]->slot->nodes;
    if (mode != 0) {
        if (mode == 1) {
            FUN_00197eb0(&g_asdModelSlotArray0[1]->slots, (s32)state->node1);
            u32 previous = state->node1;
            state->node1 = node;
            state->pendingNode[1] = previous;
            nodes->target[1] = node;
            state->slotState[1] = 1;
        }
        return;
    }
    FUN_00197eb0(&g_asdModelSlotArray0[0]->slots, (s32)state->node0);
    u32 previous = state->node0;
    state->node0 = node;
    state->pendingNode[0] = previous;
    nodes->target[1] = node;
    state->slotState[0] = 1;
}
}
