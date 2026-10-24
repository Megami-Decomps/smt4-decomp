#include "common.h"

extern "C" {

extern struct {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4C */ u32 value;
} g_gameState;

/* Script command: clears the game state's word at 0x4C. */
u32 FUN_0039bca4(void)
{
    g_gameState.value = 0;
    return 1;
}

} /* extern "C" */
