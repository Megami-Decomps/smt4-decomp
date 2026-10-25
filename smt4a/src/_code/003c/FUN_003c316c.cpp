/* Finds the entry with the given id in the table's entry list; NULL if there is none. */
#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s16 id;
    /* 0x0E */ u8 unk0E[2];
} Entry; /* 0x10 */

extern Entry *dataTableGetEntries(void *table);

Entry *FUN_003c316c(s32 id)
{
    s32 i = 0;
    s32 count = dataTableGetCount(dataTableGetSection(41, 6));

    for (; i < count; i++) {
        void *table = dataTableGet(41, 6);
        Entry *entries = dataTableGetEntries(table);
        u32 entryCount = dataTableGetCount(table);

        if (i < entryCount) {
            Entry *entry = &entries[i];

            if (entry != NULL && entry->id == id) {
                return entry;
            }
        }
    }
    return NULL;
}

}
