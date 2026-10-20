/* NON_MATCHING: register allocation only (retail keeps the loaded value in r2, negates it in place and uses r1 for the store-exclusive status). */
#include "shard/S2AtomicLock.h"

extern "C" {

extern void FUN_001bd37c(s32 *counter);

/* Takes the lock if the counter is positive; otherwise waits for it (FUN_001bd37c). */
void FUN_001bd354(s32 *counter)
{
    if (atomicLockNegate(counter)) {
        return;
    }
    FUN_001bd37c(counter);
}

} /* extern "C" */
