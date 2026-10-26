/* NON_MATCHING: addressing/getters now match (UiSprite completion flag + operation mode); retail returns 0 through movne/bne with the 1-return as fall-through, the build emits the inverse polarity (4 control-flow forms tried). */
#include "shard/Shard0034.h"

namespace {
struct SpriteOwner { u8 padding[0x12B8]; EmbeddedFlagState sprite; };
}

extern "C" {
s32 uiSpriteGetCompletionState(const EmbeddedFlagState *state);
s32 uiSpriteGetOperationMode(const EmbeddedFlagState *state);

/* True when the sprite state's completion flag is clear and it is not in a mode. */
u32 FUN_0034ed68(const SpriteOwner *owner)
{
    if (uiSpriteGetCompletionState(&owner->sprite) != 0 || uiSpriteGetOperationMode(&owner->sprite) != 0) {
        return 0;
    }
    return 1;
}
}
