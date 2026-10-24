#include "map/mapDepart.h"


extern "C" {
extern GameStateA g_gameState;
s32 scrGetArg(u32 argument);

// Toggle the three related state flags and clear the transition byte.
u32 FUN_002c2f80(void)
{
    if (scrGetArg(0) != 0) {
        g_gameState.request.unk261 = 0;
        g_gameState.request.unk280 = 0;
        g_gameState.request.unk25D = 0;
        g_gameState.request.unk25E = 0;
    } else {
        g_gameState.request.unk261 = 1;
        g_gameState.request.unk280 = 0;
        g_gameState.request.unk25D = 1;
        g_gameState.request.unk25E = 1;
    }
    return 1;
}
}
