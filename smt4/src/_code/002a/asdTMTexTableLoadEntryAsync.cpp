#include "shard/S1AsdTexTable.h"
#include "shard/W6_W6Match2_HelpResources.h"

extern "C" {
TexTableNamedEntry *asdTMTexTableCallFileB(s32 table, s32 index);
TexTableNamedEntry *texTableEntryStartLoad(TexTableNamedEntry *entry, u32 mode);

/* Gets texture table entry `index` of `table` and starts its asynchronous load. */
TexTableNamedEntry *asdTMTexTableLoadEntryAsync(s32 table, s32 index)
{
    return texTableEntryStartLoad(asdTMTexTableCallFileB(table, index), 0x10000);
}
}
