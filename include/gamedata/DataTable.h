/* The game's data tables: dataTableGet(table, section) finds one section of a table; the entries and
 * their count are read from that section. */
#ifndef GAMEDATA_DATATABLE_H
#define GAMEDATA_DATATABLE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void *dataTableGet(int table, int section);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);

#ifdef __cplusplus
}

#include <stddef.h>

/* Snapshot a section's entry array/count and provide bounds-checked entry lookup. */
template <typename Entry>
class DataTableView {
public:
    DataTableView(int table, int section)
    {
        void *resource = dataTableGet(table, section);
        entries = static_cast<Entry *>(dataTableGetEntries(resource));
        count = dataTableGetCount(resource);
    }

    Entry *at(u32 index) const { return index < count ? &entries[index] : NULL; }

    /* 0x00 */ Entry *entries;
    /* 0x04 */ u32 count;
};

typedef char DataTableViewSizeCheck[sizeof(DataTableView<u32>) == 8 ? 1 : -1];
typedef char DataTableViewCountOffsetCheck[offsetof(DataTableView<u32>, count) == 4 ? 1 : -1];
#endif

#endif
