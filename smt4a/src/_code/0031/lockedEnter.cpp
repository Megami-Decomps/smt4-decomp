#include "shard/Shard0031.h"

extern "C" {

extern void nn_os_CriticalSection_Enter(void *cs);

/* Enters the critical section guarding the object. */
void lockedEnter(Locked *obj)
{
    nn_os_CriticalSection_Enter(obj->lock);
}

} /* extern "C" */
