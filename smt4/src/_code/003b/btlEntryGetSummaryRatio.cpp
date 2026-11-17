#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleEntrySummary.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {
void btlEntryBuildSummary(BattleEntrySummary* summary, BtlMainState* state, const BtlEntry* entry);

// Return the selected entry's summary percentage as a unit-scale float.
f32 btlEntryGetSummaryRatio(u32 listedId)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    BattleEntrySummary summary;
    btlEntryBuildSummary(&summary, btlGetMainState(), entry);
    return (f32)summary.ratios.percentage * 0.01f;
}
}
