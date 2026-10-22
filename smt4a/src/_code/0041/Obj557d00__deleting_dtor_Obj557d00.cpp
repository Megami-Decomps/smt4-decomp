#include "classes/Obj557d00.h"

extern "C" {
void *_ZN9Obj557d00D1Ev(void *self);
void asdOperatorDelete(void *memory);

/* Retail consumes D1's returned owner; native destructor calls save and restore it instead. */
void _ZN9Obj557d00D0Ev(void *self)
{
    asdOperatorDelete(_ZN9Obj557d00D1Ev(self));
}
} /* extern "C" */
