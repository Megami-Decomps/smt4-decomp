#include "classes/Obj55b28c.h"

/* Releases the mutex acquired for the guard's lifetime. */
Obj55b28c::~Obj55b28c()
{
    onlineScopedLockRelease(this);
}
