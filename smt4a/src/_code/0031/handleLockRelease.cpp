#include "shard/Shard0031.h"

extern "C" {

extern void FUN_001a08d8(s32 *handle);
extern s32 *FUN_001a0990(s32 *handle);

/* Releases the handle, and the lock taken on it when `locked` is set. */
void handleLockRelease(HandleLock *lock)
{
    FUN_001a08d8(lock->handle);
    if (lock->locked != 0) {
        FUN_001a0990(lock->handle);
    }
}

} /* extern "C" */
