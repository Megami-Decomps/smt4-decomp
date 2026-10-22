#include "classes/Obj55b334.h"

extern "C" {
void *_ZN9Obj55b334D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Retail consumes D1's returned owner; native destructor calls save and restore it instead. */
void _ZN9Obj55b334D0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj55b334D1Ev(self));
}
} /* extern "C" */
