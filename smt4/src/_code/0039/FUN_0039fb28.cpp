#include "common.h"

extern "C" void *_ZN9Obj422594D1Ev(void *object);
extern "C" int asdMemFreeNonNull(void *block);

/* The complete-object destructor returns the allocation to release. */
extern "C" void FUN_0039fb28(void *object)
{
    asdMemFreeNonNull(_ZN9Obj422594D1Ev(object));
}
