/* NON_MATCHING: native erase materializes separate copied-input/result iterators and caches their addresses; the compile-safe explicit-out form uses a smaller frame. */
#include "shard/W6_W6Match2_ReferenceList.h"

extern "C" {
void FUN_003070aa(ReferenceListIterator *result, ReferenceList *list, const ReferenceListIterator *position);
u32 wordRefsDiffer_003070ec(const ReferenceListIterator &left, const ReferenceListIterator &right);
void asdOperatorDeleteArray(void *memory);

// Erase the live entries, then release every backing chunk of the list's pool.
ReferenceList *FUN_0013285c(ReferenceList *list)
{
    if (list->end != NULL) {
        ReferenceListIterator cursor(list->end->next);
        ReferenceListIterator stop(list->end);
        while (wordRefsDiffer_003070ec(cursor, stop)) {
            ReferenceListIterator following;
            FUN_003070aa(&following, list, &cursor);
            cursor = following;
        }
        ReferenceListNode *end = list->end;
        end->next = static_cast<ReferenceListNode *>(list->pool.freeList);
        list->pool.freeList = end;
        while (list->pool.chunks != NULL) {
            PoolChunk *chunk = list->pool.chunks;
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
