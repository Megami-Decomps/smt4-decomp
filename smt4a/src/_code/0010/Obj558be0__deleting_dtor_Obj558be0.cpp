#include "classes/Obj558be0.h"

extern "C" {
void *_ZN9Obj558be0D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* Retail consumes D1's returned owner; native destructor calls save and restore it instead. */
void _ZN9Obj558be0D0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj558be0D1Ev(self));
}
} /* extern "C" */
