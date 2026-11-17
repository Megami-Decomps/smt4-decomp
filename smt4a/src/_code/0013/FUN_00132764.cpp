/* NON_MATCHING: retail folds iterator/result locals into PUSH and shares loop-test blocks; compiled code reserves stack separately and uses different local/register layout. */
#include "common.h"
#include "stl/PooledList.h"

extern "C" {
void FUN_002fd642(ListNode** result, PooledList* list, ListNode** iterator);
void asdOperatorDeleteArray(void* allocation);

// Erases all nodes, returns the sentinel, and releases the allocation blocks.
PooledList* FUN_00132764(PooledList* list)
{
    ListNode* sentinel = list->sentinel;
    if (sentinel != NULL) {
        ListNode* node = sentinel->next;
        while (node != sentinel) {
            ListNode* iterator = node;
            ListNode* next;
            FUN_002fd642(&next, list, &iterator);
            node = next;
        }
        ListNode* nodeToFree = list->sentinel;
        nodeToFree->next = list->freeNodes;
        list->freeNodes = nodeToFree;
        while (list->blocks != NULL) {
            AllocationBlock* block = list->blocks;
            list->blocks = block->next;
            asdOperatorDeleteArray(block->data);
            asdOperatorDeleteArray(block);
        }
        list->freeNodes = NULL;
        list->begin = NULL;
        list->end = NULL;
    }
    return list;
}
}
