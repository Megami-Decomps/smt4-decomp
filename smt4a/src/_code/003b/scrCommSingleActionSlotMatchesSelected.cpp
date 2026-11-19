#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/btlScript.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {
// Report whether the single-action script unit matches the selected candidate.
u32 scrCommSingleActionSlotMatchesSelected(void)
{
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (hasSingleAction(g_btlCandidateMasks, *unit->entryView.entry) &&
        partySlotMatchesSelected(btlGetMainStateExt()->selectedSlot)) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
