/* NON_MATCHING: retail keeps the zero in r6 and loads each descriptor's slot into r5 (swapped here); the stores, the pool search and the tail call match. */
#include "AsdSDK/asdVramBlockListInsert.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

/* Initialises a VRAM heap over `size` bytes at `addr`: empty lists and one free run covering it. */
void asdVramHeapInit(AsdVramHeapA *heap, u32 addr, u32 size)
{
    heap->freeBytes = size;
    heap->used.head = NULL;
    heap->used.tail = NULL;
    heap->used.count = 0;
    heap->free.head = NULL;
    heap->free.tail = NULL;
    heap->free.count = 0;
    AsdVramBlockA *block = takeBlockDescriptor(g_asdMemory.table);
    block->size = size;
    block->addr = addr;
    asdVramBlockListInsert(&heap->free, block);
}
}
