#include "common.h"
#include "ui/UiSpriteState.h"

struct TargetState {
    /* 0x000 */ u8 unk00[0x1c4];
    /* 0x1c4 */ UiSpriteState sprite;
};
extern "C" {
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);

/* Reports whether the target's sprite has a completion state set. */
s32 FUN_0031f524(const TargetState *target)
{
    return uiSpriteGetCompletionState(&target->sprite) != 0;
}
}
