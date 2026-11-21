#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

struct BattleReflectMarkingState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u64 marked;
};
extern "C" {
extern BattleReflectMarkingState DAT_00573c08;

/* Queues a kind-0x2c action on every active roster record that targets the combatant's selected unit, then
 * marks the combatant and queues its final kind-0x2e action. */
u32 btlReflectQueueSelectionMarks(s32 actor, u32 options, BtlCombatantEntryA* combatant)
{
    for (s32 index = 0; index < 109; ++index) {
        s16 selected = combatant->selectionIndex;
        if (selected >= 0) {
            if (selected < 109) {
                BattleRosterRecordA* roster = &btlGetMainState()->roster[index];
                if (roster != NULL && (roster->motion.flags & 1) && (roster->motion.flags & 2) &&
                    roster->motion.unitIndex == selected && (roster->motion.flags & 0x400)) {
                    reflectCreateKind2c(actor, options, (u32)roster, 0, 20, 0);
                }
            }
        }
    }
    combatant->flags |= DAT_00573c08.marked;
    reflectCreateKind2e(actor + 20, options, (u32)combatant, 0);
    return 1;
}
} /* extern "C" */
