#ifndef BATTLE_PARTY_SELECTION_H
#define BATTLE_PARTY_SELECTION_H

#include "common.h"

enum { PARTY_SELECT_CHECKED = 9999 };

/* Reserve entry indices are -1 (empty) or 0-23. Bit zero represents the player. */
static __inline u64 partySelectionBit(s8 slot)
{
    return (s64)(1 << (slot + 1));
}

#endif
