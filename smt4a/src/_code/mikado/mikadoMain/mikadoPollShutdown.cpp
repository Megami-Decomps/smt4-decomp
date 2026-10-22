/* Polls the mikado controller's shutdown: returns 1 while its task is running or hasn't finished;
 * otherwise deletes its camera, frees the work area and returns 0. */
#include "common.h"
#include "mikado/mikadoMain.h"
#include <stddef.h>

extern "C" {

int FUN_0019e290(MikadoCamera *camera);
void asdOperatorDelete(void *object);
int jobFind(u32 task);                /* nonzero while the task exists */
int asdMemFree(void *ptr);               /* heap free */
extern u8 *_ZN9Obj55ca08D1Ev(u8 *sub);

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
                FUN_0019e290(work->camera);
                if (work->camera != NULL) {
                    asdOperatorDelete(_ZN9Obj55ca08D1Ev(&work->camera->sub) - offsetof(MikadoCamera, sub));
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
