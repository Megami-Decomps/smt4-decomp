#include "common.h"

extern "C" {

void FUN_002e7682(void *dest, const void *source, s32 flag);

/* Calls FUN_002e7682(dest, source, 1) and returns `dest`. */
void *FUN_002e9a56(void *dest, const void *source)
{
    FUN_002e7682(dest, source, 1);
    return dest;
}

} /* extern "C" */
