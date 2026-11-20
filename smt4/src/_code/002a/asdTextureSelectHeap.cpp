#include "shard/W6_W6Match5_TextureEntry.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

// Select the texture heap and remember which VRAM bank the entry uses.
extern "C" void asdTextureSelectHeap(TextureHeapEntry *entry, u32 heap)
{
    if (entry != NULL && entry->texture != NULL) {
        switch (heap) {
        case ASD_HEAP_EXTRA:
            entry->texture->heap = heap;
            break;
        case ASD_HEAP_VRAM_A:
            entry->texture->heap = heap;
            entry->flags |= 0x20;
            break;
        case ASD_HEAP_VRAM_B:
            entry->texture->heap = heap;
            entry->flags |= 0x40;
            break;
        }
    }
}
