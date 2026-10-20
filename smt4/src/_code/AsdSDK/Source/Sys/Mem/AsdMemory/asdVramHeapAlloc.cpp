/* NON_MATCHING: register allocation only: retail keeps the free block's size in r2 and copies `heap` to r5 late, the built code copies it first and uses r0/r2 differently, shifting r5-r7 */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_asdMemorySourcePath[]; /* __FILE__ of AsdMemory.cpp */

AsdVramBlock *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdVramBlockListInsert(void *list, AsdVramBlock *block);

/* Allocates `size` bytes (rounded up to 128) from the first free block that is big enough;
 * returns the address, or 0 when no free block fits. */
u32 asdVramHeapAlloc(AsdVramHeap *heap, u32 size, u32 unk08, u32 unk0c)
{
    AsdVramBlock *free;
    AsdVramBlock *block;
    AsdVramBlock *prev;
    AsdVramBlock *next;
    u32 freeSize;
    u32 blockSize;

    for (free = heap->free.head; free != NULL; free = free->next) {
        freeSize = free->size;
        if (freeSize >= size) {
            if ((size & 0x7f) != 0) {
                size += 0x80 - (size & 0x7f);
            }
            if (freeSize != size) {
                /* Split the front of the free block off as a new used block. */
                blockSize = size;
                if ((blockSize & 0x7f) != 0) {
                    blockSize += 0x80 - (blockSize & 0x7f);
                }
                asdDebugTrace(g_asdMemorySourcePath, 384);
                block = asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdVramBlock), 1);
                block->addr = 0;
                block->size = 0;
                block->prev = NULL;
                block->next = NULL;
                block->addr = free->addr;
                block->size = blockSize;
                free->addr += blockSize;
                free->size -= blockSize;
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
    }
    return 0;
}

}
