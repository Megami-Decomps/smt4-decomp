/* NON_MATCHING: the three-way mode dispatch matches retail; the build puts the pump call after the first case and compares the loaded counter first (cmp r0,r4 against retail's cmp r5,r0) with different register numbers. */
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" void FUN_00170184(void);

// Pump graphics work until the requested completion counters advance.
extern "C" void FUN_0014a878(u32 waitMode)
{
    u32 firstCount = g_asdGfxContext.completion.firstCount;
    u32 secondCount = g_asdGfxContext.completion.secondCount;
    do {
        switch (waitMode) {
        case 0x400:
            if (g_asdGfxContext.completion.firstCount != firstCount) {
                return;
            }
            break;
        case 0x401:
            if (g_asdGfxContext.completion.secondCount != secondCount) {
                return;
            }
            break;
        case 0x402:
            if (g_asdGfxContext.completion.firstCount != firstCount &&
                g_asdGfxContext.completion.secondCount != secondCount) {
                return;
            }
            break;
        }
        FUN_00170184();
    } while (true);
}
