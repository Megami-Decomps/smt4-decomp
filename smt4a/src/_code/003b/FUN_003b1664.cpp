#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u64 DAT_00570de8;
u32 scrGetArg(u32);
void FUN_004c8c10(u32, u32, u32);

u32 FUN_003b1664(void)
{
    BtlMainStateA *battle = btlGetMainState();
    battle->stateFlags64.bits |= DAT_00570de8;
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    FUN_004c8c10(first, second, 1);
    return 1;
}
}
