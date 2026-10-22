#include "common.h"

extern "C" void asdOperatorDelete(void *block);

/* Release the allocation after its destructor has run. */
extern "C" void FUN_00474730(void *block)
{
    asdOperatorDelete(block);
}
