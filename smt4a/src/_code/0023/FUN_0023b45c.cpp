#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1368];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u32 unk136C;
    /* 0x1370 */ u8 unk1370[0xC9C];
    /* 0x200C */ u8 unk200C[5];
    /* 0x2011 */ u8 flag;
    /* 0x2012 */ u8 unk2012[6];
    /* 0x2018 */ u8 mode;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 depth;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 g_gameGlobals;

/* Stores the flag; when it is cleared outside mode 10 and the game state is 5, 6 or 7, also clears the word at 0x136C. */
void FUN_0023b45c(s32 flag)
{
    Game *game;
    s32 state;

    game = g_gameGlobals.game;
    g_gameGlobals.game->flag = (u8)flag;
    if (((flag == 0) && (game->mode != 10)) &&
        (state = game->state, (state == 5 || state == 6) || state == 7)) {
        game->unk136C = 0;
    }
}

} /* extern "C" */
