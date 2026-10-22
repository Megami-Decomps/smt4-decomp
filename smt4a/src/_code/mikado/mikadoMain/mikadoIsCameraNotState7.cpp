/* Returns 0 while the mikado camera is in state 7, otherwise 1 (also 1 when there is no camera). */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

extern MikadoGlobals g_mikado;
u8 mikadoCameraStateIsNotSeven(const MikadoCamera *camera);

u8 mikadoIsCameraNotState7(void)
{
    if (g_mikado.work != NULL && g_mikado.work->camera != NULL) {
        return mikadoCameraStateIsNotSeven(g_mikado.work->camera);
    }
    return 1;
}

} /* extern "C" */
