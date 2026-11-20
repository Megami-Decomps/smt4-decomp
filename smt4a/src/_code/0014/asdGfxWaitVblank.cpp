/* NON_MATCHING: the dispatch and loop match retail; the build compares the loaded counter first (cmp r0, r5 against retail's cmp r5, r0) and gives the mode and the saved counters other registers. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" void FUN_00170184(void);

/* Pumps graphics work until the vblank counters the wait mode names have advanced. */
extern "C" void asdGfxWaitVblank(u32 waitMode)
{
    AsdGfxContext *context = &g_asdGfxContext;
    s32 firstCount = context->vblankCounts[0];
    s32 secondCount = context->vblankCounts[1];
    for (;;) {
        bool done = false;
        switch (waitMode) {
        case 0x400:
            done = context->vblankCounts[0] != firstCount;
            break;
        case 0x401:
            done = context->vblankCounts[1] != secondCount;
            break;
        case 0x402:
            done = context->vblankCounts[0] != firstCount && context->vblankCounts[1] != secondCount;
            break;
        }
        if (done)
            break;
        FUN_00170184();
    }
}
