/* NON_MATCHING: retail addresses the globals of this block as separate arrays anchored on one base register (they were defined in the same translation unit); a single extern struct addresses them directly. Tried defining head struct + the slot arrays in the unit: armcc then derives the arrays by add/sub from one literal as retail, but places the (largest) head object after the small arrays, so the chain runs the wrong way. */
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"

extern "C" {

void nw_gfx_SceneNode_AttachChild(u32 node);
void asdScenePassVisit(void *pass, void *visitor); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Attach the pending node of scene slot 0 or 1 and clear its bookkeeping. */
void FUN_00152fac(s32 which)
{
    ModelSlotNodes *nodes = &g_gfxSettings.owner[which]->slot->nodes;

    if (which == 0) {
        g_gfxSettings.node0 = g_gfxSettings.pendingNode[0];
        nw_gfx_SceneNode_AttachChild(g_gfxSettings.sceneNode[0]);
        *nodes->target = g_gfxSettings.node0;
        g_gfxSettings.slotState[0] = 0;
        asdScenePassVisit(g_gfxSettings.attachInfo[0], g_gfxSettings.transformBuilder[0]);
    } else if (which == 1) {
        g_gfxSettings.node1 = g_gfxSettings.pendingNode[1];
        nw_gfx_SceneNode_AttachChild(g_gfxSettings.sceneNode[1]);
        *nodes->target = g_gfxSettings.node1;
        g_gfxSettings.slotState[1] = 0;
        asdScenePassVisit(g_gfxSettings.attachInfo[1], g_gfxSettings.transformBuilder[1]);
    }
}

} /* extern "C" */
