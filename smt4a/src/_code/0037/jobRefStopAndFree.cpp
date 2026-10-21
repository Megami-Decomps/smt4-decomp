#include "shard/Shard0037.h"

extern "C" {

extern JobRef *g_freeCamera;
extern void jobStop(u32 job, u16 arg);
extern void asdOperatorDelete(JobRef *ref);

void jobRefStopAndFree(void)
{
    jobStop(g_freeCamera->job, 0);
    if (g_freeCamera != NULL) {
        asdOperatorDelete(g_freeCamera);
        g_freeCamera = NULL;
    }
}

} /* extern "C" */
