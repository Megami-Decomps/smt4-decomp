/* NON_MATCHING: game-state base and branch constant registers differ from retail. */
#include "common.h"

struct ScriptGameFlags {
    u8 unk000[0x25d];
    u8 flag25d;
    u8 flag25e;
    u8 unk25f[2];
    u8 flag261;
    u8 unk262[0x1e];
    u8 flag280;
};

extern "C" {
extern ScriptGameFlags g_gameState;
s32 scrGetArg(u32 argument);

// Toggle the three related state flags and clear the transition byte.
u32 FUN_002c2f84(u32 argument)
{
    if (scrGetArg(argument) != 0) {
        g_gameState.flag261 = 0;
        g_gameState.flag280 = 0;
        g_gameState.flag25d = 0;
        g_gameState.flag25e = 0;
    } else {
        g_gameState.flag261 = 1;
        g_gameState.flag280 = 0;
        g_gameState.flag25d = 1;
        g_gameState.flag25e = 1;
    }
    return 1;
}
}
