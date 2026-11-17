#include "gamedata/DataTable.h"
#include "gamedata/SpriteTemplatePreferredDevil.h"
#include "addon/AocSystem.h"
#include "gamedata/NkmEnemyLookup.h"

/* Table 2 section 2 record: the six candidate demon ids it offers. */
struct SpriteTemplateRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 ids[6];
    /* 0x18 */ u8 unk18[4];
};

extern "C" {
SpriteTemplateRecord *aocFindSpriteTemplateByKey(AocSystem *system, u32 index);

/* Same as dataTable02GetEntryByIndex: the add-on record for a valid index, else the table 2 section 2 record. */
static SpriteTemplateRecord *spriteTemplateGet(s32 index)
{
    void *section = dataTableGet(2, 2);
    SpriteTemplateRecord *entries = (SpriteTemplateRecord *)dataTableGetEntries(section);
    if (index >= 0 && (u32)index < dataTableGetCount(section)) {
        SpriteTemplateRecord *download = aocFindSpriteTemplateByKey(g_aocSystem, index);
        if (download != NULL) {
            entries = download;
        } else {
            entries = &entries[index];
        }
    }
    return entries;
}

/* Returns the first preferred demon id of template `index`, else its highest-ranked one (0 when none). */
u32 spriteTemplateGetPreferredDevilId(s32 index)
{
    SpriteTemplateRecord *record = spriteTemplateGet(index);
    if (record == NULL) {
        return 0;
    }
    u16 best = 0;
    for (s32 i = 0; i < 6; i++) {
        u16 id = record->ids[i];
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
