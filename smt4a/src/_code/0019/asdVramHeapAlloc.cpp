/* NON_MATCHING: instruction-for-instruction identical to retail except that the build also pushes/pops r8 (unused):
 * retail's five-register push across the asdVramBlockListInsert calls is the multifile case (a multifile run with asdVramBlockListInsert
 * gives retail's push, but then allocates the loop registers differently). */
#include "AsdSDK/asdVramBlockListInsert.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;

static __inline AsdVramBlockA *allocateVramBlock(u32 &size)
{
    if (size & 0x7f)
        size += 0x80 - (size & 0x7f);
    return takeBlockDescriptor(g_asdMemory.table);
}

// Reserve the first fitting VRAM range, splitting it with a pooled block descriptor.
u32 asdVramHeapAlloc(AsdVramHeapA *heap, u32 size)
{
    for (AsdVramBlockA *free = heap->free.head; free != NULL; free = free->next) {
        if (free->size >= size) {
            if (size & 0x7f)
                size += 0x80 - (size & 0x7f);
            if (free->size != size) {
                AsdVramBlockA *block = allocateVramBlock(size);
                block->addr = free->addr;
                block->size = size;
                free->addr += size;
                free->size -= size;
                heap->freeBytes -= block->size;
                asdVramBlockListInsert(&heap->used, block);
                return block->addr;
            }
            heap->freeBytes -= free->size;
            AsdVramBlockA *prev = free->prev;
            AsdVramBlockA *next = free->next;
            if (prev != NULL)
                prev->next = next;
            else
                heap->free.head = next;
            if (next != NULL)
                next->prev = prev;
            else
                heap->free.tail = prev;
            free->prev = NULL;
            free->next = NULL;
            --heap->free.count;
            asdVramBlockListInsert(&heap->used, free);
            return free->addr;
        }
    }
    return 0;
}
}
