#include "addon/aocMain.h"
#include "addon/AocSystemSmt4.h"

extern "C" {

void kernelThreadJoinAndClose(AocObjA *obj);

extern AocMain *g_aocMain;
extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void)
{
    g_aocDisplay->operationActive = 0;
    kernelThreadJoinAndClose(&g_aocMain->objA);
}

} /* extern "C" */
