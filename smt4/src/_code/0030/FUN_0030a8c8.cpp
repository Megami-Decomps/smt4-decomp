#include "common.h"

struct GameStateSlot48 {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s32 value;
};

extern "C" {

extern GameStateSlot48 g_gameState;

/* Script command: clears the game-state word at 0x48. */
u32 FUN_0030a8c8(void)
{
    g_gameState.value = 0;
    return 1;
}

} /* extern "C" */
