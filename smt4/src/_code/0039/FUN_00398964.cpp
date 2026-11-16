#include "common.h"
#include "ui/UiSpriteState.h"
#include "util/MathFunctions.h"

struct PartOwner {
    u8 unk000[0xa4];
    s32 xA4;       // 0x0a4
    u8 unkA8[4];
    s32 xAC;       // 0x0ac
    u8 unkB0[0x658];
    UiSpriteState parts[2]; // 0x708
};

extern "C" {

s32 uiSlidingSpriteAdvance(UiSpriteState *part, s32 value);
s32 uiSpriteAdvanceAnimation(UiSpriteState *part);
s8 uiSpriteGetCompletionState(const UiSpriteState *part);
void messageOwnerSetState(PartOwner *owner, s32 mode);

// Advance the first sprite's slide and the second's keyframe, then enter mode2 when both finish.
void FUN_00398964(PartOwner *owner)
{
    uiSlidingSpriteAdvance(&owner->parts[0], 0);
    uiSpriteAdvanceAnimation(&owner->parts[1]);
    owner->xA4 = vec2GetXInt(&owner->parts[0]);
    owner->xAC = owner->xA4;
    if (uiSpriteGetCompletionState(&owner->parts[0]) != 0 && uiSpriteGetCompletionState(&owner->parts[1]) != 0) {
        messageOwnerSetState(owner, 2);
    }
}

} /* extern "C" */
