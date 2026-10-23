/* NON_MATCHING: null/zero setup and adjacent-node link loads schedule differently. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
extern "C" {
void asdVramBlockListInsert(AsdVramBlockList *list, AsdVramBlock *block);
void asdMemFree(void *memory);
}

static __inline void vramRemoveBlock(AsdVramBlockList *list, AsdVramBlock *block)
{
    AsdVramBlock *previous = block->prev;
    AsdVramBlock *next = block->next;
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

static __inline void vramMergeNext(AsdVramBlockList *list, AsdVramBlock *block)
{
    if (block != NULL) {
        AsdVramBlock *next = block->next;
        if (next != NULL && block->addr + block->size == next->addr) {
            block->size += next->size;
            vramRemoveBlock(list, next);
            asdMemFree(next);
        }
    }
}

static __inline AsdVramBlock *vramFindBlock(AsdVramBlockList *list, u32 address)
{
    for (AsdVramBlock *block = list->head; block != NULL; block = block->next) {
        if (block->addr == address)
            return block;
    }
    return NULL;
}

/* Return a used VRAM allocation to the free list and merge its neighboring spans. */
extern "C" void asdVramHeapFree(AsdVramHeap *heap, u32 address)
{
    AsdVramBlock *block = vramFindBlock(&heap->used, address);
    vramRemoveBlock(&heap->used, block);
    heap->freeBytes += block->size;
    asdVramBlockListInsert(&heap->free, block);
    vramMergeNext(&heap->free, block);
    vramMergeNext(&heap->free, block->prev);
}
