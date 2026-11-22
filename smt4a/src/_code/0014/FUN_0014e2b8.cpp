/* NON_MATCHING: only the flag-array base (add r2, r1, #132) is formed before the first count test instead of after it,
 * which also moves the count into r3. The slot flags are their own object (g_asdModelSlotFlags, g_gfxSettings + 0x84 in
 * symbols.txt) that retail addresses from g_gfxSettings' pool word: armcc folds two globals onto one base only when the
 * translation unit defines both. A test unit defining both (initialised, same section) and reading the flags as their
 * own array gives retail's lazy `add`; the function belongs in the file that defines them. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gfx/GfxSettings.h"

extern "C" {

extern LightCountState g_asdLightCount;
extern void FUN_001664e4(void);

/* Enables lighting when either light bank has active entries or its enable flag set. */
void FUN_0014e2b8(void)
{
    LightCountState *counts = &g_asdLightCount;
    const u32 *flags = g_gfxSettings.slotFlags;
    if (counts->count > 0 || (flags[0] & 1) != 0 ||
        counts->secondaryCount > 0 || (flags[1] & 1) != 0) {
        g_gfxSettings.lightingEnabled = 1;
        FUN_001664e4();
    } else {
        g_gfxSettings.lightingEnabled = 0;
    }
}

} /* extern "C" */
