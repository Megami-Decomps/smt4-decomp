#include "battle/btlUI.h"

extern "C" {

void menu32ModeIsNot3(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aaf80(void)
{
    menu32ModeIsNot3(&DAT_0057a9b8.ui->objA);
}

} /* extern "C" */
