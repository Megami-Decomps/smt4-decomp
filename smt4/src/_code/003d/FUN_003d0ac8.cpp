/* NON_MATCHING: action-record address hoisting and participant-index load scheduling differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {
u32 FUN_00229914(BtlMainState **, void *, s32);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, u32);
s32 valueRangeSameSide(s32, s32);
u16 btlEntryRollPassiveSkill(u32);
void FUN_0023c154(BtlMainState *, s32, s32, s32, u32);

/* Queue triggered passive responses from eligible allies of the listed subject. */
u32 FUN_003d0ac8(BtlMainState **state, void *copies, s32 subject, s32 target)
{
    if (FUN_00229914(state, copies, target) != 0) {
        return 0;
    }
    BtlEntry *entry = btlMainFindEntryByListedId(*state, subject);
    if ((entry->flags & 2) != 0 && questCurrentIsFlagged()) {
        return 0;
    }
    u32 queued = 0;
    for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
        u32 status = (*state)->actions[i].status;
        if ((status & 1) != 0 && (status & 0x80) != 0 && i != subject &&
            valueRangeSameSide(i, subject)) {
            BtlEntry *candidate = btlMainFindEntryByListedId(*state, i);
            if ((candidate->groupMask & 0x1C0) == 0) {
                u16 skill = btlEntryRollPassiveSkill(i);
                if (skill != 0) {
                    BtlActionRecord *records = (*state)->actions;
                    FUN_0023c154(*state, 4, records[i].participant.combatantIndex,
                        records[target].participant.combatantIndex, skill);
                    queued = 1;
                }
            }
        }
    }
    return queued;
}
}
