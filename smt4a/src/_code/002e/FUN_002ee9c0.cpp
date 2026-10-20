#include "common.h"

extern "C" {

void FUN_002e7674(void *dest, const void *source, s32 size);

/* Copies 4 bytes from `source` to `dest` and returns `dest`. */
void *FUN_002ee9c0(void *dest, const void *source)
{
    FUN_002e7674(dest, source, 4);
    return dest;
}

} /* extern "C" */
