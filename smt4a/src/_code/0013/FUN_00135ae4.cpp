#include "common.h"

extern "C" {

typedef struct Elem {
    u32 a;
    u32 b;
} Elem;                         /* 8 bytes */

int onlineStringAssign(Elem *dst, Elem *src);

/* std::copy_backward for 8-byte elements: copies [first, last) so that it ends at `destEnd`; returns the new start of the copy. */
Elem *FUN_00135ae4(Elem *first, Elem *last, Elem *destEnd)
{
    while (first != last) {
        last--;
        destEnd--;
        onlineStringAssign(destEnd, last);
    }
    return destEnd;
}

} /* extern "C" */
