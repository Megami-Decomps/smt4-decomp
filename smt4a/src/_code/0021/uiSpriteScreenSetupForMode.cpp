#include "common.h"

#define SPRITE_COUNT 5

/* An animated sprite of the screen (0x8C bytes). */
struct ScreenSprite {
    u8 data[0x8C];
};

/* The screen's work (observed fields). */
struct SpriteScreenWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ ScreenSprite sprite[SPRITE_COUNT];
    /* 0x2DC */ u8 unk2DC[0x14];
    /* 0x2F0 */ u32 mode;
    /* 0x2F4 */ u8 unk2F4[4];
    /* 0x2F8 */ s32 value;
};

extern "C" {

void uiSpriteSelectAnim(ScreenSprite *sprite, s32 animation);
void pairSetFirstResetSecond(ScreenSprite *sprite, s32 first);
void FUN_00387240(ScreenSprite *sprite, s32 kind, s32 value);

/* Sets the screen's sprites up for its current mode: which animation each sprite plays and the
 * value it shows. */
void uiSpriteScreenSetupForMode(SpriteScreenWork *work)
{
    s32 i;

    switch (work->mode) {
    default:
        return;
    case 1:
    case 8:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        return;
    case 2:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 3);
        return;
    case 3:
        uiSpriteSelectAnim(&work->sprite[0], 4);
        uiSpriteSelectAnim(&work->sprite[1], 5);
        return;
    case 4:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        for (i = 0; i < 4; i++) {
            pairSetFirstResetSecond(&work->sprite[1 + i], i + 0x4269);
            uiSpriteSelectAnim(&work->sprite[1 + i], 6);
        }
        return;
    case 5:
        pairSetFirstResetSecond(&work->sprite[1], 0x59D9);
        pairSetFirstResetSecond(&work->sprite[2], 0x59DA);
        FUN_00387240(&work->sprite[1], 0x10, 0x59DB);
        FUN_00387240(&work->sprite[2], 0x10, 0x59DB);
        uiSpriteSelectAnim(&work->sprite[1], 7);
        uiSpriteSelectAnim(&work->sprite[2], 8);
        return;
    case 6:
        pairSetFirstResetSecond(&work->sprite[1], 0x7149);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 9);
        return;
    case 7:
        pairSetFirstResetSecond(&work->sprite[1], 0x130B1);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 10);
        return;
    case 9:
        pairSetFirstResetSecond(&work->sprite[1], work->value * 1000 + 1);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 11);
        return;
    case 10:
    case 14:
        pairSetFirstResetSecond(&work->sprite[1], work->value * 1000 + 1);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 2);
        return;
    case 11:
        pairSetFirstResetSecond(&work->sprite[1], work->value * 1000 + 1);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 12);
        return;
    case 12:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 2);
        uiSpriteSelectAnim(&work->sprite[2], 13);
        return;
    case 13:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 15);
        return;
    case 15:
        pairSetFirstResetSecond(&work->sprite[1], work->value * 1000);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 16);
        return;
    case 16:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 2);
        uiSpriteSelectAnim(&work->sprite[2], 14);
        return;
    case 17:
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 17);
        return;
    case 18:
        pairSetFirstResetSecond(&work->sprite[1], 0x67071);
        uiSpriteSelectAnim(&work->sprite[0], 2);
        uiSpriteSelectAnim(&work->sprite[1], 18);
        return;
    case 19:
        uiSpriteSelectAnim(&work->sprite[0], 19);
        return;
    }
}

} /* extern "C" */
