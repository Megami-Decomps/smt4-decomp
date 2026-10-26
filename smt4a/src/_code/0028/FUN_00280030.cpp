/* NON_MATCHING: retail does not predicate the enabled test and lays the tail call after the return-1 arm (nop after the epilogue = branch-to-next); ours predicates ldrb/cmp. */
#include "shard/Shard0034.h"

extern "C" s32 uiSpriteGetCompletionState(const EmbeddedFlagState *state);
extern "C" s32 uiSpriteGetOperationMode(const EmbeddedFlagState *state);

/* Use the embedded flag for an enabled mode-three state; otherwise allow the operation. */
extern "C" s32 FUN_00280030(const EmbeddedFlagOwner *owner)
{
    if (uiSpriteGetOperationMode(&owner->state) == 3 && owner->state.enabled == 0) {
        return uiSpriteGetCompletionState(&owner->state);
    }
    return 1;
}
