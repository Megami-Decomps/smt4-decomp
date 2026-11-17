#include "battle/BtlUiGlobal.h"

extern "C" {


void uiObjectClearRequestState(void *object);

/* Adds `id` to the battle UI request list unless it is already there, then clears the request state. */
void btlUiAddRequest(u32 unused, u16 id)
{
    BtlUiA *ui = g_btlUi.ui;
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
    uiObjectClearRequestState(&ui->objC);
}

} /* extern "C" */
