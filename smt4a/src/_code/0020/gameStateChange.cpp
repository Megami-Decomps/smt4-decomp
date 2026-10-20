#include "common.h"

extern "C" {

s32 aocDataBlockResolveEntries(void);

typedef struct Game {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ u32 unk10;
    /* 0x0014 */ u8 unk14[0x1354];
    /* 0x1368 */ s32 state;
    /* 0x136C */ u8 unk136C[4];
    /* 0x1370 */ s32 previousState;
} Game;

typedef struct Global588fd0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Game *game;
} Global588fd0;
extern Global588fd0 g_gameGlobals;

/* Switches the game to `newState`, remembering the previous one; state 4 falls back to 0xB when aocDataBlockResolveEntries reports 0. */
void gameStateChange(s32 newState)
{
    Game *game;
    s32 previous;

    game = g_gameGlobals.game;
    g_gameGlobals.game->unk10 = 0;
    previous = game->state;
    game->state = newState;
    game->previousState = previous;
    if ((newState == 4) && (aocDataBlockResolveEntries() == 0)) {
        game->state = 0xB;
    }
}

} /* extern "C" */
