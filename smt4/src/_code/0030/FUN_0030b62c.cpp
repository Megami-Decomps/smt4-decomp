#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleSelection {
    /* 0x00 */ u8 unk00[0xd4];
    /* 0xd4 */ s8 value;
};
extern "C" {
s32 scrGetArg(u32 index);
BattleSelection *FUN_0027da30(void *battle, s32 id);
void scrSetResult(s32 result);
/* Returns the selected battle entry's value to the script. */
s32 FUN_0030b62c()
{
    s32 id = scrGetArg(0);
    BattleSelection *entry = FUN_0027da30(static_cast<void *>(btlGetMainState()), id);
    scrSetResult(entry->value);
    return 1;
}
}
