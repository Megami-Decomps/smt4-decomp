/* NON_MATCHING: Combatant base reuse, flag loads, saved registers, and ailment-branch placement differ. */
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnit.h"

extern "C" {
extern u64 g_btlTargetableMask;
u32 lcgRandomRange(u16 maximum);
u16 FUN_004e9ae8(BtlMainStateA **context, s32 *candidates, s32 count, u32 mode);

/* Chooses one eligible combatant matching the requested ailment group and marks it selected. */
void FUN_004e6880(BtlMainStateA **context, u32 status)
{
    s32 candidates[109];
    s32 count = 0;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &(*context)->entries[index];
        if ((entry->flags & g_btlTargetableMask) != 0) {
            if (status != 22) {
                if (status != 28) {
                    u16 flags = entry->statusFlags;
                    if (status != 31) {
                        if ((flags & (1U << status)) != 0) {
                            candidates[count++] = entry->indexView.selectionIndex;
                        }
                    } else if ((flags & 0x220) != 0) {
                        candidates[count++] = entry->indexView.selectionIndex;
                    }
                } else if ((entry->statusFlags & 0x39C0) != 0) {
                    candidates[count++] = entry->indexView.selectionIndex;
                }
            } else if ((entry->statusFlags & 0x3BE0) != 0) {
                candidates[count++] = entry->indexView.selectionIndex;
            }
        }
    }
    u16 eligibleCount = FUN_004e9ae8(context, candidates, count, 1);
    u32 chosen = lcgRandomRange((u16)(eligibleCount - 1));
    BattleActionUnit *unit = reinterpret_cast<BattleActionUnit *>(btlUnitGet(context));
    unit->selectedUnits[candidates[chosen]] = 1;
}
}
