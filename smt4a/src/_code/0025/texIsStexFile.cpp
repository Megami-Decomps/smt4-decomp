#include "common.h"

extern "C" {

extern s32 rt_memcmp(const void *a, const void *b, u32 size);

/* True when the buffer starts with the "STEX" magic. */
s32 texIsStexFile(const void *buffer)
{
    return rt_memcmp(buffer, "STEX", 4) == 0;
}

} /* extern "C" */
