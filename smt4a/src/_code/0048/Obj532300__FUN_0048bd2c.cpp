#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "test/BustupViewer.h"
#include "ui/UiSpriteApi.h"

struct EnemyPopup {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x4BC];
    /* 0x4D0 */ u8 position[0x14];
    /* 0x4E4 */ u8 spriteBank[0xAC];
    /* 0x590 */ u8 sprite[0x8C];
};

extern "C" {

void pointConvertToFloat(u8 *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(u8 *bank, s32 preset);
void buttonHelpTransitionPresetFlags(s32 sound);

/* Opens the popup on its first update, then plays its sprite animation and follows the sprite's
 * position until the animation ends. */
void _ZN9Obj53230012FUN_0048bd2cEv(EnemyPopup *popup)
{
    u8 *sprite;

    switch (popup->state) {
    case 0:
        uiSpriteBankApplyPreset(popup->spriteBank, 1);
        if (g_gameState.menuOpen == 0) {
            buttonHelpTransitionPresetFlags(0x1b);
        }
        popup->flags |= 0x1000000;
        popup->state = 1;
        break;
    case 1:
        sprite = popup->sprite;
        if (uiSpriteAdvanceAnimation((UiSpriteState *)sprite, 1.0f) != 0 && buttonHelpStateIsNot3() != 0) {
            popup->state = 2;
            popup->flags |= 2;
        }
        pointConvertToFloat(popup->position, vec2GetXInt((const UiSpriteState *)sprite), vec2GetYInt((const UiSpriteState *)sprite));
        break;
    }
}

} /* extern "C" */
