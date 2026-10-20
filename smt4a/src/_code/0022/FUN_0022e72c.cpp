#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1368];
    /* 0x1368 */ s32 state;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 g_gameGlobals;

/* Returns whether the game state is 0. */
u8 FUN_0022e72c(void)
{
    return g_gameGlobals.game->state == 0;
}

} /* extern "C" */
