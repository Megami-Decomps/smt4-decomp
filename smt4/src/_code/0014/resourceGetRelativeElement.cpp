/* NON_MATCHING: retail resolves each self-relative pointer branch-free (post-indexed ldr, movne/moveq against one zero register) and, like this source, dereferences a NULL record when the table is missing; armcc branches on the null cases. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

extern "C" {
// Resolve an indexed record and element through the resource's self-relative tables.
void *resourceGetRelativeElement(const RelativeResourceOwner *owner, s32 recordIndex, s32 elementIndex)
{
    RelativeResourceTable *table = owner->resource->view->blob->table.get();
    RelativeResourceRecord *record = table != NULL ? table->entries[recordIndex].record.get() : NULL;
    ResourceRelativePointer<void> *elements = record->elements.get();
    return elements[elementIndex].get();
}
}
