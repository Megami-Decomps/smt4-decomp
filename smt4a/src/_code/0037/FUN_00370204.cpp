#include "common.h"

struct GameStateFUN_00370204 {
    /* 0x000 */ u8 unk000[0x454];
    /* 0x454 */ s32 value;
};

extern "C" {

extern GameStateFUN_00370204 g_gameState;

s32 scrGetArg(u32 index);

/* Script command: stores argument zero in the game state at 0x454. */
s32 FUN_00370204(void)
{
    g_gameState.value = scrGetArg(0);
    return 1;
}

} /* extern "C" */
