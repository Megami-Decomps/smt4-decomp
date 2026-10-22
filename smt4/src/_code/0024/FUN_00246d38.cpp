/* NON_MATCHING: saved queue, actor, target and status registers differ despite matching action operations. */
#include "battle/btlReflect.h"

struct ReflectedMemberStatus { u8 unk00[0xfa]; u16 flags; };
extern "C" {
void *btlGetMainState();
ReflectedMemberStatus *FUN_0027da30(void *battle, s32 member);
ReflectAction *btlQueueReflectAction(ReflectContext *context, s16 actor, s16 secondary, u32 options);

// Queue a status clear and, when no blocking status remains, the follow-up recovery actions.
u32 FUN_00246d38(s16 actor, u32 options, ReflectTarget *target, u32 mask)
{
    u32 flags = 0;
    bool rosterMember = target->entryIndex < 109;
    if (rosterMember) {
        ReflectedMemberStatus *member = FUN_0027da30(btlGetMainState(), target->entryIndex);
        if (member)
            flags = member->flags;
    }
    if (mask) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actor, 0, options);
        action->kind = 29;
        action->target = (u32)target;
        flags &= ~mask;
        action->value = 0;
        action->parameter = mask;
    }
    if (rosterMember && !(flags & 0x586)) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
        action->kind = 20;
        action->target = (u32)target;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
        action->kind = 10;
        action->target = (u32)target;
        action->value = mask;
    }
    return 1;
}
}
