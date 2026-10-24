#include "common.h"
#include "stl/Obj55a87cValues.h"
#include <new>

/* AsdAllocator<Obj55a87c>::construct(): copy-constructs a record in place. */
template <>
void AsdAllocator<Obj55a87c>::construct(Obj55a87c *element, const Obj55a87c &value)
{
    new (element) Obj55a87c(value);
}
