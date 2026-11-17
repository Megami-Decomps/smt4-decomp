#include "common.h"
#include "game/GameState.h"


extern "C" {
s32 scrGetArg(u32 index);

// Start the request once, then report completion when its state reaches two.
u32 scrCommPollGameStateAction(void)
{
    if (g_gameState.map.actionState == 0) {
        if (scrGetArg(0) == 1) {
            g_gameState.map.actionOption = 1;
        } else {
            g_gameState.map.actionOption = 0;
        }
        g_gameState.map.actionState = 1;
        return 0;
    }
    bool complete = g_gameState.map.actionState == 2;
    if (complete) {
        g_gameState.map.actionState = 0;
        g_gameState.map.actionOption = 0;
    }
    return complete;
}
}
