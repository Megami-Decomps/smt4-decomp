#include "common.h"

extern "C" void asdMemFreeNonNull(void *allocation);

// Release the storage of this trivially destructible object.
extern "C" void FUN_0038bee0(void *object)
{
    asdMemFreeNonNull(object);
}
