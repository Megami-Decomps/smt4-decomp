#include "common.h"

extern "C" {

u32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
s32 eventIsSkipping(void);
void screenFadeSlotReset(s32 arg);
s32 screenFaderIsSettled(s32 arg);
void slotSetRequest(s32 slot, s32 value, s32 arg);

/* Script command: fades screen fader 0 in (0 to 1) over argument 0 frames and waits until it has
 * settled; while an event is being skipped it starts nothing and resets the fader instead.
 * Returns 1 when done, 0 to be called again next frame. */
s32 scrCommScreenFaderIn(void)
{
    if (scrGetCommandFrame() == 0) {
        if (eventIsSkipping() != 0) {
            return 1;
        }
        slotSetRequest(0, scrGetArg(0), -1);
        return 0;
    }
    if (eventIsSkipping() != 0) {
        screenFadeSlotReset(0);
        return 1;
    }
    if (screenFaderIsSettled(0) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
