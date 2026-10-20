#include "common.h"

extern "C" {

void strHolderAssignBytes(void *dest, const void *src, s32 size);

/* Copies 8 bytes from `src` to `dest`. */
void memCopyDword(void *dest, const void *src)
{
    strHolderAssignBytes(dest, src, 8);
}

} /* extern "C" */
