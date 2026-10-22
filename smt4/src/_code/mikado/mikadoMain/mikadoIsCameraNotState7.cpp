/* Returns 0 while the mikado camera is in state 7, otherwise 1 (also 1 when there is no camera). */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

extern MikadoGlobals g_mikado;
extern s32 mikadoCameraStateIsNotSeven(const MikadoCamera *camera);

s32 mikadoIsCameraNotState7(void)
{
    MikadoCamera *camera = NULL;

    if (g_mikado.work != NULL) {
        camera = g_mikado.work->camera;
    }
    if (g_mikado.work != NULL && camera != NULL) {
        return mikadoCameraStateIsNotSeven(camera);
    }
    return 1;
}

} /* extern "C" */
