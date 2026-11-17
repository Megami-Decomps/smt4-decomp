#include "battle/BtlUiGlobal.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {

void workTablesClear(BtlUiObjCA *obj);


void btlUIClearWorkTables(void)
{
    workTablesClear(&g_btlUi.ui->objC);
}

} /* extern "C" */
