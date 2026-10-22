/* NON_MATCHING: reflection factory arguments and special-name comparisons use different saved registers. */
/* Creates a named reflection action and marks the two special death animations. */
#include "battle/btlReflect.h"

extern "C" {
extern void *DAT_00435d18;
u32 FUN_003d98a0(void *table, const char *name);
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);
s32 libc_strcmp(const char *first, const char *second);

__softfp ReflectAction *FUN_00282820(s32 actor, u32 options, u16 first, s32 target,
    u16 third, u16 fourth, f32 value, const char *name)
{
    if (FUN_003d98a0(DAT_00435d18, name)) {
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
        action->kind = 3;
        return action;
    }
    if (target >= 0x6D) {
        return NULL;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 0;
    action->first = first;
    action->second = (u16)target;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
    action->scalar = value;
    if (name != NULL &&
        (libc_strcmp("Dead_12", name) == 0 || libc_strcmp("Dead_13", name) == 0)) {
        action->specialDeath.enabled = 1;
    }
    return action;
}
}
