#include "battle/BtlMainAccess.h"
#include "battle/BtlUiGlobal.h"
#include "code/Code004a.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

/* Clears the entry-mask preset from the first combatant and resets the battle UI mode. */
u32 btlEntryClearPresetAndDisableUi()
{
    btlGetMainState()->entries->flags &= ~g_battleMaskPresets.presets.entryFlags;
    btlUiObjCApplyPreset(g_btlUiBlock, 0);
    return 1;
}

} /* extern "C" */
