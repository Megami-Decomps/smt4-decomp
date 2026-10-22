/* Sets bit 0x80 of the mikado camera's flags, if there is a camera. */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

extern MikadoGlobals g_mikado;
void mikadoEnableCameraUpdate(MikadoCamera *camera);

void mikadoSetCameraFlag80(void)
{
    MikadoWork *work = g_mikado.work;
    if (work != NULL && work->camera != NULL) {
        mikadoEnableCameraUpdate(work->camera);
    }
}

} /* extern "C" */
