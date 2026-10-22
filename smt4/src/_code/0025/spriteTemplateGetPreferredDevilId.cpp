#include "gamedata/DataTable.h"

struct AocSystem;

/* Table 2 section 2 record: the six candidate demon ids it offers. */
struct SpriteTemplateRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 ids[6];
    /* 0x18 */ u8 unk18[4];
};

struct SpriteTemplateDevil {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 rank;
    /* 0x03 */ u8 flags; /* bit 0: preferred */
};

extern "C" {
extern AocSystem *g_aocSystem;
SpriteTemplateRecord *aocFindSpriteTemplateByKey(AocSystem *system, u32 index);
SpriteTemplateDevil *dataTable00FindById(u32 id);

/* Same as dataTable02GetEntryByIndex: the add-on record for a valid index, else the table 2 section 2 record. */
static __inline SpriteTemplateRecord *spriteTemplateGet(s32 index)
{
    void *section = dataTableGet(2, 2);
    SpriteTemplateRecord *entries = (SpriteTemplateRecord *)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    SpriteTemplateRecord *download = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (download != NULL) {
        entries = download;
    } else {
        entries = &entries[index];
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
    u32 best = 0;
    for (s32 i = 0; i < 6; i++) {
        u32 id = record->ids[i];
        if (id == 0) {
            continue;
        }
        SpriteTemplateDevil *devil = dataTable00FindById(id);
        if (devil == NULL) {
            continue;
        }
        if (devil->flags & 1) {
            return id;
        }
        if (best == 0 || devil->rank > dataTable00FindById(best)->rank) {
            best = id;
        }
    }
    return best;
}
}
