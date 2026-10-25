#include "shard/W4_W4Match2_IndexedList.h"

extern "C" {

extern void asdMemFree(void *block);


/* Destroy an unlinked entry and return the node that followed it. */
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

} /* extern "C" */
