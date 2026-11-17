#include "common.h"
#include "game/GameState.h"


extern "C" {
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSelectMapPreset(void);

// Consume a pending background reset, choosing the reset path by game flag 0x16.
void backgroundConsumeReset(void)
{
    if (g_gameState.map.bgResetPending != 0) {
        g_gameState.map.bgResetPending = 0;
        switch (gameFlagIsSet(0x16)) {
        case 0:
            commonBgStopChildAndBeginTransition();
            break;
        default:
            commonBgReset();
            break;
        }
    }
    buttonHelpSelectMapPreset();
}
}
