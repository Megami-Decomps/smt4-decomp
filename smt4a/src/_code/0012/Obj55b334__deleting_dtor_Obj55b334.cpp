#include "common.h"

extern "C" {

void *_ZN9Obj55b334D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void _ZN9Obj55b334D0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj55b334D1Ev(self));
}

} /* extern "C" */
