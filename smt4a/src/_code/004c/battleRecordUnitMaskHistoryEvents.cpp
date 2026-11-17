#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
void battleRecordCombatantHistoryEvent(BtlMainStateA *state, BtlCombatantEntryA *unit, s32 kind);

/* Records history events 1-3 for the unit according to which event masks its flags hit. */
void battleRecordUnitMaskHistoryEvents(u32 unitId)
{
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), unitId);

    if (unit->flags & g_btlSkillResponseMasks.tierFirst) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 1);
    }
    if (unit->flags & g_btlSkillResponseMasks.tierSecond) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 2);
    }
    if (unit->flags & g_btlSkillResponseMasks.tierThird) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 3);
    }
}
}
