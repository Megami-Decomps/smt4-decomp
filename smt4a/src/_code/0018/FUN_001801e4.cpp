/* NON_MATCHING: The node and successor use opposite preserved registers, eliminating retail's initial successor copy. */
#include "shard/W4_W4Match2_IndexedList.h"

extern "C" {
void asdMemFree(void *allocation);

/* Unlinks and destroys a node, renumbers the list, and returns its former successor. */
IndexedNode *FUN_001801e4(IndexedList *list, IndexedNode *node)
{
    IndexedNode *next = node->next;
    if (list != NULL && node != NULL) {
        IndexedNode *prev = node->prev;
        if (prev == NULL && next == NULL) {
            list->head = NULL;
            list->tail = NULL;
        } else {
            if (prev != NULL) {
                prev->next = next;
            } else {
                next->prev = NULL;
                list->head = next;
            }
            if (next != NULL) {
                next->prev = prev;
            } else {
                prev->next = NULL;
                list->tail = prev;
            }
        }
        s32 count = 0;
        for (IndexedNode *entry = list->head; entry != NULL; entry = entry->next) {
            entry->index = count++;
        }
        list->count = count;
    }
    if (node->destroy != NULL) {
        node->destroy(node->payload);
    }
    asdMemFree(node);
    return next;
}
}
