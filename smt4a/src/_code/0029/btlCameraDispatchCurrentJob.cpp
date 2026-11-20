#include "battle/btlCamera.h"
#include "battle/BtlGlobals.h"

extern "C" {


int btlCameraJobDispatch(void *obj, u32 arg);
u32 jobGetWork(void);

/* If the global object exists, passes it and jobGetWork() to btlCameraJobDispatch and returns its result; otherwise returns 0. */
int btlCameraDispatchCurrentJob(void)
{
    u32 arg = jobGetWork();

    if (g_btlCamera != NULL) {
        return btlCameraJobDispatch(g_btlCamera, arg);
    }
    return 0;
}

} /* extern "C" */
