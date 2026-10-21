#include "shard/S1AsdTexTable.h"

extern "C" {
TexTableEntry *asdTMTexTableCallFileB(void);
TexTableEntry *FUN_002a6114(TexTableEntry *entry, u32 mode);

/* Gets the current texture entry and starts its asynchronous load. */
TexTableEntry *asdTMTexTableLoadEntryAsync(void)
{
    return FUN_002a6114(asdTMTexTableCallFileB(), 0x10000);
}
}
