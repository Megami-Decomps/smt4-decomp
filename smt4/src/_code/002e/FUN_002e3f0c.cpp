#include "common.h"

struct BattleMainStateView {
    u8 unk00[0x1fc6];
    s16 value;
};

extern "C" {
BattleMainStateView *btlGetMainState(void);
void scrSetResult(s32 result);

/* Script command: sets the result to the halfword at 0x1fc6 of the main battle state. */
s32 FUN_002e3f0c(void)
{
    scrSetResult(btlGetMainState()->value);
    return 1;
}
}
