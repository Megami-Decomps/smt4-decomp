/* NON_MATCHING: armcc reverses global-register allocation and folds the zero case into conditional stores. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern LightCountState g_asdLightCount;
extern LightEnableState g_gfxSettings;
extern void FUN_001664e4(void);

/* Enables lighting when either light bank has active entries or its enable flag set. */
void FUN_0014e2b8(void)
{
    if (g_asdLightCount.count > 0 || (g_gfxSettings.flags[0] & 1) != 0 ||
        g_asdLightCount.secondaryCount > 0 || (g_gfxSettings.flags[1] & 1) != 0) {
        g_gfxSettings.enabled = 1;
        FUN_001664e4();
    } else {
        g_gfxSettings.enabled = 0;
    }
}

} /* extern "C" */
