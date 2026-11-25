#include "battle/BtlUiGlobal.h"
#include "battle/BtlStatusPanelA.h"

extern "C" {

/* Forward the two signed row deltas to the active battle status panel. */
void FUN_004aaa80(void *unused, s8 addedRows, s8 closingRows)
{
    statusPanelAnimateRowChange((StatusPanel *)&g_btlUi.ui->objA, addedRows, closingRows);
}

} /* extern "C" */
