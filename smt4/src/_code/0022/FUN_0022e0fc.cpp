/* NON_MATCHING: saved collection/mode registers are swapped (retail: collection r4, mode r5 moved after the guard). */
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {
extern const EntryComparator DAT_00402284[34];
void FUN_002b7bca(void *, u32, u32, EntryComparator);

void FUN_0022e0fc(EntryCollection *collection, s32 mode)
{
    if (collection->sortMode != mode && collection->count > 1) {
        s32 count = collection->count;
        collection->sortMode = mode;
        EntryComparator comparators[34];
        __aeabi_memcpy4(comparators, DAT_00402284, sizeof(comparators));
        FUN_002b7bca(collection->entries, count, sizeof(CollectionEntry), comparators[mode]);
    }
}
}
