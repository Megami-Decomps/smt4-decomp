#include "battle/btlCamera.h"

extern "C" {

extern BtlCameraA *g_btlCamera;

int FUN_004f2c40(void *obj, u32 arg);
u32 jobGetWork(void);

/* If the global object exists, passes it and jobGetWork() to FUN_004f2c40 and returns its result; otherwise returns 0. */
int btlCameraDispatchCurrentJob(void)
{
    u32 arg = jobGetWork();

    if (g_btlCamera != NULL) {
        return FUN_004f2c40(g_btlCamera, arg);
    }
    return 0;
}

} /* extern "C" */
