#include "classes/Obj55af5c.h"

extern "C" {

void *_ZN9Obj55af5cD1Ev(void *self);
void asdOperatorDeleteArray(void *memory);

/* C ABI retained: retail passes D1's returned this directly to the deallocator. */
void _ZN9Obj55af5cD0Ev(void *self)
{
    asdOperatorDeleteArray(_ZN9Obj55af5cD1Ev(self));
}

} /* extern "C" */
