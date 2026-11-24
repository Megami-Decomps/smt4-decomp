#ifndef BATTLE_BTLEFFECTRESET_H
#define BATTLE_BTLEFFECTRESET_H

#include "battle/BtlEffectFiles.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"

/* Clears one effect file slot and frees its loaded file, if any. */
static void clearEffectSlot(BtlEffectFileSlot *slot)
{
    slot->handle = 0xFF;
    sysMemClear(slot->name, sizeof(slot->name));
    if (slot->file != NULL) {
        asdMemFree(slot->file);
        slot->file = NULL;
    }
    slot->flags = 0;
}

/* Clears the eleven marker slots when setting up or tearing down the effect work. */
static void clearMarkerSlots(BtlEffectFiles *work)
{
    for (s32 index = 0; index < 11; ++index) {
        clearEffectSlot(&work->markerSlots[index]);
    }
}

/* Releases all placements and sets each slot back to its initial unused state. */
static __inline void resetEffectPlacements(BtlEffectFiles *work)
{
    for (s32 index = 0; index < 50; ++index) {
        work->placements[index].state = 0;
        work->placements[index].key = -1;
        workOwnerRelease(&work->placements[index].owner);
        work->placements[index].flags = 0;
    }
}

#endif
