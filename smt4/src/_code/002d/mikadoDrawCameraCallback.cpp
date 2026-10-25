#include "mikado/mikadoMain.h"

extern "C" {
extern MikadoGlobals g_mikado;
s32 FUN_003ba63c(void);

// Draw the camera while the mikado controller is running or shutting down.
s32 mikadoDrawCameraCallback(u32 handle)
{
    MikadoWork *work = g_mikado.work;
    MikadoCamera *camera;
    if (work->state == 1 || work->state == 2 || work->state == 3) {
        camera = NULL;
        if (work != NULL)
            camera = work->camera;
        if (work != NULL && camera != NULL)
            FUN_003ba63c();
    }
    return 0;
}
}
