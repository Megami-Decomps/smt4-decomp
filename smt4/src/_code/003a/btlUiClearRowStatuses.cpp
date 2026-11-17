#include "battle/BtlUiGlobal.h"

extern "C" {
void btlUiClearRowStatuses()
{
    BtlUi *ui = g_btlUi.ui;
    for (s32 i = 0; i < 5; ++i) {
        ui->objC.unitRecords.records[i].unitId = 0;
    }
}
}
