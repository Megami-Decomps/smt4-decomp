#include "common.h"
#include "gamedata/EncountData.h"
#include "gamedata/NkmEnemyLookup.h"


extern "C" {

u32 dataTable02RecordHasFlaggedLink(s32 index)
{
    const EncountGroupRecordA *record = dataTable02GetRecordWithAocPackage(index);
    if (record != NULL) {
        for (s32 slot = 0; slot < 6; ++slot) {
            u16 id = record->enemyIds[slot];
            if (id != 0) {
                const NkmEnemyRecordA *entry = nkmEnemyFindById(id);
                if (entry != NULL && (entry->level & 0x8000) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
