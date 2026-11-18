#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {

int btlCameraUpdate(void *obj, u32 arg);
u32 jobGetWork(void);

/* If the global object exists, passes it and jobGetWork() to btlCameraUpdate and returns its result; otherwise returns 0. */
int btlDispatchCurrentJob(void)
{
    u32 arg = jobGetWork();

    if (g_btlMain != NULL) {
        return btlCameraUpdate(g_btlMain, arg);
    }
    return 0;
}

} /* extern "C" */
