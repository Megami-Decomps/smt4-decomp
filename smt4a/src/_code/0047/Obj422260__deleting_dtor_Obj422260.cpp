#include "common.h"

extern "C" int asdOperatorDelete(void *block);

/* Release the allocation through the engine allocator. */
extern "C" int _ZN9Obj422260D0Ev(void *block)
{
    return asdOperatorDelete(block);
}
