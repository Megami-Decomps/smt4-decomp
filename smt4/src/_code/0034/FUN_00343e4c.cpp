#include "common.h"

extern "C" void *_ZN9Obj4206e8D1Ev(void *object);
extern "C" int asdMemFreeNonNull(void *block);

/* The complete-object destructor returns the allocation to release. */
extern "C" void FUN_00343e4c(void *object)
{
    asdMemFreeNonNull(_ZN9Obj4206e8D1Ev(object));
}
