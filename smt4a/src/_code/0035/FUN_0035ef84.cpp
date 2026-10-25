#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleMainStateView {
    u8 unk00[0x2002];
    s16 value;
};

extern "C" {
void scrSetResult(s32 result);

/* Script command: sets the result to the halfword at 0x2002 of the main battle state. */
s32 FUN_0035ef84(void)
{
    scrSetResult(reinterpret_cast<BattleMainStateView *>(btlGetMainState())->value);
    return 1;
}
}
