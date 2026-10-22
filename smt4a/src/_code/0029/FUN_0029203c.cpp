#include "common.h"

struct MapResumeFlagsView {
    u8 unk0000[0x16a0];
    s32 pending; // 0x16a0
};

extern "C" {
MapResumeFlagsView *gameFlagsGetBlock(void);
extern s32 g_gameState;
void gameFlagSetValue(u32, s32, s32);
s32 gameFlagIsSet(u32);
void FUN_0024400c(void);
void FUN_002440f4(void);

// Resume map effects after returning from one of the map-related game states.
void FUN_0029203c(void)
{
    MapResumeFlagsView *flags = gameFlagsGetBlock();
    if (g_gameState == 5)
        gameFlagSetValue(0x4d0, 0, 1);
    if (flags->pending != 0 &&
        (g_gameState == 28 || g_gameState == 29 ||
         g_gameState == 30 || g_gameState == 31 || g_gameState == 32)) {
        gameFlagSetValue(0x4d0, 1, 1);
        flags->pending = 0;
    }
    if (gameFlagIsSet(0x4d0)) {
        FUN_0024400c();
        FUN_002440f4();
    }
}
}
