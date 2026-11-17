#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_003009fc(BtlUiObjC *obj);


void FUN_003af06c(void)
{
    FUN_003009fc(&g_btlUi.ui->objC);
}

} /* extern "C" */
