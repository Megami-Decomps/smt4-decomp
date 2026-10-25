/* NON_MATCHING: preset key/image branches match; the first sprite's global reload is folded and retained pointer/key registers differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct CampAnimationSprites {
    u8 unk000[0x658];
    UiAnimatedSprite sprites[13];
};
extern "C" {
extern CampAnimationSprites *g_camp;
void uiSpriteSetKeyframe(UiAnimatedSprite *sprite, s32 key, u32 restart);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 key, u32 restart);

static __inline s32 campAnimationPresetKey(s32 animation)
{
    s32 key = animation;
    switch (animation) {
    case 1: key = 9; break;
    case 2: key = 10; break;
    case 3: key = 11; break;
    case 4: key = 12; break;
    }
    return key;
}

void campSetSpriteAnimationPreset(s32 mode, s32 animation, s32 imageKey, u32 restart)
{
    CampAnimationSprites *work = g_camp;
    s32 key = campAnimationPresetKey(animation);
    if (animation == 1 || animation == 2)
        imageKey = 19;
    else if (animation == 3 || animation == 4)
        imageKey = 20;
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
