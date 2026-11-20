/* NON_MATCHING: the fallback action remains inline in the loop; retail puts it after the epilogue. The duration spill also uses a different register. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/btlReflect.h"

extern "C" {


/* Queues the saved opacity, following Apocalypse's roster fade action factory. */
static __inline void btlReflectQueueKind21(s32 actorId, u32 argument, BtlActionRecord *record,
                                           f32 parameter, u32 duration)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
    action->flagView.flags |= 4;
    action->target = (u32)record;
    action->kind = 0x21;
    action->value = duration;
    action->parameterScalar = parameter;
}

/* Queues the fallback opacity, following Apocalypse's roster fade action factory. */
static __inline void btlReflectQueueKind22(s32 actorId, u32 argument, BtlActionRecord *record,
                                           u32 parameter, u32 duration)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, argument);
    action->flagView.flags |= 4;
    action->target = (u32)record;
    action->kind = 0x22;
    action->value = duration;
    action->parameter = parameter;
}

/* Queue the pending color/opacity updates for active battle action records. */
u32 btlReflectQueuePendingRosterFade(u32 actor, u32 options, u32 value)
{
    BtlMainState *battle = btlGetMainState();
    for (s32 index = 4; index < 54; ++index) {
        BtlActionRecord *entry = &battle->actions[index];
        u32 status = entry->status;
        if ((status & 1) != 0 && (status & 2) != 0 && (status & 0x10000) != 0) {
            if (entry->editorRestore.current == 0x4C4C4CFF) {
                btlReflectQueueKind21(actor, options, entry,
                                      *(const f32 *)&entry->editorRestore.saved, value);
            } else {
                btlReflectQueueKind22(actor, options, entry, 0xff, value);
            }
            entry->status &= ~0x10000;
        }
    }
    return 1;
}
}
