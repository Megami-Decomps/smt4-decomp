#include "common.h"

/* Releases the block. */
extern "C" void asdOperatorDelete(void *block);

extern "C" void FUN_00417a5c(void *block)
{
    asdOperatorDelete(block);
}
