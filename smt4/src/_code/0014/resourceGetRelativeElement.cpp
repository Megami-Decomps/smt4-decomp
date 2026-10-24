/* NON_MATCHING: retail resolves each relative slot through its post-indexed address and keeps one null merge per level; armcc recomputes the slot addresses and branches on the null cases. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

extern "C" {
// Resolve an indexed record and element through the resource's self-relative tables.
void *resourceGetRelativeElement(const RelativeResourceOwner *owner, s32 recordIndex, s32 elementIndex)
{
    RelativeResourceTable *table = owner->resource->view->blob->table.get();

    if (table == NULL) {
        return NULL;
    }
    RelativeResourceRecord *record = table->entries[recordIndex].record.get();
    ResourceRelativePointer<void> *elements = record->elements.get();
    return elements[elementIndex].get();
}
}
