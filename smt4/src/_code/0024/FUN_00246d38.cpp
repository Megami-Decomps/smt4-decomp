/* NON_MATCHING: retail keeps a hoisted zero in sl and the global in fp (eleven saved registers); the build rematerialises the zero and needs eight. */
#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

struct ReflectedMemberStatus { u8 unk00[0xfa]; u16 flags; };
extern "C" {
ReflectedMemberStatus *FUN_0027da30(void *battle, s32 member);


// Queue a status clear and, when no blocking status remains, the follow-up recovery actions.
u32 FUN_00246d38(s32 actor, u32 options, ReflectTarget *target, u32 mask)
{
    u32 flags = 0;
    bool nonRoster = false;
    if (target->entryIndex >= 109) {
        nonRoster = true;
    } else {
        ReflectedMemberStatus *member = FUN_0027da30(btlGetMainState(), target->entryIndex);
        if (member)
            flags = member->flags;
    }
    if (mask) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
        action->kind = 29;
        action->target = (u32)target;
        flags &= ~mask;
        action->value = 0;
        action->parameter = mask;
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
