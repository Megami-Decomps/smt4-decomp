#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1368];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u8 unk136C[8];
    /* 0x1374 */ u32 unk1374;
    /* 0x1378 */ u8 unk1378[0xC9C];
    /* 0x2014 */ u8 unk2014;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 g_gameGlobals;

/* Returns whether the game state is 9. */
u8 FUN_002857dc(void)
{
    return g_gameGlobals.game->state == 9;
}

} /* extern "C" */
