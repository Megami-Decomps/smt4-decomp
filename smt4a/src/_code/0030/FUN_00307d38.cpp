#include "common.h"
#include "stl/PooledList.h"

// Unlink an element, destroy its value, and return the following iterator.
extern "C" ListIterator FUN_00307d38(PooledList *list, const ListIterator &position)
{
    ListNode *sentinel = list->sentinel;
    if (position.node == sentinel) {
        ListIterator end(sentinel);
        return end;
    }
    ListIterator next(position.node->next);
    position.node->previous->next = position.node->next;
    position.node->next->previous = position.node->previous;
    --list->count;
    ListValue *value = &position.node->value;
    value->vtable->destroy(value);
    ListNode *node = position.node;
    node->next = list->freeNodes;
    list->freeNodes = node;
    return next;
}
