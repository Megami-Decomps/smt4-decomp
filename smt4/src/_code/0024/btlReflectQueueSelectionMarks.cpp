#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

/* Queues a kind-0x22 action on every active record that targets the unit's selected combatant, then marks
 * the unit and queues its final state-change action. */
u32 btlReflectQueueSelectionMarks(s32 actor, u32 options, BtlEntry *unit)
{
    for (s32 index = 0; index < 109; ++index) {
        s16 selected = unit->selectionIndex;
        if (selected >= 0) {
            if (selected < 109) {
                BtlActionRecord *record = &btlGetMainState()->actions[index];
                if (record != NULL && (record->status & 1) && (record->status & 2) &&
                    record->participant.combatantIndex == selected && (record->status & 0x400)) {
                    reflectCreateKind22(actor, options, (u32)record, 0, 20, 0);
                }
            }
        }
    }
    unit->flagMask |= 0x40;
    reflectCreateKind24(actor + 20, options, (u32)unit, 0);
    return 1;
}
} /* extern "C" */
