#include "common.h"
#include "gamedata/NkmSortIndex.h"

extern "C" {

typedef struct FoundEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 data[1];
} FoundEntry;

extern void *g_aocSystem;

extern FoundEntry *entryListFindById(void *system, u32 id);

/* Race `id`'s name: the AOC system's own, else NKMSortIndex.tbb's (the alternate name if `second`;
 * the table's first row when `id` is out of range). */
void *aocEntryDataById(u32 id, s32 second)
{
    FoundEntry *found = entryListFindById(g_aocSystem, id);
    void *section;
    NkmRaceNameRecord *entries;

    if (found != NULL) {
        return found->data;
    }
    section = dataTableGet(1, 0);
    entries = nkmRaceNameRecords(section);
    if (dataTableGetCount(section) <= id) {
        return entries;
    }
    if (second != 0) {
        return entries[id].alternateName;
    }
    return entries[id].name;
}

} /* extern "C" */
