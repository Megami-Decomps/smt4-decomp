#include "shard/W4_Match6_BtlEntry.h"

struct BattleEntrySummary {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 value;
    /* 0x04 */ s16 stat;
    /* 0x06 */ u8 unk06[0x22];
};

extern "C" {
BtlMainState* btlGetMainState(void);
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, u32 id);
void FUN_00247478(BattleEntrySummary* summary, BtlMainState* state, const BtlEntry* entry);

// Read the unsigned value and signed stat from a listed combatant's summary.
void btlGetListedSummaryValues(u32 id, u32* value, s32* stat)
{
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    BattleEntrySummary summary;
    FUN_00247478(&summary, btlGetMainState(), entry);
    *value = summary.value;
    *stat = summary.stat;
}
}
