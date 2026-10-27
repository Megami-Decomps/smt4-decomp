#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BtlStatusAilments.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleRateAnalysis {
    u32 unk00[12];
    u16 percent; // 0x30
    u16 unk32;
};
extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, u32 id);
void FUN_003e8bb0(BattleRateAnalysis *analysis, BtlMainStateA *battle, BtlCombatantEntryA *source);

// Use the source's analyzed percentage for affected target statuses, otherwise return full rate.
f32 btlCalcAilmentRateScale(u32 sourceId, u32 targetId)
{
    f32 rate = 1.0f;
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *source = FUN_003f0e20(battle, sourceId);
    if (source) {
        BtlCombatantEntryA *target = FUN_003f0e20(battle, targetId);
        if (target) {
            BattleRateAnalysis analysis;
            FUN_003e8bb0(&analysis, battle, source);
            u16 percent = analysis.percent;
            if (percent && statusFlagsHaveAilment(target->statusFlags))
                return (f32)percent * 0.01f;
        }
    }
    return rate;
}
}
