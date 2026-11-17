#include "battle/BtlUiGlobal.h"
extern "C" {
int menu32ModeIsNot6(void *menu);
int spriteOperationGetModeThreeCompletion(void *section);
/* Tests the active menu mode and the section's readiness. */
int btlUiIsMenuReady(){BtlUiA *ui=g_btlUi.ui;return menu32ModeIsNot6(&ui->objA)!=0 && spriteOperationGetModeThreeCompletion(&ui->objB)!=0;}
}
