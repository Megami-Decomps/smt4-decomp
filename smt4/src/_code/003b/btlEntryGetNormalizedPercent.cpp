#include "shard/W4_Match6_BtlEntry.h"

struct BattleEntrySummary {
    u8 unk00[0x1d]; // 0x00
    u8 percent;     // 0x1d
    u8 unk1e[4];    // 0x1e
};

extern "C" {
BtlMainState* btlGetMainState(void);
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, u32 id);
void FUN_00247478(BattleEntrySummary* result, BtlMainState* state, BtlEntry* entry);

// Converts the listed entry's summary percentage to a normalized scalar.
f32 btlEntryGetNormalizedPercent(u32 id)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    return static_cast<f32>(static_cast<u32>(summary.percent)) * 0.01f;
}
}
