#include "battle/BtlGlobals.h"

extern "C" {

// Resolves a reference to one of the twelve battle-unit work slots.
BtlUnitA *btlUnitGet(BtlMainStateA *const *reference)
{
    if (*reference == NULL)
        return NULL;
    s32 index = (*reference)->unitRecord.currentSlot;
    if (index < 0)
        return NULL;
    if (index >= 12)
        return NULL;
    BtlActionSlotA &slot = g_btlAction.slots[index];
    return &slot.unit;
}
}
