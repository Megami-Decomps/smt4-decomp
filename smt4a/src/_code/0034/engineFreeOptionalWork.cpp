#include "common.h"

extern "C" {

extern void *g_engineOptionalWork;
void asdMemFree(void *block);

void engineFreeOptionalWork(void)
{
    if (g_engineOptionalWork != NULL) {
        asdMemFree(g_engineOptionalWork);
        g_engineOptionalWork = NULL;
    }
}

} /* extern "C" */
