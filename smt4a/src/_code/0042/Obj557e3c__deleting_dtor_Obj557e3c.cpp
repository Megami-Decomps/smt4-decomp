#include "common.h"

extern "C" {

void asdOperatorDelete(void *block);

/* Deleting destructor: nothing to destroy, so it just releases the object. */
void _ZN9Obj557e3cD0Ev(void *self)
{
    asdOperatorDelete(self);
}

} /* extern "C" */
