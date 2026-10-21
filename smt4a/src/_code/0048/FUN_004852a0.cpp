/* NON_MATCHING: compiler folds signed sprite-finished tests into direct LDRB loads; retail uses base ADD plus LDRSB for each. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct StateSetterSpriteWork {
    u8 unk000[0xa4];
    s32 spriteX;
    u32 unk0a8;
    s32 savedSpriteX;
    u8 unk0b0[0x270];
    UiAnimatedSprite firstSprite; // 0x320
    UiAnimatedSprite secondSprite; // 0x3ac
};

extern "C" {
s32 FUN_00167458(UiAnimatedSprite* sprite, s32 reverse);
s32 FUN_00163aa4(UiAnimatedSprite* sprite, f32 frameStep);
s32 vec2GetXInt(UiAnimatedSprite* sprite);
void stateSetterEnterState(StateSetterSpriteWork* work, s32 state);

void FUN_004852a0(StateSetterSpriteWork* work)
{
    FUN_00167458(&work->firstSprite, 0);
    FUN_00163aa4(&work->secondSprite, 1.0f);
    work->spriteX = vec2GetXInt(&work->firstSprite);
    work->savedSpriteX = work->spriteX;
    if (work->firstSprite.finished && work->secondSprite.finished) {
        stateSetterEnterState(work, 2);
    }
}
}
