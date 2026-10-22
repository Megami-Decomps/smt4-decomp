#include "classes/Obj55a254.h"

extern "C" {
void *_ZN9Obj55a254D1Ev(void *self);
void operatorDelete(void *memory);

/* Retail consumes D1's returned owner; native destructor calls save and restore it instead. */
void _ZN9Obj55a254D0Ev(void *self)
{
    operatorDelete(_ZN9Obj55a254D1Ev(self));
}
} /* extern "C" */
