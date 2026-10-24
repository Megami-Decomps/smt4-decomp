#include "common.h"

extern "C" {

void rt_malloc(s32 size);

/* Allocates `count` 0x28-byte elements. */
void _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(u32 unused, s32 count)
{
    rt_malloc(count * 0x28);
}

} /* extern "C" */
