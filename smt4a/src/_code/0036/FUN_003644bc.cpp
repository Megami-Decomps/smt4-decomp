#include "common.h"

extern "C" {

struct GameStateView { u8 unk00[0x32]; u8 kind; u8 unk33[4]; s8 state; };
extern GameStateView g_gameState;

s32 FUN_003644bc(void)
{
    return g_gameState.state == -1 && g_gameState.kind == 4;
}

} /* extern "C" */
