#include "addon/aocMain.h"
#include "addon/AocSystemSmt4.h"

extern "C" {

void FUN_002ba8f4(AocObjA *obj);

extern AocMain *g_aocMain;
extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void)
{
    g_aocDisplay->operationActive = 0;
    FUN_002ba8f4(&g_aocMain->objA);
}

} /* extern "C" */
