/* NON_MATCHING: retail enters the loop with a branch to the bottom test; the built loop pre-tests the range with cmp/beq. */
#include "common.h"

extern "C" {

/* Opaque 32-byte element. */
typedef struct {
    u8 data[32];
} Element;

int _ZN12AsdAllocatorI9Obj55a508E9constructEPS0_RKS0_(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_00307b08(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        _ZN12AsdAllocatorI9Obj55a508E9constructEPS0_RKS0_(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
