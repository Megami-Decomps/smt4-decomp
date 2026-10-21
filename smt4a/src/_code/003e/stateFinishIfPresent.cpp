#include "common.h"

extern "C" {

void state339CFinish(void);

extern void *g_btlAux;

void stateFinishIfPresent(void)
{
    if (g_btlAux != NULL) {
        state339CFinish();
    }
}

} /* extern "C" */
