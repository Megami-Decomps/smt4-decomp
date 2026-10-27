#include "battle/btlUI.h"
extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_00289f18(BtlUiObjC *widget, u32 first, u32 second, u32 third, u32 fourth, u32 reserved);
/* Forwards parameters to the battle UI's third widget. */
void FUN_003adc64(u32 unused, u32 second, u32 first, u32 third, u32 fourth)
{
    BtlUi *ui = g_btlUi.ui;
    FUN_00289f18(&ui->objC, first, second, third, fourth, 0);
}
}
