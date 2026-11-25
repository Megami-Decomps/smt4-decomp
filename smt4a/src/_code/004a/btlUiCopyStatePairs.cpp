#include "battle/BtlUiGlobal.h"

/* Reports the target panel's confirmation flag, selected targets and extra selection value. */
extern "C" void btlUiCopyStatePairs(BtlUiA *, u8 *confirmed, u64 *targets, u64 *extra)
{
    const BtlUiA *ui = g_btlUi.ui;
    *confirmed = ui->pairFlag;
    *targets = ui->selectedTargets;
    *extra = ui->selectionExtra;
}
