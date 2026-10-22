#include "addon/aocMain.h"

extern "C" {

void FUN_001b3428(AocObjA *obj);

extern AocMain *g_aocMain;
extern AocDisplay *g_aocDisplay;

void aocClearDisplayFlag(void)
{
    g_aocDisplay->operationActive = 0;
    FUN_001b3428(&g_aocMain->objA);
}

} /* extern "C" */
