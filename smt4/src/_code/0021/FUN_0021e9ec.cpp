#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 screenFaderIsSettled(u32 arg);
s32 eventIsSkipping(void);
void screenFadeSlotReset(s32 arg);
void titleSetSlotValueState2(s32 mode, u32 value);

/* Script command: on a fresh frame applies the argument when arg 0 selects mode 0 or 1; otherwise polls until done. */
u32 FUN_0021e9ec(void)
{
    u32 value = scrGetArg(1);

    if (scrGetCommandFrame() == 0) {
        u32 mode = scrGetArg(0);
        if (mode != 0 && mode != 1) {
            return 1;
        }
        titleSetSlotValueState2(0, value);
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

} /* extern "C" */
