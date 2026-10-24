#include "common.h"

extern "C" {

extern struct {
    /* 0x000 */ u8 unk000[0x450];
    /* 0x450 */ u8 flag;
} g_gameState;

void FUN_00303460(u32 mode);

/* Script command: clears the game state's flag at 0x450 and runs FUN_00303460(25). */
void FUN_003bf4f0(void)
{
    g_gameState.flag = 0;
    FUN_00303460(25);
}

} /* extern "C" */
