/* Creates a named reflection action and marks the two special death animations. */
#include "battle/btlReflect.h"
#include <string.h>

extern "C" {
extern void *g_btlAux;
u32 btlEffectNameHasPrefix(void *table, const char *name);

__softfp ReflectAction *FUN_00282820(s32 actor, u32 options, s16 first, s32 target,
    s16 third, s16 fourth, f32 value, const char *name)
{
    if (btlEffectNameHasPrefix(g_btlAux, name)) {
        return reflectCreateKind3(actor, options);
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
        (strcmp("Dead_12", name) == 0 || strcmp("Dead_13", name) == 0)) {
        action->specialDeath.enabled = 1;
    }
    return action;
}
}
