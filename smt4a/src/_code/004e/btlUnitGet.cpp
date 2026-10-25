/* NON_MATCHING: retail retains separate signed bounds branches and adds the unit-array header after indexing; compiled code schedules those operations differently. */
#include "battle/BattleUnit.h"
#include "battle/btlMain.h"

extern "C" {
extern BattleActionState g_btlAction;

// Resolves a reference to one of the twelve battle-unit work slots.
BattleUnit* btlUnitGet(BtlMainStateA* const* reference)
{
    if (*reference != NULL) {
        s32 index = (s32)(*reference)->unitRecord.currentSlot;
        if (index < 0) {
            return NULL;
        }
        if (index < 12) {
            return &g_btlAction.units->units[index];
        }
        return NULL;
    }
    return NULL;
}
}
