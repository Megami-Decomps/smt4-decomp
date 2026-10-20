#include "common.h"

extern "C" {

void FUN_002e7674(u32 dest, u32 source, s32 size);

/* Copies 2 bytes from `source` to `dest` through FUN_002e7674. */
void FUN_00307408(u32 dest, u32 source)
{
    FUN_002e7674(dest, source, 2);
}

} /* extern "C" */
