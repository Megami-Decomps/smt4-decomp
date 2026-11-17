#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlUiGlobal.h"
#include "code/Code004a.h"

extern "C" {

// Applies the entry-mask preset and enables the battle UI.
u32 btlEntryApplyPresetAndEnableUi(void)
{
    BtlCombatantEntryA *entries = btlGetMainState()->entries;
    entries->flags |= g_battleMaskPresets.presets.entryFlags;
    FUN_004ab7f4(g_btlUiBlock, 1);
    return 1;
}
}
