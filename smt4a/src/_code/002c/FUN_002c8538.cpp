#include "common.h"

extern "C" {

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x2012];
    /* 0x2012 */ u8 value;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 DAT_00588fd0;

/* Stores `value` in the byte at 0x2012 of the game record. */
void FUN_002c8538(u8 value)
{
    DAT_00588fd0.game->value = value;
}

} /* extern "C" */
