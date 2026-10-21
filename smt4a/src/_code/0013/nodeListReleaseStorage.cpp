/* NON_MATCHING: iterator temporary slots, saved registers and loop-address hoisting differ; explicit-out erase API preserves behavior but retail uses a different iterator/member cleanup lowering. */
#include "shard/W6_W6Match3_PooledNodeList.h"

extern "C" {
u32 wordRefsDiffer_002f3204(PooledListNode** left, PooledListNode** right);
void FUN_00132c98(PooledListNode** result, PooledNodeList* list, PooledListNode** position);
void asdOperatorDeleteArray(void* memory);

PooledNodeList* nodeListReleaseStorage(PooledNodeList* list)
{
    if (list->end) {
        for (PooledListNode* current = list->end->next, *end = list->end;
             wordRefsDiffer_002f3204(&current, &end); ) {
            PooledListNode* position = current;
            PooledListNode* successor;
            FUN_00132c98(&successor, list, &position);
            current = successor;
        }
        PooledListNode* sentinel = list->end;
        sentinel->next = list->freeHead;
        list->freeHead = sentinel;
        PoolChunk* chunk;
        while ((chunk = list->chunks) != NULL) {
            list->chunks = chunk->next;
            asdOperatorDeleteArray(chunk->data);
            asdOperatorDeleteArray(chunk);
        }
        list->freeHead = NULL;
        list->cursor = NULL;
        list->limit = NULL;
    }
    return list;
}
}
