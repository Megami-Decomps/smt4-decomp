#include "gamedata/EncountData.h"
#include "gamedata/SpriteTemplatePreferredDevil.h"
#include "addon/AocSystem.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* Same as dataTable02GetEntryByIndex: the add-on encounter group for a valid index, else EncountData.tbb's. */
static EncountGroupRecord *spriteTemplateGet(s32 index)
{
    void *section = dataTableGet(2, 2);
    EncountGroupRecord *entries = encountGroupRecords(section);
    if (index >= 0 && (u32)index < dataTableGetCount(section)) {
        EncountGroupRecord *download = aocFindSpriteTemplateByKey(g_aocSystem, index);
        if (download != NULL) {
            entries = download;
        } else {
            entries = &entries[index];
        }
    }
    return entries;
}

/* Returns the first flagged enemy id of encounter group `index`, else its highest-level one (0 when none). */
u32 spriteTemplateGetPreferredDevilId(s32 index)
{
    EncountGroupRecord *record = spriteTemplateGet(index);
    if (record == NULL) {
        return 0;
    }
    u16 best = 0;
    for (s32 i = 0; i < 6; i++) {
        u16 id = record->enemyIds[i];
        if (id == 0) {
            continue;
        }
        NkmEnemyRecord *devil = nkmEnemyFindById(id);
        if (devil == NULL) {
            continue;
        }
        if (devil->levelFlags & 1) {
            return id;
        }
        if (best == 0 || devil->level > nkmEnemyFindById(best)->level) {
            best = id;
        }
    }
    return best;
}
}
