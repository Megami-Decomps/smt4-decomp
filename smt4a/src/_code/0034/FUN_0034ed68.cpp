#include "shard/Shard0034.h"

namespace {
struct SpriteOwner { u8 padding[0x12B8]; EmbeddedFlagState sprite; };
}

extern "C" {
s32 uiSpriteGetCompletionState(const EmbeddedFlagState *state);
s32 uiSpriteGetOperationMode(const EmbeddedFlagState *state);

/* True when the sprite state's completion flag is set or it has no operation mode. */
u32 FUN_0034ed68(const SpriteOwner *owner)
{
    if (uiSpriteGetCompletionState(&owner->sprite) != 0) {
        return 1;
    }
    return uiSpriteGetOperationMode(&owner->sprite) == 0;
}
}
