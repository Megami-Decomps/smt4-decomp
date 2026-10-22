#include "common.h"

extern "C" int asdOperatorDelete(void *block);

/* Release the allocation through the engine allocator. */
extern "C" int FUN_00475ea4(void *block)
{
    return asdOperatorDelete(block);
}
