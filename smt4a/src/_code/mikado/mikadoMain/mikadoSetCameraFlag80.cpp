/* NON_MATCHING: retail tail-calls a local code label (no symbol) for the camera access instead of inlining it */
/* Sets bit 0x80 of the mikado camera's flags, if there is a camera. */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

extern MikadoGlobals g_mikado;

void mikadoSetCameraFlag80(void)
{
    MikadoCamera *camera = NULL;

    if (g_mikado.work != NULL) {
        camera = g_mikado.work->camera;
    }
    if (g_mikado.work == NULL || camera == NULL) {
        return;
    }
    camera->flags |= 0x80;
}

} /* extern "C" */
