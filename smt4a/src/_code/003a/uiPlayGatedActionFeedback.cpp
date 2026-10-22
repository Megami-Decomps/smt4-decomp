#include "map/mapDepart.h"

extern "C" {
extern GameStateA g_gameState;
s32 gameFlagIsSet(u32 flag);
s32 FUN_004a0404();
void sysPlaySe(u32 id);
void FUN_00183f58(u32 mode, u32 first, u32 second, u32 enabled);

// Play blocked, unavailable or successful action feedback according to map mode and story flags.
void uiPlayGatedActionFeedback()
{
    if ((g_gameState.mode == 5 && g_gameState.submode == 12) ||
        !gameFlagIsSet(0x49a) || (gameFlagIsSet(12) && !gameFlagIsSet(16))) {
        sysPlaySe(0xd3);
        return;
    }
    if (FUN_004a0404()) {
        if (g_gameState.mode == 101) {
            sysPlaySe(0x105);
            FUN_00183f58(0, 19, 89, 1);
            FUN_00183f58(1, 0, 0, 1);
            return;
        }
        sysPlaySe(0x104);
        FUN_00183f58(0, 19, 89, 1);
        FUN_00183f58(1, 0, 0, 1);
        return;
    }
    if (g_gameState.mode >= 100)
        sysPlaySe(0xd2);
    else
        sysPlaySe(0x41);
}
}
