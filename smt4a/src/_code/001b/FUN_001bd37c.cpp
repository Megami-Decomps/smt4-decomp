/* NON_MATCHING: the exclusive-access retry loops are laid out differently (retail expands them in source order, with the wait loop out of line). */
#include "shard/S2AtomicLock.h"

extern "C" {

extern u32 DAT_005c0ad8; /* address arbiter */

extern void FUN_001b4a58(u32 arbiter, s32 *address, s32 type, s32 value, s64 timeout);

/* Registers one more waiter if the counter is negative (held); returns 0 when it is not. */
static __inline s32 atomicLockAddWaiter(s32 *counter)
{
    for (;;) {
        s32 value = (s32)__ldrex(counter);

        if (value >= 0) {
            __clrex();
            return 0;
        }
        if (__strex(value - 1, counter) == 0) {
            return 1;
        }
    }
}

/* Takes the lock for a waiter: flips the counter to 1 - value when it is positive. */
static __inline s32 atomicLockTakeAsWaiter(s32 *counter)
{
    for (;;) {
        s32 value = (s32)__ldrex(counter);

        if (value <= 0) {
            __clrex();
            return 0;
        }
        if (__strex(1 - value, counter) == 0) {
            return 1;
        }
    }
}

/* Slow path of the lock: waits on the address arbiter until the lock can be taken. */
void FUN_001bd37c(s32 *counter)
{
    for (;;) {
        if (atomicLockAddWaiter(counter)) {
            do {
                FUN_001b4a58(DAT_005c0ad8, counter, 1, 0, 0);
            } while (!atomicLockTakeAsWaiter(counter));
            return;
        }
        if (atomicLockNegate(counter)) {
            return;
        }
    }
}

} /* extern "C" */
