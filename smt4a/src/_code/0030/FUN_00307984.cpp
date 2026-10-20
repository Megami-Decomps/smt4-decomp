#include "common.h"

extern "C" {

void rt_malloc(s32 size);

/* Allocates `count` 8-byte elements. */
void FUN_00307984(u32 unused, s32 count)
{
    rt_malloc(count << 3);
}

} /* extern "C" */
