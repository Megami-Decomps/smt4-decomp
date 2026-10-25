#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleState;
struct BattleListedEntry {
    u8 unk00[0xae];
    s16 values[9]; // 0xae
};

extern "C" {
u32 scrGetArg(u32);
void scrSetResult(s32);
BattleListedEntry *btlMainFindEntryByListedId(BattleState *, u32);

u32 FUN_003001cc(void)
{
    u32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    BattleListedEntry *entry = btlMainFindEntryByListedId(reinterpret_cast<BattleState *>(btlGetMainState()), id);
    if (entry != NULL && index >= 0 && index < 9)
        scrSetResult(entry->values[index]);
    else
        scrSetResult(0);
    return 1;
}
}
