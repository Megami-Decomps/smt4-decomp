#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlFlagWord.h"
#include "code/Code0024.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlUiGlobal.h"

extern "C" {


/* Enables the battle feature and records its active flag. */
s32 scrCommBattleEnableFeature(void)
{
    btlUiObjCSetActive(g_btlUiBlock, 1);
    return btlFlagWordSet(&btlGetMainState()->battleFlags, 0x20000000);
}
}
