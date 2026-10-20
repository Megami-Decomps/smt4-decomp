/* NON_MATCHING: the loop is inverted (test duplicated before the body); retail enters it with an unconditional branch to the bottom test. */
#include "common.h"

extern "C" {

typedef struct Elem {
    u32 w0;
    u32 w1;
} Elem;                         /* 8 bytes */

int FUN_003116c8(u32 allocator, Elem *dst, Elem *src);

/* std::uninitialized_copy for 8-byte elements: constructs a copy of each of [first, last) at `dest` through the allocator; returns the end of the copy. */
Elem *FUN_00307724(Elem *first, Elem *last, Elem *dest, u32 allocator)
{
    for (; first != last; ++first, ++dest) {
        FUN_003116c8(allocator, dest, first);
    }
    return dest;
}

} /* extern "C" */
