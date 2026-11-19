#include "battle/BtlUiGlobal.h"
#include "code/Code003a.h"

extern "C" {

void menu32InitBlock96C(BtlUiObjC *obj);


void FUN_003ae620(void)
{
    menu32InitBlock96C(&g_btlUi.ui->objC);
}

} /* extern "C" */
