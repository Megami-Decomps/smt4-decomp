/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the node allocation. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
AsdVramBlock *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdVramBlockListInsert(void *list, AsdVramBlock *block);

/* Allocates `size` bytes (rounded up to 128) from the first free block that is big enough;
 * returns the address, or 0 when no free block fits. */
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size, u32 unk08, u32 unk0c)
{
    AsdVramBlock *free = heap->free.head;
    AsdVramBlock *block;
    AsdVramBlock *prev;
    AsdVramBlock *next;
    u32 freeSize;

    for (;;) {
        if (free == NULL) {
            return 0;
        }
        freeSize = free->size;
        if (size <= freeSize) {
            break;
        }
        free = free->next;
    }

    if ((size & 0x7f) != 0) {
        size += 0x80 - (size & 0x7f);
    }
    if (freeSize != size) {
        /* Split the front of the free block off as a new used block. */
        if ((size & 0x7f) != 0) {
            size += 0x80 - (size & 0x7f);
        }
        block = asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdVramBlock), 1);
        block->addr = 0;
        block->size = 0;
        block->prev = NULL;
        block->next = NULL;
        block->addr = free->addr;
        block->size = size;
        free->addr += size;
        free->size -= size;
        heap->freeBytes -= block->size;
        asdVramBlockListInsert(heap, block);
        return block->addr;
    }

    /* The whole free block is used: move it to the used list. */
    heap->freeBytes -= freeSize;
    prev = free->prev;
    next = free->next;
    if (prev != NULL) {
        prev->next = next;
    } else {
        heap->free.head = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        heap->free.tail = prev;
    }
    free->prev = NULL;
    free->next = NULL;
    heap->free.count--;
    asdVramBlockListInsert(heap, free);
    return free->addr;
}

} /* extern "C" */
