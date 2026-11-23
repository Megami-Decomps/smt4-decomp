#include "battle/BtlUiGlobal.h"
extern "C" {
/* Forwards parameters to the battle UI's third widget. */
void FUN_003adc64(u32 unused, s32 slot, s32 amount, u8 mode, s8 kind)
{
    BtlUi *ui = g_btlUi.ui;
    btlUiSlotMeterStart(&ui->objC, amount, slot, mode, kind, 0);
}
}
