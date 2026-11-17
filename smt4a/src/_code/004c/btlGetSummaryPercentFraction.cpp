#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

struct BattlePercentSummary {
    /* 0x00 */ u32 unk00[7];
    /* 0x1C */ u16 unk1c;
    /* 0x1E */ u8 percent;
    /* 0x1F */ u8 unk1f;
    /* 0x20 */ u32 unk20[5];
};

extern "C" {
void btlEntryBuildSummary(BattlePercentSummary* summary, BtlMainStateA* state,
                  const BtlCombatantEntryA* entry);

// Return the combatant summary's byte percentage as a fractional float.
f32 btlGetSummaryPercentFraction(s32 index)
{
    BtlCombatantEntryA* entry = btlMainFindEntryByListedId(btlGetMainState(), index);
    BattlePercentSummary summary;
    btlEntryBuildSummary(&summary, btlGetMainState(), entry);
    return (f32)summary.percent * 0.01f;
}
}
