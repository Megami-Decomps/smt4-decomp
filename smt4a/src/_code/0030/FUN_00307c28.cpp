#include "common.h"

extern "C" {

/* Opaque 184-byte element. */
typedef struct {
    u8 data[184];
} Element;

int _ZN12AsdAllocatorI9Obj55950cE9constructEPS0_RKS0_(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_00307c28(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        _ZN12AsdAllocatorI9Obj55950cE9constructEPS0_RKS0_(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
