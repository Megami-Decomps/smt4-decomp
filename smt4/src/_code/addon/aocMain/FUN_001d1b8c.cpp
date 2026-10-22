/* NON_MATCHING: The readiness store is scheduled after the resource load/compare, whose temporary uses r1 instead of r0. */
#include "addon/SceneResource.h"

extern "C" {
SceneResource *FUN_0027e974(SceneResource *resource);
void asdMemFreeNonNull(void *allocation);
void asdMemFree(void *allocation);
void FUN_002c5700(void);
void *jobFind(u32 job);
extern SceneResourceWork *g_sceneResourceWork;

/* Waits for the scene-resource job, then releases its resource and work allocation. */
u32 FUN_001d1b8c(void)
{
    SceneResourceWork *work = g_sceneResourceWork;
    if (work != NULL) {
        if (jobFind(work->job) != NULL || !work->readyToRelease) {
            return 1;
        }
        work = g_sceneResourceWork;
        if (work != NULL) {
            work->readyToRelease = 1;
            if (work->resource != NULL) {
                FUN_002c5700();
                if (work->resource != NULL) {
                    asdMemFreeNonNull(FUN_0027e974(work->resource));
                    work->resource = NULL;
                }
            }
            asdMemFree(g_sceneResourceWork);
            g_sceneResourceWork = NULL;
        }
    }
    return 0;
}
}
