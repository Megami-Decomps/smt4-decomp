#include "common.h"

struct GameStateSlot {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 value;
};

extern "C" {

extern GameStateSlot g_gameState;

void FUN_003d4c68(s32 value);

/* Script command: hands the game-state word at 0x2c to FUN_003d4c68. */
u32 FUN_0039bc88(void)
{
    FUN_003d4c68(g_gameState.value);
    return 1;
}

} /* extern "C" */
