#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "script/ScriptArgs.h"
extern "C" {

u32 FUN_003bb2f4(void)
{
    g_gameState.positionRequestPending = 1;
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    s32 third = scrGetArg(2);
    s32 x = scrGetArg(3);
    s32 z = scrGetArg(4);
    s32 fourth = scrGetArg(5);
    g_gameState.positionRequest.x = (f32)x;
    g_gameState.positionRequest.y = 0.0f;
    g_gameState.positionRequest.z = (f32)z;
    g_gameState.positionRequestParameters[0] = first;
    g_gameState.positionRequestParameters[1] = second;
    g_gameState.positionRequestParameters[2] = third;
    g_gameState.positionRequestParameters[3] = fourth;
    return 1;
}
}
