#ifndef BATTLE_BTLFLAGWORD_H
#define BATTLE_BTLFLAGWORD_H

#include "common.h"

/* Sets `mask` in one battle flag word; returns script success (1). */
static __inline s32 btlFlagWordSet(u32 *word, u32 mask)
{
    *word |= mask;
    return 1;
}

#endif
