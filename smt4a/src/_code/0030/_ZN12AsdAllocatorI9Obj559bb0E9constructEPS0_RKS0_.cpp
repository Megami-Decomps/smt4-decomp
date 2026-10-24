#include "stl/Obj559bb0Values.h"

/* AsdAllocator<Obj559bb0>::construct: copy-constructs a record in place. */
template <> void AsdAllocator<Obj559bb0>::construct(Obj559bb0 *element, const Obj559bb0 &value)
{
    new (element) Obj559bb0(value);
}
