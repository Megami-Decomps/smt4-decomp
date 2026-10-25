/* Matches with -Ospace (requested): the container code was built for size. */
#include "common.h"

extern "C" {

extern void __aeabi_memcpy4(void *dst, const void *src, u32 size);

/* std::copy_backward for 32-byte elements: copies [first, last) so that the copy ends at `destEnd`; returns the start of the copy. */
u8 *recordArrayCopyBackward(u8 *first, u8 *last, u8 *destEnd)
{
    while (first != last) {
        last -= 0x20;
        destEnd -= 0x20;
        __aeabi_memcpy4(destEnd, last, 0x20);
    }
    return destEnd;
}

} /* extern "C" */
