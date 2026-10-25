#include "battle/BtlUiObjCQuery.h"

extern "C" {

extern BtlUiGlobalsA g_btlUi;

u32 FUN_004aa750(u32 block)
{
    return FUN_002f934c(&g_btlUi.ui->objC);
}

} /* extern "C" */
