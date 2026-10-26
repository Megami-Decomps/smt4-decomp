#include "shard/S1AsdTexTable.h"

extern "C" {

TexTableNamedEntry *asdTMTexTableCallFileB(void);
TexTableNamedEntry *FUN_002a6114(TexTableNamedEntry *entry, u32 mode);

/* Start loading the entry's file in mode 0x30000. */
TexTableNamedEntry *asdTMTexTableLoadEntryAsyncB(void)
{
    return FUN_002a6114(asdTMTexTableCallFileB(), 0x30000);
}

} /* extern "C" */
