#include "common.h"

extern "C" {

int rt_memcpy(...);

/* Copies a 0x70-byte record. */
void recordCopy70(void *src, void *dst)
{
    rt_memcpy(dst, src, 0x70);
}

} /* extern "C" */
