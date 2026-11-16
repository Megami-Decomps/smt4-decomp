/* NON_MATCHING: only the scheduling of the actor argument move (`mov r1, r8`) before the queue call
 * differs; retail places it after the 0xff parameter and the zero secondary actor. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlReflect.h"

extern "C" {

/* Queues an immediate action of kind 0x22 on `target`; the value and parameter are evaluated
 * before the queue call. */
static __inline void queueKind22(u32 options, s16 actor, const void *target, u32 value, u32 parameter)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actor, 0, options);
    action->flagView.flags |= 4;
    action->target = (u32)target;
    action->kind = 0x22;
    action->value = value;
    action->parameter = parameter;
}

/* Queues a kind-0x22 action with parameter 0xff for every active action record from 67 to 108. */
u32 FUN_003de9e4(s32 actorIndex, u32 options, u32 value)
{
    s16 actor = actorIndex;
    for (s32 index = 67; index < 109; ++index) {
        BtlActionRecord *record = &btlGetMainState()->actions[index];
        if (record->status & 0x8000) {
            queueKind22(options, actor, record, value, 0xff);
        }
    }
    return 1;
}
}
