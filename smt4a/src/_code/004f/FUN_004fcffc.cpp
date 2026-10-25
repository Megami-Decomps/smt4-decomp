/* NON_MATCHING: saved queue, actor, target and status registers differ despite matching action operations. */
#include "battle/btlReflect.h"

struct ReflectTargetA { u8 unk00[0x6a]; s16 entryIndex; };
struct ReflectedMemberStatusA { u8 unk00[0x110]; u16 flags; };
extern "C" {
void *btlGetMainState();
ReflectedMemberStatusA *FUN_001568f8(void *battle, s32 member);


// Queue a status clear followed by recovery actions when no blocking status remains.
u32 FUN_004fcffc(s16 actor, u32 options, ReflectTargetA *target, u32 mask)
{
    u32 flags = 0;
    bool rosterMember = target->entryIndex < 109;
    if (rosterMember) {
        ReflectedMemberStatusA *member = FUN_001568f8(btlGetMainState(), target->entryIndex);
        if (member)
            flags = member->flags;
    }
    if (mask) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, actor, 0, options);
        action->kind = 38;
        action->target = (u32)target;
        flags &= ~mask;
        action->value = 0;
        action->parameter = mask;
    }
    if (rosterMember && !(flags & 0x582)) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
        action->kind = 28;
        action->target = (u32)target;
        action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 1), 0, options);
        action->kind = 11;
        action->target = (u32)target;
        action->value = mask;
    }
    return 1;
}
}
