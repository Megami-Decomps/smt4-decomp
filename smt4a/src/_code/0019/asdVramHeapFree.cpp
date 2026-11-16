/* NON_MATCHING: the search and null setup now match (IV's while-loop search); retail keeps the heap in r5 and the block in r4 (swapped here) and loads the second merge's links into r2/r1 (r1/r2 here). */
#include "common.h"

// Apocalypse's block nodes have a pool field before their links, unlike the shared IV prefix.
struct VramFreeNodeA {
    u32 address;
    u32 size;
    u32 allocated;
    VramFreeNodeA *previous;
    VramFreeNodeA *next;
};
struct VramFreeListA {
    VramFreeNodeA *first;
    VramFreeNodeA *last;
    s32 count;
};
struct VramHeapStateA {
    VramFreeListA used;
    VramFreeListA free;
    u32 freeBytes;
};
struct VramNodePoolA { u32 unk00; u32 available; };
struct VramMemoryGlobalsA { u8 prefix[0x18]; VramNodePoolA *pool; };

extern "C" {
extern VramMemoryGlobalsA g_asdMemory;
void FUN_0019c920(VramFreeListA *, VramFreeNodeA *);

static __inline void unlinkBlock(VramFreeListA *list, VramFreeNodeA *block)
{
    VramFreeNodeA *previous = block->previous;
    VramFreeNodeA *next = block->next;
    if (previous != NULL)
        previous->next = next;
    else
        list->first = next;
    if (next != NULL)
        next->previous = previous;
    else
        list->last = previous;
    block->previous = NULL;
    block->next = NULL;
    --list->count;
}

/* Returns a node to the node pool. */
static __inline void releaseNode(VramFreeNodeA *node)
{
    node->allocated = 0;
    node->address = 0;
    node->size = 0;
    node->previous = NULL;
    node->next = NULL;
    ++g_asdMemory.pool->available;
}

static __inline void mergeNext(VramFreeListA *list, VramFreeNodeA *block)
{
    if (block != NULL) {
        VramFreeNodeA *next = block->next;
        if (next != NULL && block->address + block->size == next->address) {
            block->size += next->size;
            unlinkBlock(list, next);
            releaseNode(next);
        }
    }
}

static __inline VramFreeNodeA *findBlock(VramFreeListA *list, u32 address)
{
    VramFreeNodeA *block = list->first;
    while (block != NULL) {
        if (block->address == address)
            return block;
        block = block->next;
    }
    return NULL;
}

// Return a used VRAM run to the sorted free list and coalesce adjacent runs.
void asdVramHeapFree(VramHeapStateA *heap, u32 address)
{
    VramFreeNodeA *block = findBlock(&heap->used, address);
    unlinkBlock(&heap->used, block);
    heap->freeBytes += block->size;
    FUN_0019c920(&heap->free, block);
    mergeNext(&heap->free, block);
    mergeNext(&heap->free, block->previous);
}
}
