#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleMain;
struct BattleEntry;
struct BattleEntrySummaryA {
    u32 unk00[7]; // 0x00
    u8 unk1c;     // 0x1c
    u8 percentage; // 0x1d
    u8 unk1e[0x16]; // 0x1e
};

extern "C" {
BattleEntry* FUN_003f0e20(BattleMain* state, u32 listedId);
void FUN_003e8bb0(BattleEntrySummaryA* summary, BattleMain* state, const BattleEntry* entry);

// Return the selected entry's summary percentage as a unit-scale float.
f32 btlEntryGetSummaryRatio(u32 listedId)
{
    BattleEntry* entry = FUN_003f0e20(reinterpret_cast<BattleMain *>(btlGetMainState()), listedId);
    BattleEntrySummaryA summary;
    FUN_003e8bb0(&summary, reinterpret_cast<BattleMain *>(btlGetMainState()), entry);
    return (f32)summary.percentage * 0.01f;
}
}
