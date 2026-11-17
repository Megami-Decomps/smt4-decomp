#include "addon/aocMain.h"
#include "addon/AocSystemSmt4.h"

extern "C" {

void kernelThreadJoinAndClose(AocWorkerThread *obj);

extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void)
{
    g_aocDisplay->operationActive = 0;
    kernelThreadJoinAndClose(&g_aocMain->thread);
}

} /* extern "C" */
