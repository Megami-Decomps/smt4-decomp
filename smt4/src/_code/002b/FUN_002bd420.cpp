#include "common.h"

extern "C" {

int rt_memcpy(void *dst, void *src, int size);

void FUN_002bd420(void *src, void *dst, int size)
{
    rt_memcpy(dst, src, size);
}

} /* extern "C" */
