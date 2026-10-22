/* NON_MATCHING: The readiness store is scheduled after the resource load/compare, whose temporary uses r1 instead of r0. */
#include "addon/SceneResource.h"

extern "C" {
SceneResource *FUN_0047c950(SceneResource *resource);
void asdOperatorDelete(void *allocation);
void asdMemFree(void *allocation);
void aocMainShutdown(void);
void *jobFind(u32 job);
extern SceneResourceWork *g_sceneResourceWork;

/* Waits for the scene-resource job, then releases its resource and work allocation. */
u32 FUN_00270a70(void)
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
                aocMainShutdown();
                if (work->resource != NULL) {
                    asdOperatorDelete(FUN_0047c950(work->resource));
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
