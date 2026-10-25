/* NON_MATCHING: roster bounds-check merging, action payload spills and flag-mask loads differ. */
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
BtlMainStateA* btlGetMainState(void);


// Queue roster reflection commands followed by a marked-combatant command.
u32 FUN_004fcde0(s32 actor, u32 options, BtlCombatantEntryA* combatant)
{
    for (s32 index = 0; index < 109; ++index) {
        s16 selected = combatant->indexView.selectionIndex;
        if (selected >= 0 && selected < 109) {
            BattleRosterRecordA* roster = &btlGetMainState()->roster[index];
            if (roster != NULL && (roster->motion.flags & 1) && (roster->motion.flags & 2) &&
                roster->motion.unitIndex == selected && (roster->motion.flags & 0x400)) {
                ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
                action->flagView.flags |= 4;
                action->target = (u32)roster;
                action->kind = 0x2C;
                action->value = 20;
                action->parameter = 0;
            }
        }
    }
    combatant->flags |= DAT_00573c08.marked;
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 20), 0, options);
    action->kind = 0x2E;
    action->wordValues.unk18 = (u32)combatant;
    action->value = 0;
    return 1;
}
}
