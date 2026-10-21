/* NON_MATCHING: native erase returns a copied value iterator; this compile-safe explicit-out interface retains different stack/register allocation. */
#include "shard/Shard0031.h"

extern "C" {
int wordRefsDiffer_002fb30c(ListNode *const *left, ListNode *const *right);
void FUN_00132dac(ListNode **next, ListOwner *list, ListNode *const *position);
void asdOperatorDeleteArray(void *allocation);

ListOwner *FUN_00132dea(ListOwner *list)
{
    if (list->list.sentinel != 0) {
        ListNode *end = list->list.sentinel;
        ListNode *current = end->next;
        while (wordRefsDiffer_002fb30c(&current, &end)) {
            ListNode *position = current;
            ListNode *following;
            FUN_00132dac(&following, list, &position);
            current = following;
        }
        ListNode *sentinel = list->list.sentinel;
        sentinel->next = (ListNode *)list->pool.freeList;
        list->pool.freeList = sentinel;
        while (list->pool.chunks != 0) {
            PoolChunk *chunk = list->pool.chunks;
            list->pool.chunks = chunk->next;
            asdOperatorDeleteArray(chunk->data);
            asdOperatorDeleteArray(chunk);
        }
        list->pool.freeList = 0;
        list->pool.cursor = 0;
        list->pool.limit = 0;
    }
    return list;
}
}
