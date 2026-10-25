#include "battle/btlReflect.h"

extern "C" {


/* Creates a reflection entry in state 42. */
void FUN_004fee98(s32 id, u32 options, u32 argument) {
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 42;
    entry->value = argument;
}
}
