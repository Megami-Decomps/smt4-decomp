#include "common.h"
#include "game/GameState.h"


extern "C" {


s32 scrGetArg(u32 index);
void commonBgReset(void);
void FUN_002757a8(void);
void FUN_00275bc8(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32 preset);

/* Script command (called with r0 = 0, which reaches scrGetArg unchanged): switches the common background on (arg != 0) or off (arg == 0), only when it changes. */
s32 FUN_002fe960(void)
{
    u8 active;
    s32 value = scrGetArg(0);

    active = g_gameState.map.bgResetPending;
    if (value == 0) {
        if (active != 0) {
            g_gameState.map.bgResetPending = 0;
            commonBgReset();
            FUN_002757a8();
        }
    } else if (active == 0) {
        g_gameState.map.bgResetPending = 1;
        FUN_00275bc8();
        commonBgStopChildAndBeginTransition();
        buttonHelpSetPreset(0x90);
    }
    return 1;
}

} /* extern "C" */
