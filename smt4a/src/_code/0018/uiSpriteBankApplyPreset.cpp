/* NON_MATCHING: compiler hoists the bank pointer into r4 and retains complete sprite addresses instead of retail's bank-relative bases; argument scheduling differs, shifting the adjacent uiSpriteSelectAnim tail call out of branchnop range. -O2 candidate. */
#include "shard/W6_W6Match6_SpritePresetBank.h"

extern "C" {
void uiSpriteSelectAnim(UiAnimatedSprite *sprite, s32 animation);
void uiSpriteSetKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 alternate);
void uiSpriteSetImageKeyframe(UiAnimatedSprite *sprite, s32 keyframe, s32 alternate);

// Select one preset in the bank; the four paired entries also choose an image.
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset)
{
    switch (preset) {
    case 0:
        uiSpriteSetKeyframe(&bank->sprites[0], 0, 0);
        return;
    case 4:
        uiSpriteSetKeyframe(&bank->sprites[4], 3, 0);
        return;
    case 1:
        uiSpriteSetKeyframe(&bank->sprites[1], 1, 0);
        return;
    case 5:
        uiSpriteSetKeyframe(&bank->sprites[5], 4, 0);
        return;
    case 2:
        uiSpriteSelectAnim(&bank->sprites[2], 0);
        return;
    case 3:
        uiSpriteSetKeyframe(&bank->sprites[3], 2, 0);
        return;
    case 6:
        uiSpriteSetKeyframe(&bank->sprites[6], 5, 0);
        return;
    case 7:
        uiSpriteSetKeyframe(&bank->sprites[7], 6, 0);
        return;
    case 8:
        uiSpriteSetKeyframe(&bank->sprites[8], 7, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[8], 2, 0);
        return;
    case 9:
        uiSpriteSetKeyframe(&bank->sprites[9], 8, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[9], 3, 0);
        return;
    case 10:
        uiSpriteSetKeyframe(&bank->sprites[10], 9, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[10], 2, 0);
        return;
    case 11:
        uiSpriteSetKeyframe(&bank->sprites[11], 10, 0);
        uiSpriteSetImageKeyframe(&bank->sprites[11], 3, 0);
        return;
    case 12:
        uiSpriteSelectAnim(&bank->sprites[12], 1);
        return;
    }
}
}
