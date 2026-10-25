#include "battle/btlReflect.h"
#include "common.h"
extern "C" {
/* Stores both parameters in the selected reflection mode. */
ReflectAction *btlReflectCreateKindf(s32 slot, u32 extra, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)slot, 0, extra);
    entry->kind = 15;
    entry->value = first;
    entry->wordValues.unk18 = second;
    return entry;
}
}
