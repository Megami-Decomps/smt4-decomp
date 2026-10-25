/* NON_MATCHING: native mutable second-sprite update receiver recovered; first/second sprite saved registers and address-binding schedule differ. */
#include "common.h"
#include "ui/UiSpriteState.h"

struct PartOwner {
    u8 unk000[0xa4];
    s32 xA4;       // 0x0a4
    u8 unkA8[4];
    s32 xAC;       // 0x0ac
    u8 unkB0[0x658];
    UiSpriteState parts[2]; // 0x708
};

extern "C" {

s32 FUN_002b8ee0(UiSpriteState *part, s32 value);
s32 FUN_002bf818(UiSpriteState *part);
s32 vec2GetXInt(const UiSpriteState *part);
s8 uiSpriteGetCompletionState(const UiSpriteState *part);
void messageOwnerSetState(PartOwner *owner, s32 mode);

// Advance the first sprite's slide and the second's keyframe, then enter mode2 when both finish.
void FUN_00398964(PartOwner *owner)
{
    UiSpriteState *first = &owner->parts[0];
    FUN_002b8ee0(first, 0);
    UiSpriteState *second = &owner->parts[1];
    FUN_002bf818(second);
    s32 x = vec2GetXInt(first);
    owner->xA4 = x;
    owner->xAC = x;
    if (uiSpriteGetCompletionState(first) != 0 && uiSpriteGetCompletionState(second) != 0) {
        messageOwnerSetState(owner, 2);
    }
}

} /* extern "C" */
