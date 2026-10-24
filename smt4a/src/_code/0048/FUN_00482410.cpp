#include "common.h"

/* Releases the block. */
extern "C" void asdOperatorDelete(void *block);

extern "C" void FUN_00482410(void *block)
{
    asdOperatorDelete(block);
}
