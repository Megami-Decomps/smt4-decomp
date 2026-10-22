#include "common.h"

extern "C" void asdMemFreeNonNull(void *allocation);

// Release the storage of this trivially destructible object.
extern "C" void _ZN9Obj4221fcD0Ev(void *object)
{
    asdMemFreeNonNull(object);
}
