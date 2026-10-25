#include "shard/W5_W5Match7_BattleMask.h"
#include "bible/bibleAnalyze.h"

extern "C" {

extern u64 DAT_00570dd8;
extern u32 g_btlUiBlock;

s32 scrCommApplyBattleHandleMask(void)
{
    FUN_004aa8b0(reinterpret_cast<void *>(g_btlUiBlock), 1);
    btlGetMainState()->mask |= DAT_00570dd8;
    return 1;
}

} /* extern "C" */
