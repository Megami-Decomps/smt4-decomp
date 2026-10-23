/* NON_MATCHING: effect branch layout, argument spill slots and constant lifetimes differ. */
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
extern "C" {
extern ReflectContext *g_btlActionReflect;
BtlMainState *btlGetMainState(void);
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 flags, u32 secondary);

// Queue foreground/background overlays for other participating action records.
u32 FUN_003de60c(s16 actorId, u32 secondary, u32 value, BtlActionRecord *reference)
{
    struct DepthRecordView {
        u8 prefix[0x14];
        f32 depth;
        u8 unk18[0xD8];
        s32 group;
    };
    typedef char DepthRecordOffsets[offsetof(DepthRecordView, depth) == 0x14 && offsetof(DepthRecordView, group) == 0xF0 ? 1 : -1];
    BtlMainState *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *target = &state->actions[index];
        if ((target->status & 1) && (target->status & 2) &&
            !(target->stateFlags & 2) && target->memberId != reference->memberId) {
            DepthRecordView *sourceDepth = (DepthRecordView *)reference;
            DepthRecordView *targetDepth = (DepthRecordView *)target;
            if (sourceDepth->group != targetDepth->group || sourceDepth->group < 0 || targetDepth->group < 0) {
                if (targetDepth->depth > sourceDepth->depth) {
                    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, secondary);
                    action->flagView.flags |= 4;
                    action->target = (u32)target;
                    action->kind = 34;
                    action->value = value;
                    action->parameter = 0;
                } else {
                    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actorId, 0, secondary);
                    action->flagView.flags |= 4;
                    action->target = (u32)target;
                    action->kind = 33;
                    action->value = value;
                    action->parameter = 0x4C4C4CFF;
                }
                target->status |= 0x10000;
            }
        }
    }
    return 1;
}
}
