/* NON_MATCHING: -O2 candidate; preset mapping branches simplify and the first sprite/global reload is hoisted, changing retained pointer registers. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct CampAnimationSprites {
    u8 unk000[0x658];
    UiAnimatedSprite sprites[13];
};
extern "C" {
extern CampAnimationSprites *g_camp;
void uiSpriteSetKeyframe(UiAnimatedSprite *sprite, s32 key, u32 restart);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 key, u32 restart);

void campSetSpriteAnimationPreset(s32 mode, s32 animation, s32 imageKey, u32 restart)
{
    CampAnimationSprites *work = g_camp;
    s32 key = animation;
    switch (animation) {
    case 1:
        key = 9;
        imageKey = 19;
        break;
    case 2:
        key = 10;
        imageKey = 19;
        break;
    case 3:
        key = 11;
        imageKey = 20;
        break;
    case 4:
        key = 12;
        imageKey = 20;
        break;
    }
    UiAnimatedSprite *first = &g_camp->sprites[0];
    if (mode == 2) {
        uiSpriteSetKeyframe(first, (s16)key, restart);
        uiSpriteSetKeyframe(&work->sprites[4], (s16)key, restart);
        uiSpriteSetImageKeyframe(first, (s16)imageKey, restart);
        uiSpriteSetImageKeyframe(&work->sprites[4], (s16)imageKey, restart);
    } else if (mode == 1) {
        uiSpriteSetKeyframe(first, (s16)key, restart);
        uiSpriteSetImageKeyframe(first, (s16)imageKey, restart);
    }
    for (s32 index = 0; index < 8; ++index) {
        UiAnimatedSprite *sprite = &work->sprites[index + 5];
        uiSpriteSetKeyframe(sprite, (s16)key, restart);
        uiSpriteSetImageKeyframe(sprite, (s16)imageKey, restart);
    }
}
}
