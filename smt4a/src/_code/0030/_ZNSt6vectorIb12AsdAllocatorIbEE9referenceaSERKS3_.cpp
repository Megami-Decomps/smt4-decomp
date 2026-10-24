#include "common.h"

extern "C" {

void _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb(u32 dest, u32 value);
u32 bitFieldTest(u32 source);

/* Calls _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb(dest, bitFieldTest(source)). */
void _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSERKS3_(u32 dest, u32 source)
{
    u32 value;

    value = bitFieldTest(source);
    _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb(dest, value);
}

} /* extern "C" */
