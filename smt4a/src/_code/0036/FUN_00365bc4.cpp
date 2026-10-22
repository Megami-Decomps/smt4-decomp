/* NON_MATCHING: empty-table branch goes through the final null result rather than directly returning the zero count. */
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
    if (count != 0) {
        for (s32 i = 0; (u32)i < count; ++i) {
            if (entries[i].id == id) {
                return &entries[i];
            }
        }
    }
    return NULL;
}
