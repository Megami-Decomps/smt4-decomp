#include "shard/Shard0034.h"


/* Use the embedded flag for an enabled mode-three state; otherwise allow the operation. */
extern "C" s32 FUN_00280030(const EmbeddedFlagOwner *owner)
{
    if (uiSpriteGetOperationMode(&owner->state) == 3 && owner->state.positionReverse == 0) {
        return uiSpriteGetCompletionState(&owner->state);
    }
    return 1;
}
