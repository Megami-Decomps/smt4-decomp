#include "common.h"

extern "C" {

void FUN_002e7674(void *dest, const void *src, s32 size);

/* Copies 4 bytes from `src` to `dest` and returns `dest`. */
void *FUN_001037d6(void *dest, const void *src)
{
    FUN_002e7674(dest, src, 4);
    return dest;
}

} /* extern "C" */
