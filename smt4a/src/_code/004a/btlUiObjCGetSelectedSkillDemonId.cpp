#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_003bcf20(BtlUiObjCA *obj);


void btlUiObjCGetSelectedSkillDemonId(void)
{
    FUN_003bcf20(&g_btlUi.ui->objC);
}

} /* extern "C" */
