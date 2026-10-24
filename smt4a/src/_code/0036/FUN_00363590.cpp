/* NON_MATCHING: retail materialises the zero constant (r7) before the first search loop, built after it; everything else is identical */
#include "shard/W5_W5Match2_LinkedItems.h"
#include "shard/Resource.h"

extern "C" {
void FUN_003c2df0(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);
int asdMemFree(void *block);

static LinkedItem *findSharer(LinkedItems *items, void *resource)
{
    for (LinkedItem *item = items->head; item != NULL; item = item->next) {
        if ((item->reference.flags & 1) && item->resource == resource)
            return item;
    }
    return NULL;
}

static LinkedItem *findReference(LinkedItems *items, void *resource)
{
    for (LinkedItem *item = items->head; item != NULL; item = item->next) {
        if ((item->reference.flags & 3) == 2 && item->reference.source == resource)
            return item;
    }
    return NULL;
}

/* Unlinks an item, releases the items sharing its resource, hands its references to the first
 * dependent and frees the resource when the item owned it. */
void FUN_00363590(LinkedItems *items, LinkedItem *item)
{
    if (item->previous != NULL)
        item->previous->next = item->next;
    else
        items->head = item->next;
    if (item->next != NULL)
        item->next->previous = item->previous;
    else
        items->tail = item->previous;
    items->count--;

    if (!(item->reference.flags & 1)) {
        for (LinkedItem *sharer = findSharer(items, item->resource); sharer != NULL;
             sharer = findSharer(items, item->resource))
            FUN_00363590(items, sharer);

        if (!(item->reference.flags & 2)) {
            LinkedItem *replacement = findReference(items, item->resource);
            if (replacement != NULL) {
                replacement->reference.flags &= ~2u;
                replacement->reference.source = NULL;
                FUN_003c2df0(items, replacement, replacement);
                for (LinkedItem *reference = findReference(items, item->resource); reference != NULL;
                     reference = findReference(items, item->resource))
                    FUN_003c2df0(items, reference, replacement);
            }
        }
        if (!(item->reference.flags & 1)) {
            Resource *resource = (Resource *)item->resource;
            if (resource->data != NULL)
                g_handlerTable[resource->type].release(resource->data);
            if (resource->bufferA != NULL) {
                asdMemFree(resource->bufferA);
                resource->sizeA = 0;
                resource->countA = 0;
                resource->bufferA = NULL;
            }
            if (resource->bufferB != NULL) {
                asdMemFree(resource->bufferB);
                resource->sizeB = 0;
                resource->countB = 0;
                resource->bufferB = NULL;
            }
            asdMemFree(resource);
        }
    }
    asdMemFree(item);
}

} /* extern "C" */
