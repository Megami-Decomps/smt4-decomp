#include "common.h"

struct BattleMain;
struct BattleEntry;
struct BattleEntrySummary {
    u8 unk00[0x1e]; // 0x00
    u8 percentage;   // 0x1e
    u8 unk1f[3];    // 0x1f
};

extern "C" {
BattleMain* btlGetMainState();
BattleEntry* btlMainFindEntryByListedId(BattleMain* state, u32 listedId);
void FUN_00247478(BattleEntrySummary* summary, BattleMain* state, const BattleEntry* entry);

// Return the selected entry's summary percentage as a unit-scale float.
f32 btlEntryGetSummaryRatio(u32 listedId)
{
    BattleEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), listedId);
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    return (f32)summary.percentage * 0.01f;
}
}
