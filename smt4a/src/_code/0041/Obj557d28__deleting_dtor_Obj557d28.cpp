#include "common.h"

/* Releases the block. */
extern "C" void asdOperatorDelete(void *block);

extern "C" void _ZN9Obj557d28D0Ev(void *block)
{
    asdOperatorDelete(block);
}
