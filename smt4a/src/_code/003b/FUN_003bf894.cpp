/* NON_MATCHING: the sentinel now shares the final not-found exit; retail caches the bounded accessor's null pointer in r8 while this source uses an immediate zero. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ s32 id;           /* -1 = end of list */
    /* 0x04 */ u8 unk04[0x1C];
} Entry;                          /* 0x20 bytes */

u32 dataTableGet(int kind, int arg);
Entry *dataTableGetEntries(void);
u32 dataTableGetCount(u32 handle);

static __inline Entry *entryAt(Entry *entries, u32 count, u32 index)
{
    return (index < count) ? &entries[index] : NULL;
}

/* Returns the index of the entry whose id equals `id`, or -1 if absent (the list ends at the first entry with id -1). */
int FUN_003bf894(int id)
{
    int i = 0;
    u32 handle = dataTableGet(0x2f, 1);

    if (0 < (int)dataTableGetCount(handle)) {
        do {
            Entry *entries;
            u32 count;
            Entry *entry;

            handle = dataTableGet(0x2f, 1);
            entries = dataTableGetEntries();
            count = dataTableGetCount(handle);
            entry = entryAt(entries, count, (u32)i);
            if (entry->id == -1) {
                break;
            }
            if (entry->id == id) {
                return i;
            }
            i++;
            handle = dataTableGet(0x2f, 1);
        } while (i < (int)dataTableGetCount(handle));
    }
    return -1;
}

} /* extern "C" */
