#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(s32 index);

u8 scrCommPollRequest(void)
{
    if (g_gameState.requestState == 0) {
        if (scrGetArg(0) == 1) {
            g_gameState.requestOption = 1;
        } else {
            g_gameState.requestOption = 0;
        }
        g_gameState.requestState = 1;
        return 0;
    }
    if (g_gameState.requestState == 2) {
        g_gameState.requestState = 0;
        g_gameState.requestOption = 0;
        return 1;
    }
    return 0;
}

} /* extern "C" */
