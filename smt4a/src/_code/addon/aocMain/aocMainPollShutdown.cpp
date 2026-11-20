#include "addon/SceneResource.h"
#include "addon/aocMain.h"

extern "C" {
SceneResource *_ZN7AocMenuD1Ev(SceneResource *resource);
void asdOperatorDelete(void *allocation);
void asdMemFree(void *allocation);
void aocMainShutdown(void);
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
            work->readyToRelease = 1;
            if (work->resource != NULL) {
                aocMainShutdown();
                if (work->resource != NULL) {
                    asdOperatorDelete(_ZN7AocMenuD1Ev(work->resource));
                    work->resource = NULL;
                }
            }
            asdMemFree(g_sceneResourceWork);
            g_sceneResourceWork = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
