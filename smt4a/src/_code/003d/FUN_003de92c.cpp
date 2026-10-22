#include "gamedata/DataTable.h"

/* A 12-byte record of data table 28, section 3. */
struct Table28Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[10];
};

extern "C" {

/* The table-28 section-3 record with the given id, or NULL. */
Table28Record *FUN_003de92c(u32 id)
{
    void *table = dataTableGet(28, 3);
    Table28Record *records = static_cast<Table28Record *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (records[i].id == id) {
            return &records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
