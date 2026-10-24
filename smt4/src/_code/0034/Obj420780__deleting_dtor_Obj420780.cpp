#include "common.h"

extern "C" {

s32 asdMemFreeNonNull(void *block);

/* Deleting destructor: nothing to tear down, only releases the allocation. */
void _ZN9Obj420780D0Ev(void *object)
{
    asdMemFreeNonNull(object);
}

} /* extern "C" */
