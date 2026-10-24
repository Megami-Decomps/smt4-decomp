#include "common.h"

/* The game state block as seen by this command: a flag word and a value. */
struct GameStateScriptView {
    u8 unk00[0x54];
    s32 flag;
    u8 unk58[0x4c];
    s32 value;
};

extern "C" {
extern GameStateScriptView g_gameState;
s32 scrGetArg(u32 index);

/* Script command: raises a game state flag and stores its first argument in the state's value at 0xa4. */
s32 FUN_0038af64(void)
{
    g_gameState.flag = 1;
    g_gameState.value = scrGetArg(0);
    return 1;
}
}
