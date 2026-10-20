/* Matches with -Ospace (requested): the container code was built for size. */
#include "common.h"

extern "C" {

typedef struct Elem {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    u32 w5;
} Elem;                         /* 24 bytes */

int FUN_0030c5d8(u32 allocator, Elem *dst, Elem *src);

/* std::uninitialized_copy for 24-byte elements: constructs a copy of each of [first, last) at `dest` through the allocator; returns the end of the copy. */
Elem *FUN_00307c74(Elem *first, Elem *last, Elem *dest, u32 allocator)
{
    for (; first != last; ++first, ++dest) {
        FUN_0030c5d8(allocator, dest, first);
    }
    return dest;
}

} /* extern "C" */
