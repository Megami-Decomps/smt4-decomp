#include "battle/btlUI.h"

extern "C" {

void menu32NotInState1F(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ab8a4(void)
{
    menu32NotInState1F(&g_btlUi.ui->objC);
}

} /* extern "C" */
