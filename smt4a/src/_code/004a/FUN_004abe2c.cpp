#include "battle/BtlUiOpening.h"

extern "C" {

// Open the battle selection widgets and populate their four valid party-entry identifiers,
// optionally announcing an enemy first strike.
void FUN_004abe2c(BtlUiA *unused, s32 mode, s8 first, s8 second, bool firstStrike, bool options)
{
    BtlUiOpeningView *ui = reinterpret_cast<BtlUiOpeningView *>(g_btlUi.ui);
    ui->opening.state = 3;
    ui->opening.counter = 0;
    ui->opening.mode = mode;
    ui->opening.first = first;
    ui->opening.second = second;
    eventPanelSelectSpritePreset(&ui->base.objB, mode, options, mode == 0 ? 0 : firstStrike, 1);
    statusPanelResetRows(&ui->base.objA, ui->opening.mode, ui->opening.first, ui->opening.second);
    if (mode == 1 && firstStrike) {
        ui->notice.active = 1;
        ui->notice.duration = 40;
        ui->notice.frame = 0;
        // Full-width Shift-JIS: "The enemy strikes first!"
        btlMenuSetMessageText("\x82\x73\x82\x88\x82\x85\x81\x40\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x99\x81\x40\x82\x93\x82\x94\x82\x92\x82\x89\x82\x8b\x82\x85\x82\x93\x81\x40\x82\x86\x82\x89\x82\x92\x82\x93\x82\x94\x81\x49");
        menuStateReset();
        menuStateStartSelect(0);
    }
    if (options != 0 || mode != 0) {
        BtlUiA *current = g_btlUi.ui;
        fillTwoWordsWithByte(current->ids, 0xFFFFFFFF);
        current->ids[0] = uiFindValidIdOrdinal(current->owner, 0);
        current->ids[1] = uiFindValidIdOrdinal(current->owner, 1);
        current->ids[2] = uiFindValidIdOrdinal(current->owner, 2);
        current->ids[3] = uiFindValidIdOrdinal(current->owner, 3);
        btlUiCopyIdList(&current->objC, current->ids);
        if (mode != 0)
            menu32Advance(&ui->base.objC);
        else
            uiMenuActivateAndCountEntries(&ui->base.objC);
    }
}
}
