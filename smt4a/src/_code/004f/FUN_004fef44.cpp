#include "battle/btlReflect.h"

extern "C" {


/* Creates a reflection entry in state 13. */
void FUN_004fef44(s32 id, u32 options) {
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 13;
}
}
