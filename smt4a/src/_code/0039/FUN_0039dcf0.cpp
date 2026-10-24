#include "common.h"

struct BattleSelection {
    /* 0x00 */ u8 unk00[0xd4];
    /* 0xd4 */ s8 value;
};
extern "C" {
s32 scrGetArg(u32 index);
void *btlGetMainState();
BattleSelection *FUN_001568f8(void *battle, s32 id);
void scrSetResult(s32 result);
/* Returns the selected battle entry's value to the script. */
s32 FUN_0039dcf0()
{
    s32 id = scrGetArg(0);
    BattleSelection *entry = FUN_001568f8(btlGetMainState(), id);
    scrSetResult(entry->value);
    return 1;
}
}
