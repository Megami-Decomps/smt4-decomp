#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

#include "battle/BattleEntrySummary.h"
#include "battle/BtlMainAccess.h"

extern "C" {
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, u32 id);
void FUN_00247478(BattleEntrySummary* result, BtlMainState* state, const BtlEntry* entry);

// Converts the listed entry's summary percentage to a normalized scalar.
f32 btlEntryGetNormalizedPercent(u32 id)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    return static_cast<f32>(static_cast<u32>(summary.ratios.percent)) * 0.01f;
}
}
