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
extern Global588fd0 DAT_00588fd0;

/* Returns whether the game state is neither 2 nor 1. */
u8 FUN_0023b3d0(void)
{
    return DAT_00588fd0.game->state != 2 && DAT_00588fd0.game->state != 1;
}

} /* extern "C" */
