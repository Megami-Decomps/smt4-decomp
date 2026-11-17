#include "addon/aocMain.h"
#include "addon/AocSystemSmt4a.h"

extern "C" {

void FUN_001b3428(AocWorkerThread *obj);

extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void *system)
{
    g_aocDisplay->operationActive = 0;
    FUN_001b3428(&g_aocMain->thread);
}

} /* extern "C" */
