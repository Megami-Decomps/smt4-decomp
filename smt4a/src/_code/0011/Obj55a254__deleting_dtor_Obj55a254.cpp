#include "common.h"

extern "C" {

void *_ZN9Obj55a254D1Ev(void *self);
void operatorDelete(void *memory);

/* Deleting destructor: runs the destructor body, then frees the object. */
void _ZN9Obj55a254D0Ev(void *self)
{
    operatorDelete(_ZN9Obj55a254D1Ev(self));
}

} /* extern "C" */
