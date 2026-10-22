#include "common.h"

extern "C" void *_ZN9Obj55b104D1Ev(void *object);
extern "C" void asdOperatorDeleteArray(void *allocation);

// Destroy the object and release its array allocation.
extern "C" void _ZN9Obj55b104D0Ev(void *object)
{
    asdOperatorDeleteArray(_ZN9Obj55b104D1Ev(object));
}
