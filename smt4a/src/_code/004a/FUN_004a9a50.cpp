#include "battle/BtlUiGlobal.h"
#include "battle/BtlStatusPanelA.h"

extern "C" {
/* Selects the battle turn-icon panel and forwards both requested changes. */
void FUN_004a9a50(void *unused,s32 firstDelta,s32 secondDelta)
{
    statusPanelStartRowChange((StatusPanel *)&g_btlUi.ui->objA, firstDelta, secondDelta);
}
}
