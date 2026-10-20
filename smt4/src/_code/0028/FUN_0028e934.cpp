#include "common.h"

extern "C" {

/* One 0x28-byte table entry: two 16-byte halves, selected by the caller. */
typedef struct TableEntry {
    /* 0x00 */ u8 half[2][0x10];
    /* 0x20 */ u8 unk20[8];
} TableEntry;

typedef struct FoundEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 data[1];
} FoundEntry;

extern void *g_aocSystem;

extern FoundEntry *entryListFindById(void *system, u32 id);
extern void *dataTableGet(s32 table, s32 section);
extern TableEntry *dataTableGetEntries(void *section);
extern u32 dataTableGetCount(void *section);

/* The data of the entry for `id`: the AOC system's own, else the table's entry (second half if
 * `second`; the table's first entry when `id` is out of range). */
void *FUN_0028e934(u32 id, s32 second)
{
    FoundEntry *found = entryListFindById(g_aocSystem, id);
    void *section;
    TableEntry *entries;

    if (found != NULL) {
        return found->data;
    }
    section = dataTableGet(1, 0);
    entries = dataTableGetEntries(section);
    if (dataTableGetCount(section) <= id) {
        return entries;
    }
    if (second != 0) {
        return entries[id].half[1];
    }
    return entries[id].half[0];
}

} /* extern "C" */
