/* NON_MATCHING: retail caches list/iterator addresses in r5-r7 and uses different erase/result stack slots; compiler rotates the loop and changes the saved-register frame. */
#include "shard/W6_W6Match2_ReferenceList.h"

extern "C" {
u32 wordRefsDiffer_001321b2(ReferenceListNode* const*, ReferenceListNode* const*);
void FUN_002fb2a8(ReferenceListIterator*, ReferenceList*, ReferenceListNode**);
void asdOperatorDeleteArray(void*);

// Erase all nodes, return the sentinel to its pool and release every backing chunk.
ReferenceList* FUN_0013305a(ReferenceList* list)
{
    if (list->end != NULL) {
        ReferenceListIterator node(list->end->next);
        ReferenceListIterator end(list->end);
        while (wordRefsDiffer_001321b2(&node.node, &end.node) != 0) {
            ReferenceListNode* eraseNode = node.node;
            ReferenceListIterator next;
            FUN_002fb2a8(&next, list, &eraseNode);
            node = next;
        }
        ReferenceListNode* sentinel = list->end;
        sentinel->next = (ReferenceListNode*)list->pool.freeList;
        list->pool.freeList = sentinel;
        while (list->pool.chunks != NULL) {
            PoolChunk* chunk = list->pool.chunks;
            list->pool.chunks = chunk->next;
            asdOperatorDeleteArray(chunk->data);
            asdOperatorDeleteArray(chunk);
        }
        list->pool.freeList = NULL;
        list->pool.cursor = NULL;
        list->pool.limit = NULL;
    }
    return list;
}
}
