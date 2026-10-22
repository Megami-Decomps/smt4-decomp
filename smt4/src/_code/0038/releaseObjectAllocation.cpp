#include "common.h"

extern "C" void asdMemFreeNonNull(void *block);

/* Release the object's allocation. */
extern "C" void releaseObjectAllocation(void *object)
{
    asdMemFreeNonNull(object);
}
