#include "battle/BtlUiGlobal.h"

// Clear the unit id of each of the battle UI's unit records.
extern "C" void btlUiClearEntryStates()
{
    BtlUiA* ui = g_btlUi.ui;
    for (s32 index = 0; index < 5; ++index) {
        ui->unitRecords.records[index].unitId = 0;
    }
}
