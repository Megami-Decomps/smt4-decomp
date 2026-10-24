#include "common.h"
#include "stl/Obj55a87cValueLists.h"
#include <new>

/* AsdAllocator<std::vector<Obj55a87c>>::construct(): copy-constructs an inner vector in place. */
template <>
void AsdAllocator<Obj55a87cValues>::construct(Obj55a87cValues *element, const Obj55a87cValues &value)
{
    new (element) Obj55a87cValues(value);
}
