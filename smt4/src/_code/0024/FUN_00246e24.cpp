/* NON_MATCHING: with btlReflectQueueStatusChange inlined the instructions and saved registers match; registers are permuted and the build loads clearStatus from the stack up front (retail: just before its test). */
/* Queues the linked reflection actions and optionally clears a target's status flag. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlGlobals.h"

extern "C" {

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
    btlReflectQueueStatusChange((s16)actor, options, target, 1, value);
    if (clearStatus) {
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), target->memberId);
        if ((entry->data.statusFlags & 0x10) != 0) {
            btlReflectQueueStatusChange(linkedActor, options, target, 0, 0x10);
        }
    }
    return 1;
}
}
