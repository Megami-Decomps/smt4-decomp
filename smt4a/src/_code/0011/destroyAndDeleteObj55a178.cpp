#include "classes/Obj55a178.h"

/* Retail consumes the destructor's returned owner; a native call adds save/restores. */
extern "C" void *_ZN9Obj55a178D1Ev(void *object);
#include "common.h"

extern "C" void operatorDelete(void *object);

/* Destroy this object before releasing its allocation. */
extern "C" void destroyAndDeleteObj55a178(void *object)
{
    operatorDelete(_ZN9Obj55a178D1Ev(object));
}
