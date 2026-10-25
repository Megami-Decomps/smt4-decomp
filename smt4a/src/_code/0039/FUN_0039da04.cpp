#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleStateWord {
    /* 0x00 */ u8 unk00[0x4ccc];
    /* 0x4ccc */ s32 value;
};

extern "C" {

void scrSetResult(s32 result);

/* Script command: reports the battle state's word at 0x4ccc. */
u32 FUN_0039da04(void)
{
    scrSetResult(reinterpret_cast<BattleStateWord *>(btlGetMainState())->value);
    return 1;
}

} /* extern "C" */
