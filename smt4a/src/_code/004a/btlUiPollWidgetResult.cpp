#include "battle/BtlUiGlobal.h"

extern "C" {

int btlUiWidgetStateIsIdle(BtlUiObjCA *obj);
int btlMenuResolveHighlightedCommand(BtlUiObjCA *obj, u16 *idA, u16 *idB);


/* Polls the widget; when it reports a result, reads its two ids and switches the UI state to 0xE or 0. */
int btlUiPollWidgetResult(void)
{
    BtlUiA *ui = g_btlUi.ui;
    int result;

    if (ui->state == 0xF) {
        return 0;
    }
    result = btlUiWidgetStateIsIdle(&ui->objC);
    if (result != 0) {
        btlMenuResolveHighlightedCommand(&ui->objC, &ui->unk74B6, &ui->unk74B8);
        ui->state = (ui->unk74B6 == 0xE) ? 0xE : 0;
    }
    return result;
}

} /* extern "C" */
