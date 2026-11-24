/* NON_MATCHING: 24 lines, registers only: the resource loop and the entry-mask clear match; the action-status
 * clears swap the action table and computed-index scratch registers (r0/r1, ip/r4). */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {
void resourceReleaseReference(BtlLoadedActionResource *resource);
}

static bool isRetainedResource(const BtlMainState *state, s16 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (state->actionCleanup.retainedIds[index] == id) {
            return true;
        }
    }
    return false;
}

extern "C" {

/* Releases unretained resources belonging to the selected action and detaches its combatant. */
void FUN_00337a34(BtlMainState *state)
{
    if (state->actionCleanup.selectedAction != -1) {
        if (state->actionCleanup.selectedResource != NULL) {
            for (s32 index = 0; index < 42; ++index) {
                BtlLoadedActionResource *resource = state->actionCleanup.resources[index];
                if (resource != NULL && resource->id == state->actionCleanup.selectedResource->id &&
                    !isRetainedResource(state, (s16)resource->id)) {
                    resourceReleaseReference(resource);
                    state->actionCleanup.resources[index] = NULL;
                }
            }
            state->actionCleanup.selectedResource = NULL;
        }
        state->actions[state->actionCleanup.selectedAction].status = 0;
        state->entries[state->actions[state->actionCleanup.selectedAction].participant.combatantIndex].flagMask = 0;
        state->actions[state->actionCleanup.selectedAction].participant.combatantIndex = -1;
        state->actionCleanup.selectedAction = -1;
    }
}

} /* extern "C" */
