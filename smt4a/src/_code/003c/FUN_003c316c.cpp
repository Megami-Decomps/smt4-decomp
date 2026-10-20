/* NON_MATCHING: instruction order only: in the loop retail loads the key's high word (r1) before the low word (r0) */
/* Finds the entry with the given id in the table's entry list; NULL if there is none. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s16 id;
    /* 0x0E */ u8 unk0E[2];
} Entry; /* 0x10 */

extern void *dataTableGet(u64 key);
extern u32 dataTableGetCount(void *table);
extern Entry *dataTableGetEntries(void *table);

Entry *FUN_003c316c(s32 id)
{
    s32 i = 0;
    s32 count = dataTableGetCount(dataTableGet(0x600000029ULL));

    for (; i < count; i++) {
        void *table = dataTableGet(0x600000029ULL);
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
