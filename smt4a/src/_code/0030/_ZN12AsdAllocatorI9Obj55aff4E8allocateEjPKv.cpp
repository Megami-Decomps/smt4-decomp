#include "common.h"

extern "C" {

void rt_malloc(s32 size);

/* Allocates `count` 8-byte elements. */
void _ZN12AsdAllocatorI9Obj55aff4E8allocateEjPKv(u32 unused, s32 count)
{
    rt_malloc(count << 3);
}

} /* extern "C" */
