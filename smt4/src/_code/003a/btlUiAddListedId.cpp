#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;
void FUN_0030bc34(BtlUiObjC *obj);

/* Adds `id` to the battle UI's listed ids unless it is already there, then refreshes the column object. */
void btlUiAddListedId(u32 unused, u16 id)
{
    BtlUi *ui = g_btlUi.ui;
    s32 i;

    for (i = 0; i < ui->listedIdCount; i++) {
        if (ui->listedIds[i] == id) {
            break;
        }
    }
    if (i >= ui->listedIdCount) {
        ui->listedIds[ui->listedIdCount] = id;
        ui->listedIdCount++;
    }
    FUN_0030bc34(&ui->objC);
}

} /* extern "C" */
