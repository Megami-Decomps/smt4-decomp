#include "shard/Shard0034.h"

extern "C" s32 uiSpriteGetCompletionState(const EmbeddedFlagState *state);
extern "C" s32 uiSpriteGetOperationMode(const EmbeddedFlagState *state);

/* Use the embedded flag for an enabled mode-two state; otherwise allow the operation. */
extern "C" s32 FUN_0034efe0(const EmbeddedFlagOwner *owner)
{
    if (uiSpriteGetOperationMode(&owner->state) == 2 && owner->state.enabled != 0) {
        return uiSpriteGetCompletionState(&owner->state);
    }
    return 1;
}
