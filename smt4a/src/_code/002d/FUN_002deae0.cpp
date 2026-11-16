#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_00162ea4(void);
u32 FUN_00163e84(s32 slot);
void titleSetSlotValueState2(u32 slot, u32 value);

/* Script wait: returns 1 while the transition is still pending. On the first frame it starts both slot
 * transitions (the value capped at 4 when FUN_00203d74 holds) unless FUN_00162ea4 holds or argument 0
 * is neither 0 nor 1; later frames poll FUN_00163e84 twice. */
u32 FUN_002deae0(void)
{
    s32 value = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        if (FUN_00203d74() != 0 && value > 4)
            value = 4;
        if (FUN_00162ea4() != 0)
            return 1;
        s32 mode = scrGetArg(0);
        if (mode != 0 && mode != 1)
            return 1;
        titleSetSlotValueState2(0, value);
        titleSetSlotValueState2(1, value);
    } else if (FUN_00163e84(0) != 0 && FUN_00163e84(0) != 0) {
        return 1;
    }
    return 0;
}
}
