#include "common.h"

extern "C" void *_ZN9Obj558c28D1Ev(void *object);
extern "C" void asdOperatorDeleteArray(void *allocation);

// Destroy the object and release its array allocation.
extern "C" void FUN_0010a530(void *object)
{
    asdOperatorDeleteArray(_ZN9Obj558c28D1Ev(object));
}
