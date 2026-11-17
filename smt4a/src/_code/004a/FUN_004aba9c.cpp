#include "battle/BtlUiGlobal.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {


bool FUN_004aba9c(u32 arg0)
{
    return g_btlUi.ui->state != 0x10 && g_btlUi.ui->state != 0xC;
}

} /* extern "C" */
