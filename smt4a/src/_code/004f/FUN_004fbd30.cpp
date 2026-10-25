#include "battle/btlReflect.h"

extern "C" {


/* Creates a reflection entry in state 4. */
void FUN_004fbd30(s32 id, u32 options) {
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 4;
}
}
