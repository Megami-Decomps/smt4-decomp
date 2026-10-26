/* NON_MATCHING: the wait-mode switch and counter tests match retail's dispatch; armcc duplicates the pump call for mode 0x400 and allocates the mode/counter registers differently (retail: mode r7, counters r5/r6). */
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" void FUN_00129b00(void);

// Pump graphics work until the requested completion counters advance.
extern "C" void FUN_00113244(u32 waitMode)
{
    u32 firstCount = g_asdGfxContext.completion.firstCount;
    u32 secondCount = g_asdGfxContext.completion.secondCount;
    for (;;) {
        switch (waitMode) {
        case 0x400:
            if (g_asdGfxContext.completion.firstCount != firstCount)
                return;
            break;
        case 0x401:
            if (g_asdGfxContext.completion.secondCount != secondCount)
                return;
            break;
        case 0x402:
            if (g_asdGfxContext.completion.firstCount != firstCount &&
                g_asdGfxContext.completion.secondCount != secondCount)
                return;
            break;
        }
        FUN_00129b00();
    }
}
