#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1368];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u32 unk136C;
    /* 0x1370 */ u8 unk1370[4];
    /* 0x1374 */ u32 unk1374;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 depth;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 g_gameGlobals;

/* Returns the word at 0x1374 of the game record. */
u32 FUN_0023b3b8(void)
{
    return g_gameGlobals.game->unk1374;
}

} /* extern "C" */
