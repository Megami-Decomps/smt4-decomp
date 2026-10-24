/* NON_MATCHING: constant-mask load is scheduled after the battle flag pair load rather than before it. */
#include "common.h"

struct BattleFlagState {
    u8 unk0000[0x49d0];
    u64 flags; // 0x49d0
};

extern "C" {
u32 scrGetArg(u32 argument);
BattleFlagState *btlGetMainState(void);
void scrSetResult(s32 result);

// Return whether the selected battle flag is set to the script interpreter.
u32 FUN_002f78dc(u32 argument)
{
    u32 bit = scrGetArg(argument);
    u64 flags = btlGetMainState()->flags;
    scrSetResult((flags & (s64)(1 << bit)) != 0);
    return 1;
}
}
