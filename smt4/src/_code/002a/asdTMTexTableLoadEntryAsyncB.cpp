#include "shard/S1AsdTexTable.h"

extern "C" {

TexTableNamedEntry *asdTMTexTableCallFileB(void);
TexTableNamedEntry *texTableEntryStartLoad(TexTableNamedEntry *entry, u32 mode);

/* Start loading the entry's file in mode 0x30000. */
TexTableNamedEntry *asdTMTexTableLoadEntryAsyncB(void)
{
    return texTableEntryStartLoad(asdTMTexTableCallFileB(), 0x30000);
}

} /* extern "C" */
