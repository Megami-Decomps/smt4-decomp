/* The counter-based lock used by the nn::os synchronisation objects: a signed counter that is
 * positive while free, negative while held, and counts waiters below that. */
#ifndef S2_ATOMIC_LOCK_H
#define S2_ATOMIC_LOCK_H

#include "common.h"

/* Flips a positive counter to its negative; returns 0 (counter not positive) without changing it. */
static __inline s32 atomicLockNegate(s32 *counter)
{
    s32 value;

    do {
        value = (s32)__ldrex(counter);
        if (value > 0 && __strex(-value, counter) == 0) {
            return 1;
        }
    } while (value > 0);
    __clrex();
    return 0;
}

#endif
