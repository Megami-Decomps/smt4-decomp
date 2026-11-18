/* A scene's flag word (the first word of the quest center and shop scenes) is set and cleared through
 * these in retail: armcc treats the update as a store through a pointer and keeps the scene's later
 * loads behind it. IV's qcDeliveryStep and shopQuantityStep and Apocalypse's Obj536044::FUN_0049b00c use them.
 * Unproven: none of those users is IDENTICAL yet, so the helpers stay out of matched code until one is. */
#ifndef SYS_FLAGWORD_H
#define SYS_FLAGWORD_H

#include "common.h"

static __inline void flagWordSet(u32 *flags, u32 mask)
{
    *flags |= mask;
}

static __inline void flagWordClear(u32 *flags, u32 mask)
{
    *flags &= ~mask;
}

#endif
