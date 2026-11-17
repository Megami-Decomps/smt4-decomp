#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(s32 index);

// Queues a request containing three script arguments.
u32 scrCommQueueThreeValueRequest(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    s32 third = scrGetArg(2);
    g_gameState.scriptRequestPending = 1;
    g_gameState.scriptRequestValues[0] = first;
    g_gameState.scriptRequestValues[1] = second;
    g_gameState.scriptRequestValues[2] = third;
    return 1;
}
}
