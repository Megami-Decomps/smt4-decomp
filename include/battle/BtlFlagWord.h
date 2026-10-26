#ifndef BATTLE_BTLFLAGWORD_H
#define BATTLE_BTLFLAGWORD_H

#include "common.h"

/* Sets `mask` in one battle flag word; returns script success (1). */
static __inline s32 btlFlagWordSet(u32 *word, u32 mask)
{
    *word |= mask;
    return 1;
}

/* Sets (enable > 0) or clears `mask` in one battle flag word; returns script success (1). */
static __inline s32 btlFlagWordAssign(u32 *word, u32 mask, s32 enable)
{
    s32 result = 1;
    if (enable > 0) {
        *word |= mask;
    } else {
        *word &= ~mask;
    }
    return result;
}

#endif
