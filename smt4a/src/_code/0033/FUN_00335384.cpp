/* NON_MATCHING: Completion getters fold to direct byte tests, and phase-one constant folding/dispatch scheduling differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/uiSpriteSelectAnim.h"

struct SpriteIntroTransitionWork {
    u8 unk000[0x5AC];
    UiAnimatedSprite sprites[6];
    u8 unk8F4[0x454];
    s32 phase;
    s32 timer;
};
typedef char SpriteIntroTransitionOffsetsCheck[
    offsetof(SpriteIntroTransitionWork, phase) == 0xD48 &&
    offsetof(SpriteIntroTransitionWork, timer) == 0xD4C ? 1 : -1];
extern "C" {
void FUN_00163aa4(UiAnimatedSprite *sprite, f32 speed);

/* Finishes the first two sprites, waits seventeen frames, then starts the remaining intro group. */
u32 FUN_00335384(SpriteIntroTransitionWork *work)
{
    u32 result = 0;
    switch (work->phase) {
    case 0:
        FUN_00163aa4(&work->sprites[0], 1.0f);
        FUN_00163aa4(&work->sprites[1], 1.0f);
        if (uiAnimatedSpriteIsFinished(&work->sprites[0]) && uiAnimatedSpriteIsFinished(&work->sprites[1])) {
            ++work->phase;
            work->timer = 0;
        }
        break;
    case 1:
        if (work->timer < 17) {
            break;
        }
        ++work->phase;
        work->timer = 0;
        /* Continue directly into the second group on the transition frame. */
    case 2:
        FUN_00163aa4(&work->sprites[2], 1.0f);
        FUN_00163aa4(&work->sprites[3], 1.0f);
        FUN_00163aa4(&work->sprites[4], 1.0f);
        FUN_00163aa4(&work->sprites[5], 1.0f);
        if (uiAnimatedSpriteIsFinished(&work->sprites[2]) &&
            uiAnimatedSpriteIsFinished(&work->sprites[3]) && uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            uiSpriteSelectAnim(&work->sprites[4], 9);
            ++work->phase;
            result = 1;
        }
        break;
    case 3:
        result = 1;
        break;
    }
    ++work->timer;
    return result;
}
}
