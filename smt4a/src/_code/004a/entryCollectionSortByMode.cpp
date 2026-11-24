#include "shard/W6_W6Match5_EntryCollection.h"
#include <stdlib.h>
#include <string.h>

extern "C" {
extern const EntryComparator g_entryCollectionComparators[34];
/* Sorts a nontrivial collection when its requested sort mode changes. */
void entryCollectionSortByMode(EntryCollection *collection, s8 mode)
{
    if (collection->sortMode != mode && collection->count > 1) {
        s32 count = collection->count;
        collection->sortMode = mode;
        EntryComparator comparators[34];
        memcpy(comparators, g_entryCollectionComparators, sizeof(comparators));
        qsort(collection->entries, count, sizeof(CollectionEntry), comparators[collection->sortMode]);
    }
}
} /* extern "C" */
