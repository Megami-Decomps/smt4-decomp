/* NON_MATCHING: Retail ldr r2, [pc, #124] differs from recovered ldr r3, [pc, #112]. */
#include "common.h"

namespace {

struct GameStateLocalView {
    u8 unk00[0x2034]; // 0x0000
    u32 unk2034;      // 0x2034
};

struct GameGlobalsLocalView {
    u32 unk00;                   // 0x00
    GameStateLocalView* unk04;   // 0x04
};

}

extern "C" {
extern GameGlobalsLocalView g_gameGlobals;
int gameStateChange(int state);
void FUN_0040b27c(u32 object, s32 mode, u32 value, s32 state);

// Dispatch recognized modes using the global object, then change to state 7.
int FUN_0038b5fc(s32 mode, u32 value)
{
    switch (mode) {
    case 0:
        FUN_0040b27c(g_gameGlobals.unk04->unk2034, 0, value, 7);
        break;
    case 1:
        FUN_0040b27c(g_gameGlobals.unk04->unk2034, 1, value, 7);
        break;
    case 2:
        FUN_0040b27c(g_gameGlobals.unk04->unk2034, 2, value, 7);
        break;
    }

    return gameStateChange(7);
}
}
