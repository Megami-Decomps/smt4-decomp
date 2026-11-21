/* NON_MATCHING: 71 vs 71 rows: action helpers and argument spills match retail; only the else arm (kind 0x2C) is placed inline here instead of out-of-line after the loop epilogue. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {

/* Sibling of btlReflectCreateKind25 / btlReflectQueueDepthOverlays (parameter before duration). */
static __inline void btlReflectQueueKind2B(s32 actorId, u32 argument, BattleRosterRecordA *record,
                                           f32 parameter, u32 duration)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
    action->flagView.flags |= 4;
    action->target = (u32)record;
    action->kind = 0x2B;
    action->value = duration;
    action->parameterScalar = parameter;
}

/* Sibling of btlReflectCreateKind25 / btlReflectQueueDepthOverlays (parameter before duration). */
static __inline void btlReflectQueueKind2C(s32 actorId, u32 argument, BattleRosterRecordA *record,
                                           u32 parameter, u32 duration)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
    action->flagView.flags |= 4;
    action->target = (u32)record;
    action->kind = 0x2C;
    action->value = duration;
    action->parameter = parameter;
}

/* Queue changes requested by active battle roster records, clearing each pending flag. */
u32 btlReflectQueuePendingRosterFade(s32 actorId, u32 argument, u32 duration)
{
    BtlMainStateA *state = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BattleRosterRecordA *record = &state->roster[index];
        u32 flags = record->render.flags;
        if ((flags & 1) && (flags & 2) && (flags & 0x10000)) {
            if (record->render.value6c == 0x4C4C4CFF) {
                btlReflectQueueKind2B(actorId, argument, record,
                                      *(const f32 *)&record->render.value70, duration);
            } else {
                btlReflectQueueKind2C(actorId, argument, record, 0xFF, duration);
            }
            record->render.flags &= ~0x10000;
        }
    }
    return 1;
}

} /* extern "C" */
