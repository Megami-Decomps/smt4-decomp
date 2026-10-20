#include "common.h"

extern "C" {

void strHolderAssignBytes(void *dest, const void *src, s32 size);

/* Copies 4 bytes from `src` to `dest` and returns `dest`. */
void *memCopyWord(void *dest, const void *src)
{
    strHolderAssignBytes(dest, src, 4);
    return dest;
}

} /* extern "C" */
