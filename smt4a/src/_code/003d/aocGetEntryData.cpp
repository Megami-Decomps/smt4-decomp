#include "addon/aocMain.h"

extern "C" {

void dataTableGetCount(u32 value);
u8 *dataTableGetEntries(void);
u32 dataTableGet(u32 a, u32 b);

extern AocSystemA *g_aocSystem;

/* The data of the table entry with the given id; a fallback block when there is none. */
u8 *aocGetEntryData(s32 id)
{
    AocEntryA *entry = g_aocSystem->entries;
    u32 i;
    u32 value;
    u8 *fallback;

    if (entry != NULL) {
        for (i = 0; i < g_aocSystem->entryCount; i++) {
            if (entry->id == id) {
                return entry->data;
            }
            entry++;
        }
    }
    value = dataTableGet(0x1C, 1);
    fallback = dataTableGetEntries();
    dataTableGetCount(value);
    return fallback + id * 0x40;
}

} /* extern "C" */
