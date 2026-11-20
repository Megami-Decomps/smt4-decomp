#include "common.h"
#include "camp/Unite/UniteEffect.h"
#include "clear_save/clearSave.h"

extern "C" {

s32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);
s32 eventIsSkipping(void);
void titleSetSlotValueState2(s32 mode, u32 value);

/* Script command: fades screen fader 0 out (1 to 0) over argument 0 frames and waits until it has
 * settled; while an event is being skipped it starts nothing and resets the fader instead.
 * Returns 1 when done, 0 to be called again next frame. */
u32 scrCommScreenFaderOut(void)
{
    if (scrGetCommandFrame() == 0) {
        if (eventIsSkipping() != 0) {
            return 1;
        }
        titleSetSlotValueState2(0, scrGetArg(0));
        return 0;
    }
    if (eventIsSkipping() == 0) {
        return screenFaderIsSettled(0) != 0;
    }
    screenFadeSlotReset(0);
    return 1;
}

} /* extern "C" */
