#include "battle/BtlUiGlobal.h"

extern "C" {
int menu32ModeIsNot5(void *menu);
int btlUiPanelOperationIsAllowed(void *section);
/* Tests the active menu mode and the section's readiness. */
int FUN_004abac8(){BtlUiA *screen=g_btlUi.ui;return menu32ModeIsNot5(&screen->objA)!=0 && btlUiPanelOperationIsAllowed(&screen->objB)!=0;}
}
