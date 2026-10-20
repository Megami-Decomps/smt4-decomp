#include "common.h"

extern "C" {

void FUN_00311248(void *dest, const void *source, s32 size, s32 flag);

/* Copies 4 bytes from `source` to `dest` through FUN_00311248 and returns `dest`. */
void *FUN_00303018(void *dest, const void *source)
{
    FUN_00311248(dest, source, 4, 1);
    return dest;
}

} /* extern "C" */
