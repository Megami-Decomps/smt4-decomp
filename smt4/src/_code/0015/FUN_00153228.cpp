#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Finds a list node by its word key. */
LookupListNode *FUN_00153228(const LookupList *list, u32 key)
{
    for (LookupListNode *node = list->head; node != NULL; node = node->next) {
        if (node->key == key) {
            return node;
        }
    }
    return NULL;
}

} /* extern "C" */
