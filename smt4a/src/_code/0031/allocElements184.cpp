#include "shard/Shard0031.h"

extern "C" {

extern void *rt_malloc(s32 size);

/* Allocates storage for `count` 0xB8-byte elements. */
void *allocElements184(void *allocator, s32 count)
{
    return rt_malloc(count * 0xB8);
}

} /* extern "C" */
