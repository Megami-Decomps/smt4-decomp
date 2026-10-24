#include "common.h"

extern "C" {

int asdMemFreeNonNull(void *block);

/* Deleting destructor: nothing to destroy, so it just releases the object. */
void _ZN9Obj420880D0Ev(void *self)
{
    asdMemFreeNonNull(self);
}

} /* extern "C" */
