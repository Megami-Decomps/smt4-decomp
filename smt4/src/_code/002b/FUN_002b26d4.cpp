/* NON_MATCHING: register allocation: retail keeps the node in r4 and a second copy of the next pointer in r5/r0; built keeps next in r4 and the node in r5 (one move fewer). */
#include "shard/W4_W4Match2_IndexedList.h"

extern "C" {

extern void asdMemFree(void *block);

/* Unlinks `node` from `list`, renumbers the rest, runs the node's destroy callback and frees it;
 * returns the node that followed it. */
IndexedNode *FUN_002b26d4(IndexedList *list, IndexedNode *node)
{
    IndexedNode *next = node->next;

    if (list != NULL && node != NULL) {
        IndexedNode *prev = node->prev;
        IndexedNode *walk;
        s32 index;

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
        index = 0;
        for (walk = list->head; walk != NULL; walk = walk->next) {
            walk->index = index;
            index++;
        }
        list->count = index;
    }
    if (node->destroy != NULL) {
        node->destroy(node->payload);
    }
    asdMemFree(node);
    return next;
}

} /* extern "C" */
