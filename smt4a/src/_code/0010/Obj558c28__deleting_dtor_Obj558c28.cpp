#include "classes/Obj558c28.h"

extern "C" void *_ZN9Obj558c28D1Ev(void *object);
extern "C" void asdOperatorDeleteArray(void *allocation);

/* C ABI retained: the deleting wrapper forwards D1's returned this to array delete. */
extern "C" void _ZN9Obj558c28D0Ev(void *object)
{
    asdOperatorDeleteArray(_ZN9Obj558c28D1Ev(object));
}
