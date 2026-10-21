#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
s32 scrGetArg(s32 index);

// Queues a request containing three script arguments.
u32 scrCommQueueThreeValueRequest(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    s32 third = scrGetArg(2);
    g_gameState.scriptRequest.pending = 1;
    g_gameState.scriptRequest.first = first;
    g_gameState.scriptRequest.second = second;
    g_gameState.scriptRequest.third = third;
    return 1;
}
}
