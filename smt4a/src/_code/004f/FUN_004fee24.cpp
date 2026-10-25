#include "battle/btlReflect.h"

extern "C" {


/* Creates a reflection entry in state 35. */
int FUN_004fee24(s32 id, u32 options, u32 argument) {
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 35;
    entry->value = argument;
    return 1;
}
}
