#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" void FUN_0025c650(LinkedItems *, LinkedItem *, LinkedItem *);

static LinkedItem *findReference(LinkedItems *items, void *resource)
{
    for (LinkedItem *item = items->head; item != NULL; item = item->next) {
        if ((item->reference.flags & 3) == 2 && item->reference.source == resource)
            return item;
    }
    return NULL;
}

/* Promote the first dependent resource, then redirect the remaining references to it. */
extern "C" void effResourcePromoteReferences(LinkedItems *items, LinkedItem *item)
{
    item->reference.flags &= ~2u;
    if (!(item->reference.flags & 1)) {
        LinkedItem *replacement = findReference(items, item->resource);
        if (replacement != NULL) {
            replacement->reference.flags &= ~2u;
            replacement->reference.source = NULL;
            FUN_0025c650(items, replacement, replacement);
            LinkedItem *reference = findReference(items, item->resource);
            while (reference != NULL) {
                FUN_0025c650(items, reference, replacement);
                reference = findReference(items, item->resource);
            }
        }
    }
    item->reference.source = NULL;
}
