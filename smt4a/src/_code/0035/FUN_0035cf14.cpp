#include "common.h"

extern "C" {

extern struct {
    /* 0x000 */ u8 unk000[0x128];
    /* 0x128 */ u8 flag;
} g_gameState;

void scrSetResult(s32 result);

/* Script command: returns 1 when the game state's flag at 0x128 is set. */
u32 FUN_0035cf14(void)
{
    scrSetResult(g_gameState.flag != 0);
    return 1;
}

} /* extern "C" */
