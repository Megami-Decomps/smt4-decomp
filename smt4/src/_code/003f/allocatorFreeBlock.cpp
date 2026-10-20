#include "common.h"

extern "C" {

typedef struct Allocator {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ void (*free)(void *ptr);
} Allocator;

extern Allocator DAT_0044e918;

void allocatorFreeBlock(int *block)
{
    if (DAT_0044e918.free == NULL || block == NULL) {
        return;
    }
    if (block[3] != 0) {
        DAT_0044e918.free((void *)block[3]);
    }
    if (*block != 0) {
        DAT_0044e918.free((void *)*block);
    }
    DAT_0044e918.free(block);
}

} /* extern "C" */
