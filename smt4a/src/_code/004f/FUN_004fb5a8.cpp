#include "battle/btlReflect.h"

extern "C" {


/* Creates a reflection entry in state 29. */
void FUN_004fb5a8(s32 id, u32 options, u32 argument) {
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 29;
    entry->target = argument;
}
}
