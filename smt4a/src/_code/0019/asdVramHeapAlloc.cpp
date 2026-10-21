/* NON_MATCHING: the pooled-descriptor helper keeps separate requested/aligned sizes and delays the selected-slot address, adding one saved register. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct AsdVramBlockA {
    /* 0x00 */ u32 addr;
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 poolId;
    /* 0x0c */ AsdVramBlockA *prev;
    /* 0x10 */ AsdVramBlockA *next;
};

struct AsdVramBlockListA {
    /* 0x00 */ AsdVramBlockA *head;
    /* 0x04 */ AsdVramBlockA *tail;
    /* 0x08 */ s32 count;
};

struct AsdVramHeapA {
    /* 0x00 */ AsdVramBlockListA used;
    /* 0x0c */ AsdVramBlockListA free;
    /* 0x18 */ u32 freeBytes;
};

extern "C" {
extern AsdMemoryApoc g_asdMemory;
void FUN_0019c920(AsdVramHeapA *, AsdVramBlockA *);

static __inline AsdVramBlockA *allocateVramBlock(u32 size)
{
    if (size & 0x7f)
        size += 0x80 - (size & 0x7f);
    AsdMemTable *table = g_asdMemory.table;
    AsdVramBlockA *block = NULL;
    if (table != NULL && table->entries != NULL) {
        AsdVramBlockA *entries = static_cast<AsdVramBlockA *>(table->entries);
        for (s32 i = 0; i < 512; ++i) {
            if (entries[i].poolId == 0) {
                block = &entries[i];
                block->addr = 0;
                block->size = 0;
                block->poolId = i + 1;
                block->prev = NULL;
                block->next = NULL;
                ++table->count;
                break;
            }
        }
    }
    block->size = size;
    return block;
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
                free->addr += size;
                free->size -= size;
                heap->freeBytes -= block->size;
                FUN_0019c920(heap, block);
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
            FUN_0019c920(heap, free);
            return free->addr;
        }
    }
    return 0;
}
}
