#include "shard/W4_Match6_BtlEntry.h"
#include "battle/BtlFlagWord.h"
#include "util/CalleeContracts.h"

extern "C" {

BtlMainState *btlGetMainState();
extern void *g_btlUiBlock;

/* Enables the battle feature and records its active flag. */
s32 scrCommBattleEnableFeature(void)
{
    FUN_00242914(g_btlUiBlock, 1);
    return btlFlagWordSet(&btlGetMainState()->battleFlags, 0x20000000);
}
}
