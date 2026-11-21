#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* Queues depth-dependent reflection actions (kind 0x2c in front of `source`, 0x2b behind it) for the active
 * roster entries outside the source group. */
u32 btlReflectQueueDepthOverlays(s32 actor, u32 options, u32 value, const BattleRosterRecordA* source)
{
    BtlMainStateA* battle = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA* target = &battle->roster[index];
        if ((target->motion.flags & 1) && (target->motion.flags & 2) &&
            !(target->liveFlags.unk10C & 2) && target->motion.group != source->motion.group) {
            if (source->reflection.group != target->reflection.group ||
                source->reflection.group < 0 || target->reflection.group < 0) {
                if (target->motion.position[2] > source->motion.position[2]) {
                    reflectCreateKind2c(actor, options, (u32)target, 0, value, 0);
                } else {
                    reflectCreateKind2b(actor, options, (u32)target, 0x4C4C4CFF, value, 0);
                }
                target->motion.flags |= 0x10000;
            }
        }
    }
    return 1;
}
} /* extern "C" */
