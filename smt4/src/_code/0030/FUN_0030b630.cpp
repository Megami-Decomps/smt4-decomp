#include "common.h"

struct BattleSelection {
    /* 0x00 */ u8 unk00[0xd4];
    /* 0xd4 */ s8 value;
};
extern "C" {
s32 scrGetArg();
void *btlGetMainState();
BattleSelection *FUN_0027da30(void *battle, s32 id);
void scrSetResult(s32 result);
/* Returns the selected battle entry's value to the script. */
s32 FUN_0030b630()
{
    s32 id = scrGetArg();
    BattleSelection *entry = FUN_0027da30(btlGetMainState(), id);
    scrSetResult(entry->value);
    return 1;
}
}
