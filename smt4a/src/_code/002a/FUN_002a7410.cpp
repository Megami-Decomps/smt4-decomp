#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x0000 */ u8 unk0000[0x1374];
    /* 0x1374 */ s32 flag;
} GameState;

typedef struct GameGlobalsView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ GameState *state;
} GameGlobalsView;

extern GameGlobalsView g_gameGlobals;

/* Returns whether the game state exists and has its 0x1374 flag set. */
u32 FUN_002a7410(void)
{
    GameState *state = g_gameGlobals.state;

    if (state != NULL) {
        return state->flag != 0;
    }
    return 0;
}

} /* extern "C" */
