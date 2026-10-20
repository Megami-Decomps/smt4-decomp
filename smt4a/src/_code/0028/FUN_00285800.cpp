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
extern Global588fd0 DAT_00588fd0;

void FUN_0021af2c(void);

/* Clears the word at 0x1374 of the game record, runs FUN_0021af2c and clears the byte at 0x2014. */
void FUN_00285800(void)
{
    Game *game;

    game = DAT_00588fd0.game;
    DAT_00588fd0.game->unk1374 = 0;
    FUN_0021af2c();
    game->unk2014 = 0;
}

} /* extern "C" */
