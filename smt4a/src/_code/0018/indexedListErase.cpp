#include "shard/W4_W4Match2_IndexedList.h"

extern "C" {
void asdMemFree(void *allocation);

/* Unlinks and destroys a node, renumbers the list, and returns its former successor. */
IndexedNode *indexedListErase(IndexedList *list, IndexedNode *node)
{
    IndexedNode *next = node->next;
    indexedListUnlink(list, node);
    if (node->destroy != NULL) {
        node->destroy(node->payload);
    }
    asdMemFree(node);
    return next;
}
}
