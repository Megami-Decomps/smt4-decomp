/* NON_MATCHING: retail tests the flag with `tst` and conditionally moves 0/1; armcc builds `mov r1, #1; bic r0, r1, r0, lsr #18`. */
#include "common.h"

struct BattleMainStateView {
    u8 unk00[0x10c];
    u32 flags;
};

extern "C" {
BattleMainStateView *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: sets the result to whether bit 18 of the main battle state's flags at 0x10c is clear. */
s32 FUN_00373da4(void)
{
    scrSetResult((btlGetMainState()->flags & 0x40000) == 0);
    return 1;
}
}
