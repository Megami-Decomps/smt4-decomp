#include "common.h"

struct ScriptRequestStateA {
    u8 unk000[0x28c];
    s32 requestState;
    u8 requestOption;
};

extern "C" {
extern ScriptRequestStateA g_gameState;
s32 scrGetArg(s32 index);

u8 FUN_0037025c(void)
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
