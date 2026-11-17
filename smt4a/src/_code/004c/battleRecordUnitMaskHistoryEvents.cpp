#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "battle/BtlEntryLookup.h"

struct HistoryEventMasks {
    u8 unk00[0x48];
    u64 first;  /* 0x48 */
    u64 second; /* 0x50 */
    u8 unk58[0x30];
    u64 third;  /* 0x88 */
};

extern "C" {
extern HistoryEventMasks g_btlSkillResponseMasks;
void battleRecordCombatantHistoryEvent(BtlMainStateA *state, BtlCombatantEntryA *unit, s32 kind);

/* Records history events 1-3 for the unit according to which event masks its flags hit. */
void battleRecordUnitMaskHistoryEvents(u32 unitId)
{
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), unitId);

    if (unit->flags & g_btlSkillResponseMasks.first) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 1);
    }
    if (unit->flags & g_btlSkillResponseMasks.second) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 2);
    }
    if (unit->flags & g_btlSkillResponseMasks.third) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 3);
    }
}
}
