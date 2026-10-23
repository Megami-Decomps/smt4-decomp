/* NON_MATCHING: loader-state increment register and shared zero-return block differ. */
#include "ui/SceneResourceWait.h"
extern "C" {
s32 jobIsValid(u32 job);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 index);
s32 eventTexJobSlotsDone(u32 job);
void aocHandleButtons(u32 loader, s32 mode);
s32 FUN_003fce08(u32 loader, u32 wait);
s32 nkdwLoaderParse(u32 loader);

// Wait for the optional loader, resource object, and both texture jobs.
u32 FUN_004962e4(SceneResourceWaitState *state)
{
    if (state->flags & 0x2000) {
        switch (state->loaderState) {
        case 0:
            if (!nkdwLoaderParse(state->loader))
                return 0;
            aocHandleButtons(state->loader, 7);
            state->loaderState++;
            // The first update can finish both loading phases.
        case 1:
            if (!FUN_003fce08(state->loader, 1))
                return 0;
            state->loaderState++;
            break;
        case 2:
            break;
        default:
            return 0;
        }
    }
    if (state->resource == NULL || !state->resourceReady)
        return 0;
    if (!asdTMTexTableNodeIsLoaded(0x20, 0))
        return 0;
    if (jobIsValid(state->textureJobs[0]) && !eventTexJobSlotsDone(state->textureJobs[0]))
        return 0;
    if (jobIsValid(state->textureJobs[1]) && !eventTexJobSlotsDone(state->textureJobs[1]))
        return 0;
    return 1;
}
}
