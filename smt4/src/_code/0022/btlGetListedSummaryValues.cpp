#include "battle/BtlEntry.h"
#include "battle/btlMain.h"

#include "battle/BattleEntrySummary.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {
void btlEntryBuildSummary(BattleEntrySummary* summary, BtlMainState* state, const BtlEntry* entry);

// Read the element and signed category from a listed combatant's summary.
void btlGetListedSummaryValues(u32 id, u32* value, s32* stat)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    BattleEntrySummary summary;
    btlEntryBuildSummary(&summary, btlGetMainState(), entry);
    *value = summary.element;
    *stat = summary.category;
}
}
