#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

u32 dataTableFileGetTable(void *file); // declcheck: local (the kind stays in r1 for the lookup: the caller's second argument passes through)
BattleMotionSequence *dataTableGetEntries(void); // declcheck: local (the table stays in r0 from the lookup)
s32 dataTableGetCount(u32 table);

/* Finds the sequence of `motion` in the motion file's table `kind` (NULL when absent). */
BattleMotionSequence *btlMotionFindSequence(BtlMainStateA *battle, s32 kind, u32 motion)
{
    if (battle->motionTable.file == NULL) {
        return NULL;
    }
    u32 table = dataTableFileGetTable(battle->motionTable.file);
    BattleMotionSequence *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    s32 i = 0;
    while (i < count) {
        BattleMotionSequence *record = &entries[i];
        if (record->motion == motion) {
            return record;
        }
        i++;
    }
    return NULL;
}

} /* extern "C" */
