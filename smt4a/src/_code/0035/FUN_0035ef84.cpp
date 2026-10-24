#include "common.h"

struct BattleMainStateView {
    u8 unk00[0x2002];
    s16 value;
};

extern "C" {
BattleMainStateView *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: sets the result to the halfword at 0x2002 of the main battle state. */
s32 FUN_0035ef84(void)
{
    scrSetResult(btlGetMainState()->value);
    return 1;
}
}
