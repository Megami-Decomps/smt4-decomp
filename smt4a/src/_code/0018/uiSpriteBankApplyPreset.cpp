#include "shard/W6_W6Match6_SpritePresetBank.h"

extern "C" {
void uiSpriteSelectAnim(UiAnimatedSprite *sprite, s32 animation);
void uiSpriteSetKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 alternate);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 alternate);

// Select one preset in the bank: each preset drives its own sprite; the four paired entries also choose an image.
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset)
{
    switch (preset) {
    case 0:
        uiSpriteSetKeyframe(&bank->sprites[preset], 0, 0);
        return;
    case 4:
        uiSpriteSetKeyframe(&bank->sprites[preset], 3, 0);
        return;
    case 1:
        uiSpriteSetKeyframe(&bank->sprites[preset], 1, 0);
        return;
    case 5:
        uiSpriteSetKeyframe(&bank->sprites[preset], 4, 0);
        return;
    case 2:
        uiSpriteSelectAnim(&bank->sprites[preset], 0);
        return;
    case 3:
        uiSpriteSetKeyframe(&bank->sprites[preset], 2, 0);
        return;
    case 6:
        uiSpriteSetKeyframe(&bank->sprites[preset], 5, 0);
        return;
    case 7:
        uiSpriteSetKeyframe(&bank->sprites[preset], 6, 0);
        return;
    case 8:
        uiSpriteSetKeyframe(&bank->sprites[preset], 7, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[preset], 2, 0);
        return;
    case 9:
        uiSpriteSetKeyframe(&bank->sprites[preset], 8, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[preset], 3, 0);
        return;
    case 10:
        uiSpriteSetKeyframe(&bank->sprites[preset], 9, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[preset], 2, 0);
        return;
    case 11:
        uiSpriteSetKeyframe(&bank->sprites[preset], 10, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[preset], 3, 0);
        return;
    case 12:
        uiSpriteSelectAnim(&bank->sprites[preset], 1);
        return;
    }
}
}
