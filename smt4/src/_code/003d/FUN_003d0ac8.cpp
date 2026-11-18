/* NON_MATCHING: retail keeps the queue kind 4 in fp across the loop and reads the action status with add + ldr #80; the build keeps 80 in fp for a register-offset load. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 FUN_00229914(BtlMainState **, void *, s32);
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
        if (((*state)->actions[i].status & 1) != 0 && ((*state)->actions[i].status & 0x80) != 0 &&
            i != subject &&
            valueRangeSameSide(i, subject)) {
            BtlEntry *candidate = btlMainFindEntryByListedId(*state, i);
            if ((candidate->data.statusFlags & 0x1C0) == 0) {
                u16 skill = btlEntryRollPassiveSkill(i);
                if (skill != 0) {
                    FUN_0023c154(*state, 4, (*state)->actions[i].participant.combatantIndex,
                        (*state)->actions[target].participant.combatantIndex, skill);
                    queued = 1;
                }
            }
        }
    }
    return queued;
}
}
