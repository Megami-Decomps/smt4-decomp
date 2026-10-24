#include "common.h"
#include "stl/AsdAllocator.h"
#include "classes/Obj55a88c.h"

extern "C" {

/* AsdAllocator<Obj55a88c>::construct(): copy-constructs a record in place. */
void _ZN12AsdAllocatorI9Obj55a88cE9constructEPS0_RKS0_(AsdAllocator<Obj55a88c> *allocator, Obj55a88c *element, const Obj55a88c *source)
{
    allocator->construct(element, *source);
}

} /* extern "C" */
