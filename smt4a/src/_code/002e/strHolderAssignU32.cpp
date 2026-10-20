#include "common.h"

extern "C" {

void strHolderAssignBytes(void *dest, const void *source, s32 size);

/* Copies 4 bytes from `source` to `dest` and returns `dest`. */
void *strHolderAssignU32(void *dest, const void *source)
{
    strHolderAssignBytes(dest, source, 4);
    return dest;
}

} /* extern "C" */
