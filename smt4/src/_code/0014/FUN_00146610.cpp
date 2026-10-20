/* NON_MATCHING: block order and register numbering of the exclusive-access loops (same instructions, wait call placed after the retry loops in retail). */
#include "common.h"

extern "C" {

s32 FUN_002a8554(u32 handle, s32 *address, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

extern u32 DAT_00471b58;  /* arbiter handle */

/* Slow path of nn_os_SimpleLock_Lock: while the lock is held, registers as a waiter (count - 1)
 * and sleeps on the lock word, then takes it once it is free again. */
void FUN_00146610(s32 *lock)
{
    for (;;) {
        s32 count = __ldrex(lock);

        if (count >= 0) {
            __clrex();
            do {
                count = __ldrex(lock);
                if (count <= 0) {
                    __clrex();
                    break;
                }
            } while (__strex(-count, lock) != 0);
            if (count > 0) {
                return;
            }
            continue;
        }
        if (__strex(count - 1, lock) != 0) {
            continue;
        }
        for (;;) {
            FUN_002a8554(DAT_00471b58, lock, 1, 0, 0, 0);
            do {
                count = __ldrex(lock);
                if (count <= 0) {
                    __clrex();
                    break;
                }
            } while (__strex(1 - count, lock) != 0);
            if (count > 0) {
                return;
            }
        }
    }
}

} /* extern "C" */
