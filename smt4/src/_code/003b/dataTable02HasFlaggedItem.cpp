#include "gamedata/EncountData.h"
#include "addon/AocSystem.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

// Prefer an add-on encounter group for a valid index, falling back to EncountData.tbb table 2.
static EncountGroupRecord *encountGroupGet(s32 index)
{
    void *section = dataTableGet(2, 2);
    EncountGroupRecord *entries = encountGroupRecords(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    EncountGroupRecord *entry = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (entry != NULL) {
        return entry;
    }
    return &entries[index];
}

// Whether any of the encounter group's six enemies has its enemy record's flag bit 0 set.
u32 dataTable02HasFlaggedItem(s32 index)
{
    EncountGroupRecord *entry = encountGroupGet(index);
    s32 i;

    if (entry != NULL) {
        for (i = 0; i < 6; i++) {
            u16 id = entry->enemyIds[i];
            if (id != 0) {
                NkmEnemyRecord *enemy = nkmEnemyFindById(id);
                if (enemy != NULL && (enemy->levelFlags & 1)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
