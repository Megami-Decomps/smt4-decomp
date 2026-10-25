/* NON_MATCHING: action argument spills and depth-branch placement differ from retail. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {


// Queue depth-dependent reflection actions for active roster entries outside the source group.
u32 FUN_004fe618(s32 actor, u32 options, u32 value, const BattleRosterRecordA* source)
{
    BtlMainStateA* battle = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA* target = &battle->roster[index];
        if ((target->motion.flags & 1) && (target->motion.flags & 2) &&
            !(target->liveFlags.unk10C & 2) && target->motion.group != source->motion.group) {
            if (source->reflection.group != target->reflection.group ||
                source->reflection.group < 0 || target->reflection.group < 0) {
                if (target->motion.position[2] > source->motion.position[2]) {
                    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
                    action->flagView.flags |= 4;
                    action->target = (u32)target;
                    action->kind = 0x2C;
                    action->value = value;
                    action->parameter = 0;
                } else {
                    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
                    action->flagView.flags |= 4;
                    action->target = (u32)target;
                    action->kind = 0x2B;
                    action->value = value;
                    action->parameter = 0x4C4C4CFF;
                }
                target->motion.flags |= 0x10000;
            }
        }
    }
    return 1;
}
}
