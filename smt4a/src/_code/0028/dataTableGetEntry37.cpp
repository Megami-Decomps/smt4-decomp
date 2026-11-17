#include "gamedata/PlayLogTable.h"

extern "C" {

/* Returns play log row `index` (PlayLogTable.tbb), or NULL when the index is out of range. */
PlayLogRecord *dataTableGetEntry37(u32 index)
{
    void *table;
    PlayLogRecord *entries;
    u32 count;

    table = dataTableGet(0x37, 0);
    entries = static_cast<PlayLogRecord *>(dataTableGetEntries(table));
    count = dataTableGetCount(table);
    if (index >= count) {
        entries = NULL;
    } else {
        entries = entries + index;
    }
    return entries;
}

} /* extern "C" */
