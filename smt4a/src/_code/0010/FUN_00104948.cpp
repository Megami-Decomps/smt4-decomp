#include "common.h"

extern "C" {

void onlineMutexLockIfNeeded(void *self);

void FUN_00104948(u8 *self)
{
    onlineMutexLockIfNeeded(self + 248);
}

} /* extern "C" */
