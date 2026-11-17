/* NON_MATCHING: retail uses different loop scheduling, comparison branching or packed parameter grouping. */
#include "battle/BtlUiGlobal.h"
/* Copies the battle UI's flag and both value pairs to the caller. */
extern "C" void btlUiCopyStatePairs(u32 unused, u8 *flag, BtlUiValuePair *first, BtlUiValuePair *second)
{
    BtlUi *ui = g_btlUi.ui;
    *flag = ui->panelState.pairFlag;
    *first = ui->panelState.firstPair;
    *second = ui->panelState.secondPair;
}
