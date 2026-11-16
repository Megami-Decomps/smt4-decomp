/* NON_MATCHING: only the flag-array base (add r2, r1, #132) is formed before the first count test instead of after it, which also moves the count into r3. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern LightCountState g_asdLightCount;
extern LightEnableState g_gfxSettings;
extern void FUN_00125250(void);

/* Enables lighting when either light bank has active entries or its enable flag set. */
void FUN_00115c74(void)
{
    LightCountState *counts = &g_asdLightCount;
    const u32 *flags = g_gfxSettings.flags;
    if (counts->count > 0 || (flags[0] & 1) != 0 ||
        counts->secondaryCount > 0 || (flags[1] & 1) != 0) {
        g_gfxSettings.enabled = 1;
        FUN_00125250();
    } else {
        g_gfxSettings.enabled = 0;
    }
}

} /* extern "C" */
