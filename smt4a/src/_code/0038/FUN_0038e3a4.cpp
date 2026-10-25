#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleMainStateView {
    u8 unk00[0x2350];
    s32 value;
};

extern "C" {
s32 scrGetArg(u32 index);

/* Script command: stores its first argument in the word at 0x2350 of the main battle state. */
s32 FUN_0038e3a4(void)
{
    s32 value = scrGetArg(0);
    reinterpret_cast<BattleMainStateView *>(btlGetMainState())->value = value;
    return 1;
}
}
