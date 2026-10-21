/* NON_MATCHING: saved collection/mode registers are swapped, with the mode save moved before the guard. */
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {
extern const EntryComparator DAT_0052b5d4[34];
void qsort(void *, u32, u32, EntryComparator);

void FUN_004a84e8(EntryCollection *collection, s32 mode)
{
    if (collection->sortMode == mode)
        return;
    s32 count = collection->count;
    if (count <= 1)
        return;
    collection->sortMode = mode;
    EntryComparator comparators[34];
    rt_memcpy_w(comparators, DAT_0052b5d4, sizeof(comparators));
    qsort(collection->entries, count, sizeof(CollectionEntry), comparators[mode]);
}
}
