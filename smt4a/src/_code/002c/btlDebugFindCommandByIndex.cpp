#include "battle/BtlDebugMenuEntry.h"
#include "gamedata/DataTable.h"
#include "util/BinarySearch.h"

extern "C" {

/* Looks up a command in table 22's player or reserve section by its leading byte key. */
BtlDebugEntry *btlDebugFindCommandByIndex(u8 index, s32 protagonist)
{
    void *section;
    if (protagonist != 0) {
        section = dataTableGet(0x16, 0);
    } else {
        section = dataTableGet(0x16, 1);
    }
    void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    BtlDebugEntry key;
    key.kind = index; /* The comparator reads only the leading byte of each record. */
    return (BtlDebugEntry *)libc_bsearch(&key, entries, count, sizeof(key), dataSet16CompareByteKeys);
}

} /* extern "C" */
