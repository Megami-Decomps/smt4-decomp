#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleEntrySummary.h"
#include "battle/BtlMainAccess.h"

extern "C" {
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, u32 listedId);
void FUN_00247478(BattleEntrySummary* summary, BtlMainState* state, const BtlEntry* entry);

// Return the selected entry's summary percentage as a unit-scale float.
f32 btlEntryGetSummaryRatio(u32 listedId)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    return (f32)summary.ratios.percentage * 0.01f;
}
}
