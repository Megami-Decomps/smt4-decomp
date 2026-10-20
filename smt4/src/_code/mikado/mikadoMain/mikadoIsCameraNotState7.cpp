/* NON_MATCHING: retail tail-calls a local code label (no symbol) for the camera access instead of inlining it */
/* Returns 0 while the mikado camera is in state 7, otherwise 1 (also 1 when there is no camera). */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

extern MikadoGlobals g_mikado;

u8 mikadoIsCameraNotState7(void)
{
    MikadoCamera *camera = NULL;

    if (g_mikado.work != NULL) {
        camera = g_mikado.work->camera;
    }
    if (g_mikado.work != NULL && camera != NULL) {
        return camera->state != 7;
    }
    return 1;
}

} /* extern "C" */
