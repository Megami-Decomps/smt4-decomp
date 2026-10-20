/* NON_MATCHING: register allocation in the ldrex/strex loop and in setting up the arbiter call's zero arguments (retail passes them through r2/r4/ip) */
#include "shard/S1NnOs.h"

extern "C" {

extern u32 DAT_005c0ad8; /* address arbiter handle */
s32 FUN_001b4a58(u32 arbiter, s32 *addr, s32 type, s32 value, s64 timeout); /* svcArbitrateAddress */

/* SimpleLock unlock: negate the lock word atomically, wake one waiter when it was contended. */
void FUN_001a09f4(s32 *lock)
{
    s32 next;

    do {
        next = -__ldrex(lock);
    } while (__strex(next, lock));
    if (next > 1) {
        FUN_001b4a58(DAT_005c0ad8, lock, 0, 1, 0);
    }
}

} /* extern "C" */
