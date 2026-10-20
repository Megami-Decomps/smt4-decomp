#include "common.h"

extern "C" {

void rt_malloc(s32 size);

/* Allocates `count` 0x18-byte elements. */
void FUN_0030c60c(u32 unused, s32 count)
{
    rt_malloc(count * 0x18);
}

} /* extern "C" */
