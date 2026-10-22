#include "common.h"

extern "C" void asdOperatorDelete(void *object);

/* There are no members to destroy before releasing this object. */
extern "C" void _ZN9Obj42217cD0Ev(void *object)
{
    asdOperatorDelete(object);
}
