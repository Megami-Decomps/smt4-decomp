#include "common.h"

extern "C" {

void strHolderAssignBytes(u32 dest, u32 source, s32 size);

/* Copies 2 bytes from `source` to `dest` through strHolderAssignBytes. */
void strHolderAssignU16(u32 dest, u32 source)
{
    strHolderAssignBytes(dest, source, 2);
}

} /* extern "C" */
