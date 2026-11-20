#include "common.h"
#include "camp/Unite/UniteEffect.h"

extern "C" {
u32 screenFadeSlotReset(s32 mode);
s32 scrGetArg(u32 index);
u32 titleSetSlotValueState2(s32 channel, s32 duration);
s32 eventIsSkipping(void);
s32 inputFastForwardActive(void);
s32 scrGetCommandFrame(void);

// Start the requested channel transition on entry and wait for it to become idle.
u32 FUN_00314c8c(void)
{
    s32 duration = scrGetArg(1);
    if (inputFastForwardActive() != 0 && duration > 4) {
        duration = 4;
    }
    if (scrGetCommandFrame() == 0) {
        s32 channel = scrGetArg(0);
        if (channel != 0 && channel != 1) {
            return 1;
        }
        titleSetSlotValueState2(0, duration);
    } else {
        if (screenFaderIsSettled(0) != 0) {
            return 1;
        }
        if (eventIsSkipping() != 0) {
            screenFadeSlotReset(0);
        }
    }
    return 0;
}
}
