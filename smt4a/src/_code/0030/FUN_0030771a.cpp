#include "common.h"

extern "C" {

void rt_malloc(s32 size);

/* Allocates `count` 4-byte elements. */
void FUN_0030771a(u32 unused, s32 count)
{
    rt_malloc(count << 2);
}

} /* extern "C" */
