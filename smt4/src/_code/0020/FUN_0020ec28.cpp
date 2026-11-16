#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 FUN_002c1d5c(void);
void titleSetSlotValueState2(s32 index, s32 value);

/* Script wait: returns 1 while the condition is still pending. After the first frame it waits for FUN_002b89a4 twice; on the first frame it
 * starts the effect (titleSetSlotValueState2 for both indices) unless FUN_002c1d5c holds or script argument 0 is neither 0 nor 1. */
u32 FUN_0020ec28(void)
{
    s32 value = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        if (FUN_002c1d5c() != 0)
            return 1;
        s32 mode = scrGetArg(0);
        if (mode != 0 && mode != 1)
            return 1;
        titleSetSlotValueState2(0, value);
        titleSetSlotValueState2(1, value);
    } else if (FUN_002b89a4(0) != 0 && FUN_002b89a4(0) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
