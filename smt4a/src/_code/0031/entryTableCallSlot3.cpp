#include "common.h"
#include "shard/W4_Match1b_EntryTable.h"

extern "C" {

extern EntryTable DAT_005b3bc0;

/* Calls slot 3 of entry `index`'s object; 0 when the table is empty or the index is out of range. */
u32 entryTableCallSlot3(u32 index)
{
    EntryTableEntry *entry = entryTableGet(&DAT_005b3bc0, index);

    if (entry != NULL) {
        return entry->object->slot3();
    }
    return 0;
}

} /* extern "C" */
