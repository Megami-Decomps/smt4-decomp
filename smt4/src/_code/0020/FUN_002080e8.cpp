#include "common.h"
#include "battle/BattleUnitSlot.h"

extern "C" {

/* A flag block inside the game state. */
struct GameStateFlags {
    /* 0x00 */ u8 unk00[0xF8];
    /* 0xF8 */ u8 enabled;
    /* 0xF9 */ u8 unkF9[3];
};

/* The game state block: only the fields read here are named. */
struct GameStateView {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ GameStateFlags flags;
    /* 0x2FC */ s32 valueA;
    /* 0x300 */ u8 unk300[0x1C];
    /* 0x31C */ s32 valueB;
};

extern GameStateView g_gameState;
s32 FUN_0027d98c(void);

/* Whether the current mode's counter has reached 100. */
u32 FUN_002080e8(void)
{
    s32 mode = FUN_0027d98c();
    GameStateFlags *flags = &g_gameState.flags;
    GameStateView *state = &g_gameState;

    switch (mode) {
    case 0:
    case 3:
        if (flags->enabled != 0 && state->valueA >= 100) {
            return 1;
        }
        break;
    case 1:
    case 2:
    case 4:
        if (flags->enabled != 0 && state->valueB >= 100) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
