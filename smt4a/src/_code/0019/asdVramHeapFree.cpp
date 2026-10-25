/* NON_MATCHING: search branch structure matches; null setup, saved-register roles and merge link loads differ. */
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

static void unlinkBlock(VramFreeListA *list, VramFreeNodeA *block)
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

static void mergeNext(VramHeapStateA *heap, VramFreeNodeA *block)
{
    if (block != NULL && block->next != NULL && block->address + block->size == block->next->address) {
        VramFreeNodeA *next = block->next;
        block->size += next->size;
        unlinkBlock(&heap->free, next);
        next->allocated = 0;
        next->address = 0;
        next->size = 0;
        next->previous = NULL;
        next->next = NULL;
        ++g_asdMemory.pool->available;
    }
}

static VramFreeNodeA *findBlock(VramFreeListA *list, u32 address)
{
    for (VramFreeNodeA *block = list->first; block != NULL; block = block->next) {
        if (block->address == address)
            return block;
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
    mergeNext(heap, block);
    mergeNext(heap, block->previous);
}
}
