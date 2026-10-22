/* NON_MATCHING: the menu sub-object pointer is retained across refresh instead of recomputed afterwards. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
void fillTwoWordsWithByte(void *destination, u32 value);
u16 uiFindValidIdOrdinal(u32 source, u32 ordinal);
void FUN_001a9104(BtlUiObjCA *menu, const u16 *ids);
void menu32Advance(BtlUiObjCA *menu);
void uiMenuActivateAndCountEntries(BtlUiObjCA *menu);

void FUN_004aa2e0(void *context, s32 advance)
{
    BtlUiA *ui = g_btlUi.ui;
    fillTwoWordsWithByte(ui->ids, 0xffffffff);
    ui->ids[0] = uiFindValidIdOrdinal(ui->owner, 0);
    ui->ids[1] = uiFindValidIdOrdinal(ui->owner, 1);
    ui->ids[2] = uiFindValidIdOrdinal(ui->owner, 2);
    ui->ids[3] = uiFindValidIdOrdinal(ui->owner, 3);
    FUN_001a9104(&ui->objC, ui->ids);
    if (advance) {
        menu32Advance(&ui->objC);
    } else {
        uiMenuActivateAndCountEntries(&ui->objC);
    }
}
}
