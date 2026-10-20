#include "shard/S1AsdTexTable.h"

extern "C" {

TexTableEntry *asdTMTexTableCallFileB(void);
TexTableEntry *FUN_002a6114(TexTableEntry *entry, u32 mode);

/* Start loading the entry's file in mode 0x30000. */
TexTableEntry *asdTMTexTableLoadEntryAsyncB(void)
{
    return FUN_002a6114(asdTMTexTableCallFileB(), 0x30000);
}

} /* extern "C" */
