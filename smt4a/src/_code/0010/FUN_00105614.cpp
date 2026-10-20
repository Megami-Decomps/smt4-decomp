#include "common.h"

extern "C" {

void FUN_002e7674(void *dest, const void *src, s32 size);

/* Copies 8 bytes from `src` to `dest`. */
void FUN_00105614(void *dest, const void *src)
{
    FUN_002e7674(dest, src, 8);
}

} /* extern "C" */
