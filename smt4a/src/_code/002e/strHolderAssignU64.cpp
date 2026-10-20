#include "common.h"

extern "C" {

void strHolderAssignBytes(void *dest, const void *source, s32 size);

/* Copies 8 bytes from `source` to `dest` and returns `dest`. */
void *strHolderAssignU64(void *dest, const void *source)
{
    strHolderAssignBytes(dest, source, 8);
    return dest;
}

} /* extern "C" */
