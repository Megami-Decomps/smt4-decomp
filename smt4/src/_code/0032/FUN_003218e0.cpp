#include "gamedata/DataTable.h"

/* A table 0x2F section 1 entry, keyed by its first word. */
struct Table2fSub1Entry {
    /* 0x00 */ s32 id;        /* -1 ends the list */
    /* 0x04 */ u8 unk04[0x14];
};

extern "C" {

/* Entry `index` of the section, or NULL past its end. */
static Table2fSub1Entry *tableEntry(void *section, u32 index)
{
    Table2fSub1Entry *entries = static_cast<Table2fSub1Entry *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

/* The index of the table 0x2F section 1 entry whose id is `id`; -1 when the -1 terminator or the end comes first. */
s32 FUN_003218e0(s32 id)
{
    s32 index;

    for (index = 0; index < (s32)dataTableGetCount(dataTableGet(0x2f, 1)); index++) {
        Table2fSub1Entry *entry = tableEntry(dataTableGet(0x2f, 1), index);

        if (entry->id == -1) {
            break;
        }
        if (entry->id == id) {
            return index;
        }
    }
    return -1;
}

} /* extern "C" */
