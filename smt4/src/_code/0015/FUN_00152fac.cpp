/* NON_MATCHING: retail addresses the globals of this block as separate arrays anchored on one base register (they were defined in the same translation unit); a single extern struct addresses them directly. Tried defining head struct + the slot arrays in the unit: armcc then derives the arrays by add/sub from one literal as retail, but places the (largest) head object after the small arrays, so the chain runs the wrong way. */
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"

extern "C" {

void nw_gfx_SceneNode_AttachChild(u32 node);
void asdScenePassVisit(void *pass, void *visitor); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Attach the pending node of scene slot 0 or 1 and clear its bookkeeping. */
void FUN_00152fac(s32 which)
{
    GfxSettings *state = &g_gfxSettings;
    ModelSlotNodes *nodes = &state->owner[which]->slot->nodes;

    if (which == 0) {
        state->node0 = state->pendingNode[0];
        nw_gfx_SceneNode_AttachChild(state->sceneNode[0]);
        *nodes->target = state->node0;
        state->slotState[0] = 0;
        asdScenePassVisit(state->attachInfo[0], state->transformBuilder[0]);
    } else if (which == 1) {
        state->node1 = state->pendingNode[1];
        nw_gfx_SceneNode_AttachChild(state->sceneNode[1]);
        *nodes->target = state->node1;
        state->slotState[1] = 0;
        asdScenePassVisit(state->attachInfo[1], state->transformBuilder[1]);
    }
}

} /* extern "C" */
