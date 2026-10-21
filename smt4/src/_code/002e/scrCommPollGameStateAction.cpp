#include "common.h"

struct AsyncGameState {
    u8 unk000[0x248];
    s32 state; // 0x248
    u8 option; // 0x24c
};

extern "C" {
extern AsyncGameState g_gameState;
s32 scrGetArg(u32 index);

// Start the request once, then report completion when its state reaches two.
u32 scrCommPollGameStateAction(void)
{
    if (g_gameState.state == 0) {
        if (scrGetArg(0) == 1) {
            g_gameState.option = 1;
        } else {
            g_gameState.option = 0;
        }
        g_gameState.state = 1;
        return 0;
    }
    bool complete = g_gameState.state == 2;
    if (complete) {
        g_gameState.state = 0;
        g_gameState.option = 0;
    }
    return complete;
}
}
