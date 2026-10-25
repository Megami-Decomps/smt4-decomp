#include "battle/BattleUnitSlot.h"
#include "battle/btlMain.h"

extern "C" {
extern BattleActionState g_btlAction;

// Resolves a reference to one of the twelve battle-unit work slots.
BattleUnit* btlUnitGet(BtlMainStateA* const* reference)
{
    if (*reference == NULL)
        return NULL;
    s32 index = (*reference)->unitRecord.currentSlot;
    if (index < 0)
        return NULL;
    if (index >= 12)
        return NULL;
    BattleUnitSlotView &slot = reinterpret_cast<BattleUnitSlotView *>(g_btlAction.units)[index];
    return reinterpret_cast<BattleUnit *>(&slot.unit);
}
}
