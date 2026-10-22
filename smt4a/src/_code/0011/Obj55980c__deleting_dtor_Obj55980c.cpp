#include "common.h"

extern "C" void *_ZN9Obj5593b8D1Ev(void *object);
extern "C" void operatorDelete(void *block);

/* The complete-object destructor returns the allocation to release. */
extern "C" void _ZN9Obj55980cD0Ev(void *object)
{
    operatorDelete(_ZN9Obj5593b8D1Ev(object));
}
