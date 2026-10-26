/* NON_MATCHING: typed relative-pointer getters recompute field addresses and branch through null cases rather than retaining retail's post-indexed slot addresses. */
#include "shard/W6_W6Match4_RelativeResourceGraph.h"

template <class T> static T *rel(ResourceRelativePointer<T> *p)
{
    T *result = NULL;
    s32 offset = p->offset;
    if (offset != 0)
        result = (T *)((u8 *)p + offset);
    return result;
}

extern "C" {
// Resolve an indexed record and element through the resource's self-relative tables.
void *resourceGetRelativeElement(const RelativeResourceOwner *owner, s32 recordIndex, s32 elementIndex)
{
    RelativeResourceTable *table = rel(&owner->resource->view->blob->table);
    if (table == NULL)
        return NULL;
    RelativeResourceRecord *record = rel(&table->entries[recordIndex].record);
    ResourceRelativePointer<void> *elements = rel(&record->elements);
    return rel(&elements[elementIndex]);
}
}
