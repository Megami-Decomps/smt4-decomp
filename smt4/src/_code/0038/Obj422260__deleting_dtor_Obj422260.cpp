#include "common.h"

extern "C" int asdMemFreeNonNull(void *block);

/* Release the allocation after its destructor has run. */
extern "C" int _ZN9Obj422260D0Ev(void *block)
{
    return asdMemFreeNonNull(block);
}
