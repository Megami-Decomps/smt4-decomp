/* NON_MATCHING: the exclusive retry and returned old value match; the compiler swaps the sum/status registers and moves the result after the retry branch. */
#include "sys/AtomicCounter.h"

// Add to a shared counter atomically, returning its previous value.
extern "C" s32 atomicAddS32(s32 *counter, s32 amount)
{
    u32 before;
    do {
        before = __ldrex(counter);
    } while (__strex(before + static_cast<u32>(amount), counter) != 0);
    return static_cast<s32>(before);
}
