/* NON_MATCHING: retail writes discarded first-pass candidate IDs before rebuilding the list; dead writes omitted. Retail also keeps the random index in R3 across the known leaf btlUnitGet call. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleCandidateValueView {
    u8 unk00[0x6e];
    s16 target;
    u8 unk70[0x20a];
    u16 priority;
};
struct BattleActionTargetMaskView {
    u8 unk00[0x58];
    u64 eligible;
};
struct BattleTargetMarksView {
    u8 unk00[0x38];
    u8 selected[109];
};
struct BattleUnit;
extern "C" {
extern BtlActionGlobals g_btlAction;
s32 FUN_004e9ae8(BtlMainStateA *const *main, s32 *ids, s32 count, s32 forced);
void FUN_004e5b5c(BtlMainStateA *const *main);
s32 lcgRandomRange(u16 maximum);
BattleUnit *btlUnitGet(BtlMainStateA *const *main);

void btlSelectMinimumPriorityTarget(BtlMainStateA *const *main)
{
    const u64 eligible = ((const BattleActionTargetMaskView *)&g_btlAction)->eligible;
    s32 minimum = 10000;
    const BtlCombatantEntryA *units = (*main)->entries;
    for (s32 i = 0; i < 109; ++i) {
        const BattleCandidateValueView *value = (const BattleCandidateValueView *)&units[i];
        if ((units[i].flags & eligible) != 0 && value->priority < minimum) {
            minimum = value->priority;
        }
    }
    s32 ids[109];
    s32 count = 0;
    units = (*main)->entries;
    for (s32 i = 0; i < 109; ++i) {
        const BattleCandidateValueView *value = (const BattleCandidateValueView *)&units[i];
        if ((units[i].flags & eligible) != 0 && value->priority == minimum) {
            ids[count++] = value->target;
        }
    }
    count = FUN_004e9ae8(main, ids, count, 1);
    if (count == 0) {
        FUN_004e5b5c(main);
        return;
    }
    s32 index = lcgRandomRange((u16)(count - 1));
    BattleTargetMarksView *marks = (BattleTargetMarksView *)btlUnitGet(main);
    marks->selected[ids[index]] = 1;
}
}
