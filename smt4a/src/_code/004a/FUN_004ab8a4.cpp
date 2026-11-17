#include "battle/BtlUiGlobal.h"

extern "C" {

void menu32NotInState1F(BtlUiObjCA *obj);


void FUN_004ab8a4(void)
{
    menu32NotInState1F(&g_btlUi.ui->objC);
}

} /* extern "C" */
