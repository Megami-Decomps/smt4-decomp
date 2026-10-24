/* Built with -Ospace (see flags_W4Match4b.txt). */
/* Copies the 8-byte elements in [first, last) one by one through _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_ into the output run starting at `out`; returns the end of the output. */
#include "common.h"

extern "C" {

extern void _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(u32 allocator, u8 *dest, u8 *src);

u8 *elemCopyForward(u8 *first, u8 *last, u8 *out, u32 allocator)
{
    while (first != last) {
        _ZN12AsdAllocatorI9Obj55aff4E9constructEPS0_RKS0_(allocator, out, first);
        first += 8;
        out += 8;
    }
    return out;
}

}
