/* Matches with -Ospace (requested): the container code was built for size. */
#include "common.h"

extern "C" {

extern void rt_memcpy_w(void *dst, const void *src, u32 size);

/* std::copy_backward for 32-byte elements: copies [first, last) so that the copy ends at `destEnd`; returns the start of the copy. */
u8 *FUN_00135ac4(u8 *first, u8 *last, u8 *destEnd)
{
    while (first != last) {
        last -= 0x20;
        destEnd -= 0x20;
        rt_memcpy_w(destEnd, last, 0x20);
    }
    return destEnd;
}

} /* extern "C" */
