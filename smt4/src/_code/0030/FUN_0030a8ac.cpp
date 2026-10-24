#include "common.h"

struct GameStateSlot {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 value;
};

extern "C" {

extern GameStateSlot g_gameState;

void FUN_00287328(s32 value);

/* Script command: hands the game-state word at 0x28 to FUN_00287328. */
u32 FUN_0030a8ac(void)
{
    FUN_00287328(g_gameState.value);
    return 1;
}

} /* extern "C" */
