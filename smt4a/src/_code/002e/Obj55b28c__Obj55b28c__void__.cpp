/* NON_MATCHING: mutex/vtable initialization order and argument registers differ. */
#include "classes/Obj55b28c.h"

extern "C" void onlineMutexLockIfNeeded(void *mutex);

/* Retains the opaque mutex and locks it for the guard's lifetime. */
Obj55b28c::Obj55b28c(void *value) : locked(1), mutex(value)
{
    onlineMutexLockIfNeeded(value);
}
