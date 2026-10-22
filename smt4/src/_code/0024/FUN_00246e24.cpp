/* NON_MATCHING: linked-action construction uses a smaller saved-register set and different target lookup scheduling. */
/* Queues the linked reflection actions and optionally clears a target's status flag. */
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);
BtlMainState *btlGetMainState(void);
BtlUnitEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);

u32 FUN_00246e24(s32 actor, u32 options, BtlActionRecord *target, u32 value, s32 clearStatus)
{
    s32 linkedActor = (s16)(actor + 1);
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, linkedActor, 0, options);
    action->kind = 19;
    action->target = (u32)target;
    action->parameter = value;
    action = btlQueueReflectAction(g_btlActionReflect, linkedActor, 0, options);
    action->kind = 8;
    action->target = (u32)target;
    action->value = value;
    action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 29;
    action->target = (u32)target;
    action->value = 1;
    action->parameter = value;
    if (clearStatus) {
        BtlUnitEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), target->memberId);
        if ((entry->flagMask & 0x10) != 0) {
            action = btlQueueReflectAction(g_btlActionReflect, linkedActor, 0, options);
            action->kind = 29;
            action->target = (u32)target;
            action->value = 0;
            action->parameter = 0x10;
        }
    }
    return 1;
}
}
