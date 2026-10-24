#include "common.h"

struct ScreenGameState {
    u8 unk000[0x251];  // 0x000
    u8 bgActive;       // 0x251
};

extern "C" {

extern ScreenGameState g_gameState;

s32 scrGetArg(u32 index);
void commonBgReset(void);
void FUN_002757a8(void);
void FUN_00275bc8(void);
void FUN_00289880(void);
void buttonHelpSetPreset(s32 preset);

/* Script command (called with r0 = 0, which reaches scrGetArg unchanged): switches the common background on (arg != 0) or off (arg == 0), only when it changes. */
s32 FUN_002fe964(u32 argIndex)
{
    u8 active;
    s32 value = scrGetArg(argIndex);

    active = g_gameState.bgActive;
    if (value == 0) {
        if (active != 0) {
            g_gameState.bgActive = 0;
            commonBgReset();
            FUN_002757a8();
        }
    } else if (active == 0) {
        g_gameState.bgActive = 1;
        FUN_00275bc8();
        FUN_00289880();
        buttonHelpSetPreset(0x90);
    }
    return 1;
}

} /* extern "C" */
