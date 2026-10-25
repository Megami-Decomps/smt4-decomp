#include "common.h"

extern "C" {

/* Opaque 12-byte element. */
typedef struct {
    u8 data[12];
} Element;

int _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_003078bc(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        _ZN12AsdAllocatorISt6vectorI9Obj55a87cS_IS1_EEE9constructEPS3_RKS3_(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
