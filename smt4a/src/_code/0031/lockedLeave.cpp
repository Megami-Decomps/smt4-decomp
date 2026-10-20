#include "shard/Shard0031.h"

extern "C" {

extern void nn_os_CriticalSection_Leave(void *cs);

/* Leaves the critical section guarding the object. */
void lockedLeave(Locked *obj)
{
    nn_os_CriticalSection_Leave(obj->lock);
}

} /* extern "C" */
