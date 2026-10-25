/* NON_MATCHING: compiler combines retail's separate status tests into one mask and does not preserve the default rate. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
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
f32 FUN_004bfc1c(u32 sourceId, u32 targetId)
{
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *source = FUN_003f0e20(battle, sourceId);
    if (source) {
        BtlCombatantEntryA *target = FUN_003f0e20(battle, targetId);
        if (target) {
            BattleRateAnalysis analysis;
            FUN_003e8bb0(&analysis, battle, source);
            if (analysis.percent) {
                u16 flags = target->statusFlags;
                if ((flags & 2) || (flags & 0x20) || (flags & 0x40) || (flags & 0x80) ||
                    (flags & 0x100) || (flags & 0x200) || (flags & 0x400) || (flags & 8) ||
                    (flags & 0x800) || (flags & 0x1000) || (flags & 0x2000))
                    return (f32)analysis.percent * 0.01f;
            }
        }
    }
    return 1.0f;
}
}
