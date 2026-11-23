#include "addon/SceneResource.h"

extern "C" {
void asdMemFree(void *allocation);
void *jobFind(u32 job);
extern SceneResourceWork *g_sceneResourceWork;

/* Polls the AOC scene's shutdown: returns 1 while its job runs or it is not ready to release,
 * otherwise shuts the AOC system down, destroys and frees the scene resource and its work and
 * returns 0. */
u32 aocMainPollShutdown(void)
{
    SceneResourceWork *work = g_sceneResourceWork;
    if (work != NULL) {
        if (jobFind(work->job) != NULL || !work->readyToRelease) {
            return 1;
        }
        work = g_sceneResourceWork;
        if (work != NULL) {
            sceneResourceRelease(work);
            asdMemFree(g_sceneResourceWork);
            g_sceneResourceWork = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
