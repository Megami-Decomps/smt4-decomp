/* NON_MATCHING: the search and null setup now match (IV's while-loop search); retail keeps the heap in r5 and the block in r4
 * (swapped here) and loads the second merge's links into r2/r1 (r1/r2 here). The unit is IDENTICAL built with --fpu=softvfp. */
#include "AsdSDK/asdVramBlockListInsert.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

static __inline void unlinkBlock(AsdVramBlockListA *list, AsdVramBlockA *block)
{
    AsdVramBlockA *previous = block->prev;
    AsdVramBlockA *next = block->next;
    if (previous != NULL)
        previous->next = next;
    else
        list->head = next;
    if (next != NULL)
        next->prev = previous;
    else
        list->tail = previous;
    block->prev = NULL;
    block->next = NULL;
    --list->count;
}

/* Returns a descriptor to the g_asdMemory.table pool. */
static __inline void releaseNode(AsdVramBlockA *node)
{
    node->poolId = 0;
    node->addr = 0;
    node->size = 0;
    node->prev = NULL;
    node->next = NULL;
    ++g_asdMemory.table->count; /* retail counts up here as well as on taking a descriptor */
}

static __inline void mergeNext(AsdVramBlockListA *list, AsdVramBlockA *block)
{
    if (block != NULL) {
        AsdVramBlockA *next = block->next;
        if (next != NULL && block->addr + block->size == next->addr) {
            block->size += next->size;
            unlinkBlock(list, next);
            releaseNode(next);
        }
    }
}

static __inline AsdVramBlockA *findBlock(AsdVramBlockListA *list, u32 address)
{
    AsdVramBlockA *block = list->head;
    while (block != NULL) {
        if (block->addr == address)
            return block;
        block = block->next;
    }
    return NULL;
}

// Return a used VRAM run to the sorted free list and coalesce adjacent runs.
void asdVramHeapFree(AsdVramHeapA *heap, u32 address)
{
    AsdVramBlockA *block = findBlock(&heap->used, address);
    unlinkBlock(&heap->used, block);
    heap->freeBytes += block->size;
    asdVramBlockListInsert(&heap->free, block);
    mergeNext(&heap->free, block);
    mergeNext(&heap->free, block->prev);
}
}
