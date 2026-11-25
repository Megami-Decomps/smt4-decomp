#include "battle/BtlUiGlobal.h"

/* Reports the target panel's confirmation flag, selected targets and extra selection value. */
extern "C" void btlUiCopyStatePairs(BtlUi *, u8 *confirmed, u64 *targets, u64 *extra)
{
    const BtlUi *ui = g_btlUi.ui;
    *confirmed = ui->panelState.pairFlag;
    *targets = ui->panelState.selectedTargets;
    *extra = ui->panelState.selectionExtra;
}
