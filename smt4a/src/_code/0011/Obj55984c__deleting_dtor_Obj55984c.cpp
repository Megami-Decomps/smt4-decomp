#include "classes/Obj55984c.h"

extern "C" void asdOperatorDeleteArray(void *block);
extern "C" Obj55984c *_ZN9Obj55984cD1Ev(Obj55984c *self);

// Destroy the array element before returning its storage.
extern "C" void _ZN9Obj55984cD0Ev(Obj55984c *self)
{
    asdOperatorDeleteArray(_ZN9Obj55984cD1Ev(self));
}
