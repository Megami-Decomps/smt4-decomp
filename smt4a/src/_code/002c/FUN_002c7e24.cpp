#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ u8 member1390[0xC87];
    /* 0x2017 */ u8 unk2017;
    /* 0x2018 */ u8 unk2018;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 DAT_00588fd0;

/* Returns the address of the member at 0x1390 of the game record. */
u8 *FUN_002c7e24(void)
{
    return DAT_00588fd0.game->member1390;
}

} /* extern "C" */
