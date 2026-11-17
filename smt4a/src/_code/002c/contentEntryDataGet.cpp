#include "common.h"
#include "gamedata/NkmSortIndex.h"
#include "addon/AocSystemA.h"

extern "C" {

u8 *entryListFindById(AocSystemA *aoc, u32 id);

/* Race `id`'s name (add-on content first, else NKMSortIndex.tbb; `second` selects the alternate name). */
u8 *contentEntryDataGet(u32 id, s32 second)
{
    u8 *result = entryListFindById(g_aocSystem, id);
    void *table;
    NkmRaceNameRecordA *entries;
    u32 count;

    if (result != NULL) {
        return result + 2;
    }
    table = dataTableGet(1, 0);
    entries = nkmRaceNameRecordsA(table);
    count = dataTableGetCount(table);
    if (count > id) {
        result = (u8 *)entries[id].name;
        if (second != 0) {
            result = (u8 *)entries[id].alternateName;
        }
    } else {
        result = (u8 *)entries;
    }
    return result;
}

} /* extern "C" */
