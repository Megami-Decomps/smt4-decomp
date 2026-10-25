#include "common.h"

extern "C" {

typedef struct Elem {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    u32 w5;
    u32 w6;
    u32 w7;
    u32 w8;
    u32 w9;
} Elem;                         /* 40 bytes */

int FUN_00307aba(Elem *dst, Elem *src);

/* std::uninitialized_copy for 40-byte elements: constructs a copy of each of [first, last) at `dest`; returns the end of the copy. */
Elem *FUN_00307a7a(Elem *first, Elem *last, Elem *dest)
{
    for (; first != last; ++first, ++dest) {
        FUN_00307aba(dest, first);
    }
    return dest;
}

} /* extern "C" */
