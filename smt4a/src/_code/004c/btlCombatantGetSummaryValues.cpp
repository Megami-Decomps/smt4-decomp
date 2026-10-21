#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct CombatantSummary {
    u16 unk00;
    u16 value; // 0x02
    s16 modifier; // 0x04
    u8 unk06[0x32];
};

extern "C" {
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 index);
void FUN_003e8bb0(CombatantSummary *summary, BtlMainStateA *battle, BtlCombatantEntryA *entry);

// Extract the unsigned value and signed modifier from a combatant's summary.
void btlCombatantGetSummaryValues(s32 index, u32 *value, s32 *modifier)
{
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003f0e20(battle, index);
    CombatantSummary summary;
    FUN_003e8bb0(&summary, btlGetMainState(), entry);
    *value = summary.value;
    *modifier = summary.modifier;
}
}
