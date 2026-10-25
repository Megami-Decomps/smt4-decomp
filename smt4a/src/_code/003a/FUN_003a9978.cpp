#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleStateWord {
    /* 0x00 */ u8 unk00[0x4c80];
    /* 0x4c80 */ s32 value;
};

extern "C" {

s32 scrGetArg(s32 index);

/* Script command: stores the first argument in the battle state's word at 0x4c80. */
u32 FUN_003a9978(void)
{
    reinterpret_cast<BattleStateWord *>(btlGetMainState())->value = scrGetArg(0);
    return 1;
}

} /* extern "C" */
