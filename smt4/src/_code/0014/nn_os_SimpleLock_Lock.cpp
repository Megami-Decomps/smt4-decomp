/* NON_MATCHING: the fast path loop compiles with the slow-path call placed before the return and different registers (retail: lock copied to r2, call as the last statement). */
#include "common.h"

extern "C" {

void FUN_00146610(s32 *lock);

/* Takes a free lock (count > 0, stored negated while held); otherwise waits in FUN_00146610, the
 * function that follows. */
void nn_os_SimpleLock_Lock(s32 *lock)
{
    for (;;) {
        s32 count = __ldrex(lock);

        if (count <= 0) {
            break;
        }
        if (__strex(-count, lock) == 0) {
            return;
        }
    }
    __clrex();
    FUN_00146610(lock);
}

} /* extern "C" */
