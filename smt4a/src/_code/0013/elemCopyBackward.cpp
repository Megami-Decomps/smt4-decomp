#include "common.h"

extern "C" {

typedef struct Elem {
    u32 a;
    u32 b;
} Elem;                         /* 8 bytes */

int _ZN9Obj55aff4aSERKS_(Elem *dst, Elem *src);

/* std::copy_backward for 8-byte elements: copies [first, last) so that it ends at `destEnd`; returns the new start of the copy. */
Elem *elemCopyBackward(Elem *first, Elem *last, Elem *destEnd)
{
    while (first != last) {
        last--;
        destEnd--;
        _ZN9Obj55aff4aSERKS_(destEnd, last);
    }
    return destEnd;
}

} /* extern "C" */
