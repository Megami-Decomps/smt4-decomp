#include "common.h"

extern "C" {

s32 asdMemFreeNonNull(void *block);

/* Releases the object's allocation. */
void _ZN9Obj4208d47vfunc18Ev(void *object)
{
    asdMemFreeNonNull(object);
}

} /* extern "C" */
