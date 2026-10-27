/* NON_MATCHING: a null table skips the record lookup (no early return, like retail); remaining diff: retail keeps NULL in a hoisted register (`moveq rX, r0` after the add), compares the first result again and adds the last offset as `offset + base`. */
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
