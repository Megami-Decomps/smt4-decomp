#include "common.h"
#include "stl/AsdAllocator.h"
#include "classes/Obj55a508.h"

extern "C" {

/* AsdAllocator<Obj55a508>::construct(): copy-constructs a record in place. */
void _ZN12AsdAllocatorI9Obj55a508E9constructEPS0_RKS0_(AsdAllocator<Obj55a508> *allocator, Obj55a508 *element, const Obj55a508 *source)
{
    allocator->construct(element, *source);
}

} /* extern "C" */
