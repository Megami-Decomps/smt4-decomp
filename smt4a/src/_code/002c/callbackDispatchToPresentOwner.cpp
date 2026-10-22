#include "common.h"

extern "C" {
extern void *g_callbackOwnerSlots[];
void FUN_004be608(void *owner, void *context);
}

// Deliver the callback only while the owner is present.
extern "C" s32 callbackDispatchToPresentOwner(void *context)
{
    if (g_callbackOwnerSlots[1] != NULL)
        FUN_004be608(g_callbackOwnerSlots[1], context);
    return 0;
}
