#include "common.h"

extern "C" {

void asdOperatorDelete(void *block);

/* Deleting destructor of an object with nothing to destroy: frees the block. */
void _ZN9Obj4209d8D0Ev(void *self)
{
    asdOperatorDelete(self);
}

} /* extern "C" */
