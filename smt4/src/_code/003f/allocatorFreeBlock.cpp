#include "common.h"

extern "C" {

typedef struct Allocator {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ void (*free)(void *ptr);
} Allocator;

extern Allocator g_moAllocator;

void allocatorFreeBlock(int *block)
{
    if (g_moAllocator.free == NULL || block == NULL) {
        return;
    }
    if (block[3] != 0) {
        g_moAllocator.free((void *)block[3]);
    }
    if (*block != 0) {
        g_moAllocator.free((void *)*block);
    }
    g_moAllocator.free(block);
}

} /* extern "C" */
