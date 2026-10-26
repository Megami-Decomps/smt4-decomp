#include "battle/btlUI.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {

void workTablesClear(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void btlUIClearWorkTables(void)
{
    workTablesClear(&g_btlUi.ui->objC);
}

} /* extern "C" */
