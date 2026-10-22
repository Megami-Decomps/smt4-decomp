#include "gamedata/DataTable.h"

/* A table2/section2 record; its six item ids sit at +0xC. */
struct Table02Sub2Entry {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u16 itemIds[6];
    /* 0x18 */ u8 unk18[4];
};
struct AocSystem;

/* A table0 record; bit 0 of byte 3 is the flag tested here. */
struct Table00Entry {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flags;
};

extern "C" {
extern AocSystem *g_aocSystem;
Table02Sub2Entry *aocFindSpriteTemplateByKey(AocSystem *system, u32 index);
Table00Entry *dataTable00FindById(u32 id);

// Prefer an add-on record for a valid index, falling back to table2/section2.
static Table02Sub2Entry *dataTable02GetEntryByIndex(s32 index)
{
    void *section = dataTableGet(2, 2);
    Table02Sub2Entry *entries = (Table02Sub2Entry *)dataTableGetEntries(section);
    if (index < 0 || (u32)index >= dataTableGetCount(section)) {
        return entries;
    }
    Table02Sub2Entry *entry = aocFindSpriteTemplateByKey(g_aocSystem, index);
    if (entry != NULL) {
        return entry;
    }
    return &entries[index];
}

// Whether any of the table2 record's six items is a table0 record with flag bit 0 set.
u32 dataTable02HasFlaggedItem(s32 index)
{
    Table02Sub2Entry *entry = dataTable02GetEntryByIndex(index);
    s32 i;

    if (entry != NULL) {
        for (i = 0; i < 6; i++) {
            u32 id = entry->itemIds[i];
            if (id != 0) {
                Table00Entry *item = dataTable00FindById(id);
                if (item != NULL && (item->flags & 1)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
