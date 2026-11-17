/* NON_MATCHING: retail addresses the globals of this block as separate arrays anchored on one base register (they were defined in the same translation unit); a single extern struct addresses them directly */
#include "shard/S1GfxModel.h"
#include "gfx/GfxSettings.h"

extern "C" {

void FUN_0018e9d8(u32 node);
void FUN_001767a4(void *pass, void *visitor);

/* Attach the pending node of scene slot 0 or 1 and clear its bookkeeping. */
void FUN_00359454(s32 which)
{
    GfxSettings *state = &g_gfxSettings;
    ModelSlotNodes *nodes = &state->owner[which]->slot->nodes;

    if (which == 0) {
        state->node0 = state->pendingNode[0];
        FUN_0018e9d8(state->sceneNode[0]);
        *nodes->target = state->node0;
        state->slotState[0] = 0;
        FUN_001767a4(state->attachInfo[0], state->transformBuilder[0]);
    } else if (which == 1) {
        state->node1 = state->pendingNode[1];
        FUN_0018e9d8(state->sceneNode[1]);
        *nodes->target = state->node1;
        state->slotState[1] = 0;
        FUN_001767a4(state->attachInfo[1], state->transformBuilder[1]);
    }
}

} /* extern "C" */
