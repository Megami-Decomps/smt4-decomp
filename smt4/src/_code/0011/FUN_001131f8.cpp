/* NON_MATCHING: instruction selection/order differs: retail str r2, [r3, #368]!; compiler str r2, [r3, #368]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GfxCallbackState g_asdGfxContext;

/* Sets the graphics callback and its enable state. */
void FUN_001131f8(CallbackBinding binding, u32 enabled)
{
    g_asdGfxContext.enabled = enabled;
    g_asdGfxContext.binding = binding;
}

} /* extern "C" */
