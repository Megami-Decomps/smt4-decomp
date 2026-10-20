/* NON_MATCHING: the loop is inverted (test duplicated before the body); retail enters it with an unconditional branch to the bottom test. */
#include "common.h"

extern "C" {

typedef struct Elem {
    u32 a;
    u32 b;
} Elem;                         /* 8 bytes */

int FUN_002e9598(Elem *dst, Elem *src);

/* std::copy_backward for 8-byte elements: copies [first, last) so that it ends at `destEnd`; returns the new start of the copy. */
Elem *FUN_00135ae4(Elem *first, Elem *last, Elem *destEnd)
{
    while (first != last) {
        last--;
        destEnd--;
        FUN_002e9598(destEnd, last);
    }
    return destEnd;
}

} /* extern "C" */
