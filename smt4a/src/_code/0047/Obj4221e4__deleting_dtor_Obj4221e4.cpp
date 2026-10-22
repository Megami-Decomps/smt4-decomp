#include "common.h"

extern "C" void asdOperatorDelete(void *block);

/* Release the allocation after its destructor has run. */
extern "C" void _ZN9Obj4221e4D0Ev(void *block)
{
    asdOperatorDelete(block);
}
