#include "map/mapDepart.h"


extern "C" {
extern GameStateA g_gameState;
s32 scrGetArg(s32 index);

u8 scrCommPollRequest(void)
{
    if (g_gameState.request.requestState == 0) {
        if (scrGetArg(0) == 1) {
            g_gameState.request.requestOption = 1;
        } else {
            g_gameState.request.requestOption = 0;
        }
        g_gameState.request.requestState = 1;
        return 0;
    }
    if (g_gameState.request.requestState == 2) {
        g_gameState.request.requestState = 0;
        g_gameState.request.requestOption = 0;
        return 1;
    }
    return 0;
}

} /* extern "C" */
