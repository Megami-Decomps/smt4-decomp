/* NON_MATCHING: previous-link branch stores are merged, and count/null temporaries use different registers. */
#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" LinkedItem* FUN_0025c870(void);

// Allocate an item and append it to the owner's doubly linked list.
extern "C" LinkedItem* effPartAppend(LinkedItems* list, u32 value)
{
    LinkedItem* item = FUN_0025c870();
    item->next = NULL;
    item->value = value;
    if (list->tail != NULL) {
        list->tail->next = item;
        item->previous = list->tail;
    } else {
        list->head = item;
        item->previous = NULL;
    }
    ++list->count;
    list->tail = item;
    return item;
}
