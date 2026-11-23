#pragma once
#include "common.h"
#include "shard/W5_W5Match2_LinkedItems.h"

/* List, list-box and linked-container helpers of the Asd SDK. */
extern "C" {

LinkedItem *linkedFindItemByIndex(const LinkedItems *owner,u32 index);

} /* extern "C" */

/* Links `item` in at the list's tail and counts it (the caller has cleared its next link). Inlined by
 * effPartAppend and the effect editor's block-copy appends (smt4 effPartAppendClone and effPartAppendFromFile, smt4a
 * effPartAppendClone and effPartAppendFromFile). */
static __inline void linkedItemsAppend(LinkedItems *list, LinkedItem *item)
{
    if (list->tail != NULL) {
        list->tail->next = item;
        item->previous = list->tail;
    } else {
        list->head = item;
        item->previous = NULL;
    }
    ++list->count;
    list->tail = item;
}
