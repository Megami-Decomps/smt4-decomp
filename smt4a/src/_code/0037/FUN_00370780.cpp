#include "common.h"

struct GameStateFUN_00370780 {
    /* 0x000 */ u8 unk000[0x4d9];
    /* 0x4d9 */ u8 flag;
};

extern "C" {

extern GameStateFUN_00370780 g_gameState;

/* Sets the game state flag at 0x4d9. */
void FUN_00370780(void)
{
    g_gameState.flag = 1;
}

} /* extern "C" */
