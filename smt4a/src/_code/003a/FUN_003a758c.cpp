#include "common.h"

struct GameStateFlag {
    /* 0x00 */ u8 unk00[0x4cd];
    /* 0x4cd */ u8 flag;
};

extern "C" {

extern GameStateFlag g_gameState;

/* Script command: raises the game-state flag at 0x4cd. */
u32 FUN_003a758c(void)
{
    g_gameState.flag = 1;
    return 1;
}

} /* extern "C" */
