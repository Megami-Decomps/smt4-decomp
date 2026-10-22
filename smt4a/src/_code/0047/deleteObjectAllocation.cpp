#include "common.h"

extern "C" void asdOperatorDelete(void *object);

/* Release this object through the engine allocator. */
extern "C" void deleteObjectAllocation(void *object)
{
    asdOperatorDelete(object);
}
