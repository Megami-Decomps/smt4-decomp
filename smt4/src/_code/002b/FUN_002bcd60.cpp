/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void rt_memcpy_w(void *dst, const void *src, u32 size);

void FUN_002bcd60(void *dst, const void *src)
{
    rt_memcpy_w(dst, src, 144);
}

}
