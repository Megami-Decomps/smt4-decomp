#include "common.h"

extern "C" {

void asdMemFreeNonNull(void *block);

/* Deleting destructor of an object with nothing to destroy: frees the block. */
void _ZN9Obj420708D0Ev(void *self)
{
    asdMemFreeNonNull(self);
}

} /* extern "C" */
