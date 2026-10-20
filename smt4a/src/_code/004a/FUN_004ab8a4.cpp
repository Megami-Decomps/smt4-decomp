#include "battle/btlUI.h"

extern "C" {

void menu32NotInState1F(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004ab8a4(void)
{
    menu32NotInState1F(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
