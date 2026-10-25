#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlFlagWord.h"
#include "battle/BtlMainAccess.h"

extern "C" {

/* Marks the battle command as active and returns script success. */
s32 scrCommBattleSetFlag44a4Bit0()
{
    u32 *flags = &btlGetMainState()->battleFlags;
    return btlFlagWordSet(&flags[1], 1);
}
}
