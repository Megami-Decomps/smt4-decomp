#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;int menu32ModeIsNot5(void*);int FUN_00280030(void*);
/* Tests the active menu mode and the section's readiness. */
int FUN_004abac8(){BtlUiA *screen=g_btlUi.ui;return menu32ModeIsNot5(&screen->objA)!=0 && FUN_00280030(&screen->objB)!=0;}
}
