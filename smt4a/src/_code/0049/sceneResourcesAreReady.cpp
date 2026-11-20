#include "ui/SceneResourceWait.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
u32 jobIsValid(u32 job); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 eventTexJobSlotsDone(u32 job);
void aocHandleButtons(u32 loader, u32 mode); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 aocResourceStartOnce(u32 loader, u32 wait);
u32 nkdwLoaderParse(u32 loader);

/* Poll the optional loader through parse, button setup, and readiness. The battle
 * summon and entry loaders use the same three operations with per-entry phase flags. */
static __inline bool advanceResourceLoader(SceneResourceWaitState *state)
{
    switch (state->loaderState) {
    case 0:
        if (!nkdwLoaderParse(state->loader))
            return false;
        aocHandleButtons(state->loader, 7);
        state->loaderState++;
        // The first update can finish both loading phases.
    case 1:
        if (!aocResourceStartOnce(state->loader, 1))
            return false;
        state->loaderState++;
        break;
    case 2:
        break;
    default:
        return false;
    }
    return true;
}

// Wait for the optional loader, resource object, and both texture jobs.
u32 sceneResourcesAreReady(SceneResourceWaitState *state)
{
    if ((state->flags & 0x2000) && !advanceResourceLoader(state))
        return 0;
    if (state->resource == NULL)
        return 0;
    if (!state->resourceReady)
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
