/* NON_MATCHING: retail uses different loop scheduling, comparison branching or packed parameter grouping. */
#include "battle/btlUI.h"
extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_00289f18(BtlUiObjC *widget, u32 first, u32 second, u32 third, u32 fourth, u32 reserved);
/* Forwards parameters to the battle UI's third widget. */
void FUN_003adc64(u32 unused, u32 second, u32 first, u32 third, u32 fourth)
{
    FUN_00289f18(&g_btlUi.ui->objC, first, second, third, fourth, 0);
}
}
