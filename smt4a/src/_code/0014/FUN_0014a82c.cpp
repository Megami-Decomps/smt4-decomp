#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GfxCallbackState g_asdGfxContext;

/* Sets the graphics callback and its enable state. */
void FUN_0014a82c(CallbackBinding binding, u32 enabled)
{
    gfxCallbackSlotSet(g_asdGfxContext, binding, enabled);
}

} /* extern "C" */
