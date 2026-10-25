#include "map/mapDepart.h"
#include "test/BustupViewer.h"

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

extern GameStateA g_gameState;

s32 FUN_00163aa4(u8 *sprite, f32 speed);
s32 vec2GetXInt(u8 *sprite);
s32 vec2GetYInt(u8 *sprite);
void pointConvertToFloat(u8 *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(u8 *bank, s32 preset);
void FUN_00168980(s32 sound);

/* Opens the popup on its first update, then plays its sprite animation and follows the sprite's
 * position until the animation ends. */
void FUN_0048bd2c(EnemyPopup *popup)
{
    u8 *sprite;

    switch (popup->state) {
    case 0:
        uiSpriteBankApplyPreset(popup->spriteBank, 1);
        if (g_gameState.mapFlags.unk295 == 0) {
            FUN_00168980(0x1b);
        }
        popup->flags |= 0x1000000;
        popup->state = 1;
        break;
    case 1:
        sprite = popup->sprite;
        if (FUN_00163aa4(sprite, 1.0f) != 0 && FUN_002e19f8() != 0) {
            popup->state = 2;
            popup->flags |= 2;
        }
        pointConvertToFloat(popup->position, vec2GetXInt(sprite), vec2GetYInt(sprite));
        break;
    }
}

} /* extern "C" */
