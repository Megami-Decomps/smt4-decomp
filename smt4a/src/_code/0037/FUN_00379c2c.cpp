#include "script/ScriptArgs.h"

extern "C" {

s32 inputFastForwardActive(void);
s32 eventIsSkipping(void);
void screenFadeSlotReset(u32 channel);
void titleSetSlotValueState2(u32 channel, s32 steps);

// Script command: fade channel 0, 1 or both (steps clamped to 4 while inputFastForwardActive is true).
u32 FUN_00379c2c(void)
{
    s32 steps = scrGetArg(1);
    if (inputFastForwardActive() != 0 && steps > 4) {
        steps = 4;
    }
    s32 mode = scrGetArg(0);
    if (mode == 0 || mode == 1) {
        if (eventIsSkipping() != 0) {
            screenFadeSlotReset(0);
            screenFadeSlotReset(1);
        } else {
            titleSetSlotValueState2(0, steps);
            titleSetSlotValueState2(1, steps);
        }
    }
    return 1;
}

} /* extern "C" */
