/* NON_MATCHING: with the status-change queue in a helper the instructions and saved registers match retail; the registers are permuted (retail: target r5, actor r9, options r7, flags r4, global fp, zero sl). */
#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

struct ReflectedMemberStatus { u8 unk00[0xfa]; u16 flags; };
extern "C" {
ReflectedMemberStatus *btlFindEntryBlockByMemberId(void *battle, s32 member);


// Queue a status clear and, when no blocking status remains, the follow-up recovery actions.
u32 FUN_00246d38(s32 actor, u32 options, ReflectTarget *target, u32 mask)
{
    u32 flags = 0;
    bool nonRoster = false;
    if (target->entryIndex >= 109) {
        nonRoster = true;
    } else {
        ReflectedMemberStatus *member = btlFindEntryBlockByMemberId(btlGetMainState(), target->entryIndex);
        if (member)
            flags = member->flags;
    }
    if (mask) {
        btlReflectQueueStatusChange((s16)actor, options, target, 0, mask);
        flags &= ~mask;
    }
    if (!nonRoster) {
        if (!(flags & 0x586)) {
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
            action->kind = 20;
            action->target = (u32)target;
            action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
            action->kind = 10;
            action->target = (u32)target;
            action->value = mask;
        }
    }
    return 1;
}
}
