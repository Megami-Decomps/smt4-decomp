#include "common.h"

extern "C" {

void onlineMutexUnlockIfNeeded(void *self);

void FUN_00104a00(u8 *self)
{
    onlineMutexUnlockIfNeeded(self + 248);
}

} /* extern "C" */
