/* Polls the shop's shutdown: returns 1 while its task is still running or hasn't
 * finished, otherwise frees the work area and returns 0. */
#include "common.h"
#include "shop/shopMain.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int jobFind(u32 task);                  /* nonzero while the task exists */

extern ShopWork *g_shop;

u32 shopPollShutdown(void)
{
    ShopWork *work = g_shop;

    if (g_shop != NULL) {
        if (jobFind(work->task) != 0 || !work->done) {
            return 1;
        }
        if (g_shop != NULL) {
            asdMemFree(g_shop);
            g_shop = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
