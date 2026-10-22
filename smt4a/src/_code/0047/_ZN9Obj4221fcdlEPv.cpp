#include "common.h"

extern "C" void asdOperatorDelete(void *block);

// Return the object's storage to its allocator.
extern "C" void _ZN9Obj4221fcdlEPv(void *block)
{
    asdOperatorDelete(block);
}
