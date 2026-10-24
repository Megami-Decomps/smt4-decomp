#include "common.h"

extern "C" {

void *_ZN9Obj422594D1Ev(void *self);
void asdOperatorDelete(void *block);

/* Deleting destructor: runs the Obj422594 destructor, then releases the object it returns. */
void _ZN9Obj55c880D0Ev(void *self)
{
    asdOperatorDelete(_ZN9Obj422594D1Ev(self));
}

} /* extern "C" */
