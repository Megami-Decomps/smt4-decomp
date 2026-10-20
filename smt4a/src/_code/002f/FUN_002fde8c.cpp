#include "common.h"

extern "C" {

void FUN_0030fb34(u32 a, u32 b, s32 size);

/* Calls FUN_0030fb34 with `count` 8-byte units (count * 8 bytes). */
void FUN_002fde8c(u32 a, u32 b, s32 count)
{
    FUN_0030fb34(a, b, count << 3);
}

} /* extern "C" */
