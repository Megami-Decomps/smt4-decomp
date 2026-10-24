#include "common.h"

/* The game state block as seen by this command: only the flag byte at 0x49f. */
struct GameStateFlagView {
    u8 unk000[0x49f];
    u8 flag;
};

extern "C" GameStateFlagView g_gameState;

/* Script command: sets the game state flag at 0x49f. */
extern "C" void FUN_0039beb4(void)
{
    g_gameState.flag = 1;
}
