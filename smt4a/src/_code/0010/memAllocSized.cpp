/* Allocates a zeroed block with a 4-byte size header and returns a pointer past the header, or NULL. */
#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);
s32 *rt_malloc(s32 size);

s32 *memAllocSized(s32 size)
{
    s32 *block;

    if (size != 0 && (block = rt_malloc(size + 4)) != NULL) {
        sysMemClear(block, size + 4);
        *block = size;
        return block + 1;
    }
    return NULL;
}

} /* extern "C" */
