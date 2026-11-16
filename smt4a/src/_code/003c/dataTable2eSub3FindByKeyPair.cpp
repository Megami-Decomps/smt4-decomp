#include "gamedata/DataTable.h"

/* A table 0x2E section 3 entry, keyed by two signed bytes. */
struct Table2eSub3Entry {
    /* 0x00 */ s8 first;
    /* 0x01 */ s8 second;
    /* 0x02 */ u8 unk02[0x12];
};

extern "C" {

/* Entry `index` of the section, or NULL past its end. */
static Table2eSub3Entry *tableEntry(void *section, u32 index)
{
    Table2eSub3Entry *entries = static_cast<Table2eSub3Entry *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

/* Finds the table 0x2E section 3 entry with the given key pair, or NULL. */
Table2eSub3Entry *dataTable2eSub3FindByKeyPair(s32 first, s32 second)
{
    for (s32 index = 0; index < (s32)dataTableGetCount(dataTableGet(0x2e, 3)); index++) {
        Table2eSub3Entry *entry = tableEntry(dataTableGet(0x2e, 3), index);
        if (entry->first == first && entry->second == second) {
            return entry;
        }
    }
    return NULL;
}

} /* extern "C" */
