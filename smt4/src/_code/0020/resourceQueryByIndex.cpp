#include "shard/W5_W5Match2_IndexedResource.h"

extern "C" {

extern IndexedResourceTable DAT_00464a70;

/* Query the indexed resource, or return zero when its entry is absent. */
s32 resourceQueryByIndex(u32 index)
{
    IndexedResourceEntry *entry = indexedResourceEntry(&DAT_00464a70, index);
    if (entry != NULL) {
        return entry->object->vtable->query(entry->object);
    }
    return 0;
}

}
