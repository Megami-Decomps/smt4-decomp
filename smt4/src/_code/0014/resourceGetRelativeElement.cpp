/* IDENTICAL as the unit is compiled (its cflags entry) with -O2 -Otime; under the default -O3 retail's hoisted NULL register and offset + base order differ. */
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
