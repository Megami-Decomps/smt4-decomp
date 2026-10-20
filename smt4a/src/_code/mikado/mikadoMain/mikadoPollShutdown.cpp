/* Polls the mikado controller's shutdown: returns 1 while its task is running or hasn't finished;
 * otherwise deletes its camera, frees the work area and returns 0. */
#include "common.h"
#include "mikado/mikadoMain.h"

extern "C" {

int FUN_0019e290(void);
int asdOperatorDelete(int object);
int jobFind(u32 task);                /* nonzero while the task exists */
int asdMemFree(void *ptr);               /* heap free */
extern int FUN_004d08d0(u8 *sub);

extern MikadoGlobals g_mikado;

u32 mikadoPollShutdown(void)
{
    MikadoWork *work = g_mikado.work;

    if (work != NULL) {
        if (jobFind(work->task) != 0 || work->done == 0) {
            return 1;
        }
        work = g_mikado.work;
        if (work != NULL) {
            work->done = 1;
            if (work->camera != NULL) {
                FUN_0019e290();
                if (work->camera != NULL) {
                    asdOperatorDelete(FUN_004d08d0(&work->camera->sub) - 0x110);
                }
                work->camera = NULL;
            }
            asdMemFree(g_mikado.work);
            g_mikado.work = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
