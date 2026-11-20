#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 eventIsSkipping(void);
u32 screenFaderIsSettled(s32 slot);
void titleSetSlotValueState2(u32 slot, u32 value);

/* Script wait: returns 1 while the transition is still pending. On the first frame it starts both slot
 * transitions (the value capped at 4 when inputFastForwardActive holds) unless eventIsSkipping holds or argument 0
 * is neither 0 nor 1; later frames poll screenFaderIsSettled twice. */
u32 FUN_002deae0(void)
{
    s32 value = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        if (inputFastForwardActive() != 0 && value > 4)
            value = 4;
        if (eventIsSkipping() != 0)
            return 1;
        s32 mode = scrGetArg(0);
        if (mode != 0 && mode != 1)
            return 1;
        titleSetSlotValueState2(0, value);
        titleSetSlotValueState2(1, value);
    } else if (screenFaderIsSettled(0) != 0 && screenFaderIsSettled(0) != 0) {
        return 1;
    }
    return 0;
}
}
