#include "common.h"

struct BackgroundResetState {
    u8 unk000[0x251];
    s8 pending; // 0x251
};

extern "C" {
extern BackgroundResetState g_gameState;
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSelectMapPreset(void);

// Consume a pending background reset, choosing the reset path by game flag 0x16.
void backgroundConsumeReset(void)
{
    if (g_gameState.pending != 0) {
        g_gameState.pending = 0;
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
