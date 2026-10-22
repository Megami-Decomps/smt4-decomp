#include "common.h"

extern "C" int asdMemFreeNonNull(void *block);

/* Release the allocation after its destructor has run. */
extern "C" int FUN_0038d380(void *block)
{
    return asdMemFreeNonNull(block);
}
