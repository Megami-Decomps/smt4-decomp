/* Unit slots belonging to the action module (Apocalypse). */
#ifndef SMT4A_BATTLE_BTLACTIONSLOTS_H
#define SMT4A_BATTLE_BTLACTIONSLOTS_H

#include "battle/BtlGlobals.h"

/* Gets the action slot for the actor's index, as in IV's BtlGlobals.h. */
static __inline BtlActionSlotA *btlActionGetSlot(s32 index)
{
    return &g_btlAction.slots[index];
}

#endif
