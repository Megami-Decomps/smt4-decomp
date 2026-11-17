#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match5_UnitCategory.h"

extern "C" {
SaveSlotSelectionPrefixA *saveSlotFindSelected(void);
s32 btlCommandMenuEnterMode(SaveSlotTransitionPrefixA *ui, s32 state, s32 immediate);

void saveSlotBeginTransition(SaveSlotTransitionPrefixA *ui, s32 inputCase, u8 option)
{
    if (inputCase == 0)
        ui->zeroInputCase = 1;
    else
        ui->zeroInputCase = 0;
    ui->transitionFlag = 0;
    ui->transitionMode = 4;
    ui->selectedSlotEligible = 0;

    SaveSlotSelectionPrefixA *selected = saveSlotFindSelected();
    if (selected != 0 &&
        (FUN_0019acdc(selected->selectionId, 1) == 1 ||
         FUN_0019acdc(selected->selectionId, 1) == 4)) {
        ui->selectedSlotEligible = 1;
    }

    uiSpriteSelectAnim(&ui->firstSprite, 0x1a);
    uiSpriteSelectAnim(&ui->secondSprite, 0x1a);
    ui->option = option;
    if (ui->currentState == 0x17) {
        ui->pendingState = 0x1f;
        btlCommandMenuEnterMode(ui, 0x18, 1);
        return;
    }
    btlCommandMenuEnterMode(ui, 0x1f, 1);
}
}
