#include "common.h"

extern "C" {

void *_ZN9Obj558c00D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void _ZN9Obj558c00D0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj558c00D1Ev(self));
}

} /* extern "C" */
