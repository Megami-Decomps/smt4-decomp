#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

u32 dataTableFileGetTable(void *file, u32 index); // declcheck: local (the shared declaration's types change this unit)
BattleMotionSelection *dataTableGetEntries(void); // declcheck: local (the table stays in r0 from the lookup)
s32 dataTableGetCount(u32 table);

/* Finds the motion selection of the unit `id` in the motion file's table 0 (NULL when absent). */
BattleMotionSelection *btlMotionFindSelection(BtlMainStateA *battle, s32 id)
{
    if (battle->motionTable.file == NULL) {
        return NULL;
    }
    u32 table = dataTableFileGetTable(battle->motionTable.file, 0);
    BattleMotionSelection *entries = dataTableGetEntries();
    s32 count = dataTableGetCount(table);
    s32 i = 0;
    while (i < count) {
        BattleMotionSelection *record = &entries[i];
        if (record->id == id) {
            return record;
        }
        i++;
    }
    return NULL;
}

} /* extern "C" */
