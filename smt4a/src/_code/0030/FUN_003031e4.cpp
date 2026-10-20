#include "common.h"

extern "C" {

void FUN_0030ff74(void *dest, const void *source, s32 size, s32 flag);

/* Copies 4 bytes from `source` to `dest` through FUN_0030ff74 and returns `dest`. */
void *FUN_003031e4(void *dest, const void *source)
{
    FUN_0030ff74(dest, source, 4, 1);
    return dest;
}

} /* extern "C" */
