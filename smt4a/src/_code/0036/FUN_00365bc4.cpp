/* NON_MATCHING: empty-table branch targets a different zero-return path instead of retail's direct epilogue; all other instructions agree. */
#include "gamedata/DataTable.h"

struct Table67Record {
    s32 id;
    u8 data[0x60];
};

/* Find the first record with the requested ID in table 67's second section. */
extern "C" Table67Record *FUN_00365bc4(s32 id)
{
    void *table = dataTableGet(67, 1);
    Table67Record *entries = (Table67Record *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}
