/* NON_MATCHING: retail moves the old counter to the result register before the conditional retry;
 * armcc moves it after the branch. */
#include "sys/AtomicCounter.h"

/* Atomically adds to a shared counter and returns its previous value. */
extern "C" s32 atomicAddS32(s32 *counter, s32 amount)
{
    for (;;) {
        u32 before = __ldrex(counter);
        u32 after = before + (u32)amount;
        if (__strex(after, counter) == 0) {
            return (s32)before;
        }
    }
}
