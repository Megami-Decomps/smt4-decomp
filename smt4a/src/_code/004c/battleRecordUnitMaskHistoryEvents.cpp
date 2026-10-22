#include "battle/btlMain.h"

struct HistoryUnit {
    u64 flags; /* 0x00 */
};
struct HistoryEventMasks {
    u8 unk00[0x48];
    u64 first;  /* 0x48 */
    u64 second; /* 0x50 */
    u8 unk58[0x30];
    u64 third;  /* 0x88 */
};

extern "C" {
extern HistoryEventMasks DAT_005713f0;
BtlMainStateA *btlGetMainState(void);
HistoryUnit *FUN_003f0e20(BtlMainStateA *state, u32 unitId);
void battleRecordCombatantHistoryEvent(BtlMainStateA *state, HistoryUnit *unit, s32 kind);

/* Records history events 1-3 for the unit according to which event masks its flags hit. */
void battleRecordUnitMaskHistoryEvents(u32 unitId)
{
    HistoryUnit *unit = FUN_003f0e20(btlGetMainState(), unitId);

    if (unit->flags & DAT_005713f0.first) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 1);
    }
    if (unit->flags & DAT_005713f0.second) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 2);
    }
    if (unit->flags & DAT_005713f0.third) {
        battleRecordCombatantHistoryEvent(btlGetMainState(), unit, 3);
    }
}
}
