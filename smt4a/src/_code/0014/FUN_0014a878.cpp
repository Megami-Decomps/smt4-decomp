/* NON_MATCHING: completion-counter layout is recovered; loop dispatch is duplicated and uses different live registers than retail. */
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" void FUN_00170184(void);

// Pump graphics work until the requested completion counters advance.
extern "C" void FUN_0014a878(u32 waitMode)
{
    u32 firstCount = g_asdGfxContext.completion.firstCount;
    u32 secondCount = g_asdGfxContext.completion.secondCount;
    do {
        if (waitMode != 0x400) {
            if ((waitMode == 0x401 ||
                 (waitMode == 0x402 && firstCount != g_asdGfxContext.completion.firstCount)) &&
                secondCount != g_asdGfxContext.completion.secondCount)
                return;
        } else if (firstCount != g_asdGfxContext.completion.firstCount) {
            return;
        }
        FUN_00170184();
    } while (true);
}