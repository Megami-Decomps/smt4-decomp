#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/UiSpriteApi.h"

struct StateSetterSpriteWork {
    u8 unk000[0xa4];
    s32 spriteX;
    u32 unk0a8;
    s32 savedSpriteX;
    u8 unk0b0[0x270];
    UiSpriteState firstSprite; // 0x320
    UiSpriteState secondSprite; // 0x3ac
};

extern "C" {
void stateSetterEnterState(StateSetterSpriteWork* work, s32 state);

void FUN_004852a0(StateSetterSpriteWork* work)
{
    FUN_00167458(&work->firstSprite, 0);
    uiSpriteAdvanceAnimation(&work->secondSprite, 1.0f);
    work->spriteX = vec2GetXInt(&work->firstSprite);
    work->savedSpriteX = work->spriteX;
    if (uiSpriteGetCompletionState(&work->firstSprite) != 0 && uiSpriteGetCompletionState(&work->secondSprite) != 0) {
        stateSetterEnterState(work, 2);
    }
}
}
