#include "common.h"

extern "C" {

void uiSpriteSelectAnim(u8 *member, s32 flag);
void uiSpriteSetKeyframe(u8 *unit, s32 a, s32 b);
void uiSpriteSetImageKeyframe(u8 *unit, s32 a, s32 b);
void FUN_0037c8e4(s32 a, s32 b);
void FUN_0038843c(void);

typedef struct Unit {
    /* 0x00 */ u8 data[0x8C];
} Unit;

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x18];
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C[0xE70];
    /* 0x0E8C */ Unit units[13];
    /* 0x15A8 */ u8 member15A8[0x8C];
    /* 0x1634 */ u8 member1634[0x348];
    /* 0x197C */ u8 member197C[1];
} Game;
extern Game *g_camp;

/* Resets the game screen: runs the two set-up calls, then restarts the 13 units and the three members and clears the word at 0x18. */
void FUN_002277d8(void)
{
    Game *game;
    s32 i;

    FUN_0037c8e4(1, 0);
    FUN_0038843c();
    game = g_camp;
    i = 0;
    do {
        uiSpriteSetKeyframe(game->units[i].data, 10, 0);
        uiSpriteSetImageKeyframe(game->units[i].data, 0x13, 0);
        i = i + 1;
    } while (i < 0xD);
    uiSpriteSetImageKeyframe(game->member15A8, 6, 0);
    uiSpriteSelectAnim(game->member197C, 8);
    game->unk18 = 0;
    uiSpriteSetImageKeyframe(game->member1634, 0x16, 0);
}

} /* extern "C" */
