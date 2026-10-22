#include "classes/Obj558c00.h"

extern "C" {

void *_ZN9Obj558c00D1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* C ABI retained: retail forwards D1's returned this directly to the deallocator. */
void _ZN9Obj558c00D0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj558c00D1Ev(self));
}

} /* extern "C" */
