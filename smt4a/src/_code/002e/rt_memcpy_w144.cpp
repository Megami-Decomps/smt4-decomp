/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void __aeabi_memcpy4(void *dst, const void *src, u32 size);

void rt_memcpy_w144(void *dst, const void *src)
{
    __aeabi_memcpy4(dst, src, 144);
}

}
