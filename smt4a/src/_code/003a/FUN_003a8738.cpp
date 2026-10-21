#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BtlMainStateA;

extern "C" {
u32 scrGetArg(u32);
void scrSetResult(s32);
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *);

u32 FUN_003a8738(u32 argumentIndex)
{
    s32 index = scrGetArg(argumentIndex);
    BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
    if (entry != NULL) {
        u16 encoded = entry->encodedStats.values[index];
        if ((encoded & 0xfc00) == 0 || (encoded >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
