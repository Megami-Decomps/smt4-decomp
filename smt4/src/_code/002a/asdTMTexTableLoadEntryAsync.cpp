#include "shard/S1AsdTexTable.h"

extern "C" {
TexTableEntry *asdTMTexTableCallFileB(s32 table, s32 index);
TexTableEntry *FUN_002a6114(TexTableEntry *entry, u32 mode);

/* Gets texture table entry `index` of `table` and starts its asynchronous load. */
TexTableEntry *asdTMTexTableLoadEntryAsync(s32 table, s32 index)
{
    return FUN_002a6114(asdTMTexTableCallFileB(table, index), 0x10000);
}
}
