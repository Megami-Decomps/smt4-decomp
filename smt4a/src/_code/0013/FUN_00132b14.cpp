/* NON_MATCHING: retail caches list/iterator addresses in R5-R7 and uses different copied-input/result stack slots and loop rotation. */
#include "shard/W6_W6Match2_ReferenceList.h"

extern "C" {
u32 wordRefsDiffer_002eb358(ReferenceListNode* const* first, ReferenceListNode* const* second);
void FUN_002eb368(ReferenceListIterator* result, ReferenceList* list, ReferenceListNode** position);
void asdOperatorDeleteArray(void* memory);

ReferenceList* FUN_00132b14(ReferenceList* list)
{
    if (list->end != NULL) {
        ReferenceListIterator cursor(list->end->next);
        ReferenceListIterator end(list->end);
        while (wordRefsDiffer_002eb358(&cursor.node, &end.node)) {
            ReferenceListNode* position = cursor.node;
            ReferenceListIterator following;
            FUN_002eb368(&following, list, &position);
            cursor = following;
        }
        ReferenceListNode* sentinel = list->end;
        sentinel->next = static_cast<ReferenceListNode*>(list->pool.freeList);
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
