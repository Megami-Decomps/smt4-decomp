#ifndef GAMEDATA_STATUS_AFFINITY_H
#define GAMEDATA_STATUS_AFFINITY_H

#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
/* Fills the player's 21 affinity slots. */
void demonBuildAffinitySlots(u16 *affinities, const PlayerDataA *player);
/* Resolves one affinity slot of a party unit. */
void affinityResolveUnitSlot(u16 *affinity, const SlotRecordA *unit, u32 element);
}

/* Whether an affinity lets a status ailment through: states 1, 3 and 4 block it. */
static __inline s32 statusAffinityAllows(u16 affinity)
{
    u32 state = affinity >> 10;
    if (state == 1 || state == 3 || state == 4)
        return 0;
    return 1;
}

/* Whether the unit's affinity slot 11 lets the ailment through. */
static __inline s32 unitAffinityAllows(SlotRecordA *unit)
{
    u16 affinity;
    affinityResolveUnitSlot(&affinity, unit, 11);
    return statusAffinityAllows(affinity);
}

#endif
