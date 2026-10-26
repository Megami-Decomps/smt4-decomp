/* NON_MATCHING: Coordinate conversions and the zero component use separate scalar stores instead of the retail VSTM triple. */
#include "map/mapDepart.h"
#include "script/ScriptArgs.h"
extern "C" {
extern GameStateA g_gameState;
// Retail references the embedded position through this existing data symbol.
extern MapVector DAT_005f1a64;

u32 FUN_003bb2f4(void)
{
    g_gameState.scriptPositionRequest.pending = 1;
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    s32 third = scrGetArg(2);
    s32 x = scrGetArg(3);
    s32 z = scrGetArg(4);
    s32 fourth = scrGetArg(5);
    MapVector position = {(f32)x, 0.0f, (f32)z};
    DAT_005f1a64 = position;
    g_gameState.scriptPositionRequest.parameters[0] = first;
    g_gameState.scriptPositionRequest.parameters[1] = second;
    g_gameState.scriptPositionRequest.parameters[2] = third;
    g_gameState.scriptPositionRequest.parameters[3] = fourth;
    return 1;
}
}
