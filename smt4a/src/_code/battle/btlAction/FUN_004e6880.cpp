/* NON_MATCHING: 12 lines: retail keeps the random index in r3 across btlUnitGet (same multifile partner as sibling btlActionMarkRandomStatusTarget) and schedules 1u << status after loading g_btlTargetableMask. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlGlobals.h"
#include "util/Random.h"

extern "C" {
extern u64 g_btlTargetableMask;
s16 btlAiFilterCandidatesByExclusionChance(BtlMainStateA **context, s32 *candidates, s32 count, u32 mode);

/* Chooses one eligible combatant matching the requested ailment group and marks it selected. */
void FUN_004e6880(BtlMainStateA **context, u32 status)
{
    s32 candidates[109];
    s32 count = 0;
    for (s32 index = 0; index < 109; ++index) {
        if (((*context)->entries[index].flags & g_btlTargetableMask) != 0) {
            switch (status) {
            case 22:
                if (((*context)->entries[index].data.statusFlags & 0x3BE0) != 0)
                    candidates[count++] = (*context)->entries[index].selectionIndex;
                break;
            case 28:
                if (((*context)->entries[index].data.statusFlags & 0x39C0) != 0)
                    candidates[count++] = (*context)->entries[index].selectionIndex;
                break;
            case 31:
                if (((*context)->entries[index].data.statusFlags & 0x220) != 0)
                    candidates[count++] = (*context)->entries[index].selectionIndex;
                break;
            default:
                if (((*context)->entries[index].data.statusFlags & (1u << status)) != 0)
                    candidates[count++] = (*context)->entries[index].selectionIndex;
                break;
            }
        }
    }
    s16 eligibleCount = btlAiFilterCandidatesByExclusionChance(context, candidates, count, 1);
    u32 chosen = lcgRandomRange((u16)(eligibleCount - 1));
    btlUnitGet(context)->targets[candidates[chosen]] = 1;
}
}
