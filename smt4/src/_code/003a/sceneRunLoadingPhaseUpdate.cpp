#include "shard/S2Scene3a.h"

extern "C" {

extern void FUN_003a1504(Scene3a *scene);

/* Runs the update callback of the current phase (if set), then steps the loading state machine. */
void sceneRunLoadingPhaseUpdate(Scene3a *scene)
{
    if (scene->updateFuncs[scene->phase].func) {
        (scene->*scene->updateFuncs[scene->phase].func)();
    }
    FUN_003a1504(scene);
}

} /* extern "C" */
