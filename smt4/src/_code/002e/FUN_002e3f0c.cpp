#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

struct BattleMainStateView {
    u8 unk00[0x1fc6];
    s16 value;
};

extern "C" {

/* Script command: sets the result to the halfword at 0x1fc6 of the main battle state. */
s32 FUN_002e3f0c(void)
{
    scrSetResult(reinterpret_cast<BattleMainStateView *>(btlGetMainState())->value);
    return 1;
}
}
