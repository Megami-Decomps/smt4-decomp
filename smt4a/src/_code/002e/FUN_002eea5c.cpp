#include "common.h"

extern "C" {

void FUN_002e7690(void *dest, const void *source, s32 size);

/* Calls FUN_002e7690(dest, source, 1) and returns `dest`. */
void *FUN_002eea5c(void *dest, const void *source)
{
    FUN_002e7690(dest, source, 1);
    return dest;
}

} /* extern "C" */
