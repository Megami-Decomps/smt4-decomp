/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void rt_memcpy_w(void *dst, const void *src, u32 size);

void rt_memcpy_w144(void *dst, const void *src)
{
    rt_memcpy_w(dst, src, 144);
}

}
