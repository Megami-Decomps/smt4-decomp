/* NON_MATCHING: the 64-bit flag mask uses different registers from retail. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
u32 scrGetArg(void);
void scrSetResult(s32);

// Return whether the selected battle script flag is set.
u32 FUN_00380504(void)
{
    u32 index = scrGetArg();
    BattleMaskState *battle = btlGetMainState();
    s32 mask = 1 << index;
    scrSetResult(((s64)mask & battle->scriptFlags) != 0);
    return 1;
}
}
