#include "shard/Shard0031.h"

extern "C" {

extern void nn_os_LightEvent_Signal(s32 *handle);
extern s32 *nn_os_LightEvent_ClearSignal(s32 *handle);

/* Releases the handle, and the lock taken on it when `locked` is set. */
void handleLockRelease(HandleLock *lock)
{
    nn_os_LightEvent_Signal(lock->handle);
    if (lock->locked != 0) {
        nn_os_LightEvent_ClearSignal(lock->handle);
    }
}

} /* extern "C" */
