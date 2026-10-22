/* NON_MATCHING: ARMCC folds the embedded-state address into leaf loads instead of retail's framed base adjustment/accessor sequence. */
#include "shard/Shard0034.h"

extern "C" s32 objectGetSignedFlag(const EmbeddedFlagState *state);

/* Use the embedded flag for an enabled mode-two state; otherwise allow the operation. */
extern "C" s32 FUN_0034efe0(const EmbeddedFlagOwner *owner)
{
    if (embeddedFlagStateMode(&owner->state) == 2 && owner->state.enabled != 0) {
        return objectGetSignedFlag(&owner->state);
    }
    return 1;
}
