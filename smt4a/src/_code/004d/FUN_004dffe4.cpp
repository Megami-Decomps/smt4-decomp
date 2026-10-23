/* NON_MATCHING: probabilistic target filtering register allocation differs from retail. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

namespace {
struct BattleTargetSelectionView {
    BtlMainStateA *battle;
};
}
extern "C" {
extern BtlActionGlobals g_btlAction;
s32 lcgRandomRange(u16 limit);
s32 FUN_004c5f90(s32 unitIndex);
void FUN_004e5b5c(BattleTargetSelectionView *context);
void FUN_004e6ed8(BattleTargetSelectionView *context, s32 mode);
void FUN_004e7d20(BattleTargetSelectionView *context, s32 count);

/* Probabilistically filter eligible combatants, then choose a one-, two- or three-target action. */
void FUN_004dffe4(BattleTargetSelectionView *context)
{
    s32 roll = lcgRandomRange(99);
    s32 remaining = 0;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &context->battle->entries[index];
        if ((entry->flags & g_btlAction.clearedFlags.mask) != 0) {
            s32 chance = FUN_004c5f90(entry->unitIndex);
            if (chance > 0 && lcgRandomRange(99) > chance)
                context->battle->entries[index].flags &= ~g_btlAction.clearedFlags.mask;
            else
                remaining++;
        }
    }
    if (remaining >= 3) {
        if (roll < 30) {
            FUN_004e7d20(context, 3);
            return;
        }
        if (roll < 65) {
            FUN_004e7d20(context, 2);
            return;
        }
    } else {
        if (remaining != 2) {
            FUN_004e5b5c(context);
            return;
        }
        if (roll < 40) {
            FUN_004e7d20(context, 2);
            return;
        }
    }
    FUN_004e6ed8(context, 0);
}
}
