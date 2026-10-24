#include "common.h"

struct GameStateFUN_003c8510 {
    /* 0x000 */ u8 unk000[0x44c];
    /* 0x44c */ u32 value;
};

extern "C" {

extern GameStateFUN_003c8510 g_gameState;

/* Stores the value in the game state at 0x44c. */
void FUN_003c8510(u32 value)
{
    g_gameState.value = value;
}

} /* extern "C" */
