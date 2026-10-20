#include "common.h"

extern "C" {

void FUN_002e755c(u32 dest, u32 source, s32 size);

/* Calls FUN_002e755c with `count` 16-bit characters (2 * count bytes). */
void FUN_002eead8(u32 dest, u32 source, s32 count)
{
    FUN_002e755c(dest, source, count << 1);
}

} /* extern "C" */
