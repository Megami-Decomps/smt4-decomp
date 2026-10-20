#include "common.h"

extern "C" {

void FUN_002e7674(void *dest, const void *source, s32 size);

/* Copies 8 bytes from `source` to `dest` and returns `dest`. */
void *FUN_002eeae2(void *dest, const void *source)
{
    FUN_002e7674(dest, source, 8);
    return dest;
}

} /* extern "C" */
