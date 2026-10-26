/* NON_MATCHING: the 64-bit flag mask uses different registers from retail. */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
void scrSetResult(s32);

// Return whether the selected battle script flag is set.
u32 FUN_00380504(void)
{
    u32 index = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    s32 mask = 1 << index;
    scrSetResult(((s64)mask & battle->scriptFlags) != 0);
    return 1;
}
}
