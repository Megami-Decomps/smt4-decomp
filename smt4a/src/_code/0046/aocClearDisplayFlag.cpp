#include "addon/aocMain.h"
#include "addon/AocSystemSmt4a.h"

extern "C" {

void nnOsThreadImplDestroy(AocWorkerThread *obj);

extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void *system)
{
    g_aocDisplay->operationActive = 0;
    nnOsThreadImplDestroy(&g_aocMain->thread);
}

} /* extern "C" */
