#include <new>
#include "classes/Obj55950c.h"
#include "stl/AsdAllocator.h"

/* AsdAllocator<Obj55950c>::construct: copy-constructs an element in place. */
template <> void AsdAllocator<Obj55950c>::construct(Obj55950c *element, const Obj55950c &value)
{
    new (element) Obj55950c(value);
}
