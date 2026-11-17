#include "battle/BtlUiGlobal.h"

extern "C" {

s32 activityRecordsAreIdle(BtlUiObjAA *obj);


bool FUN_004abb30(void)
{
    return activityRecordsAreIdle(&g_btlUi.ui->objA) != 0;
}

} /* extern "C" */
