/* NON_MATCHING: Save eligibility-flag materialization and shared-global address formation differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
SaveSlotSelectionPrefixA *saveSlotFindSelected(void);
s32 FUN_0019acdc(u16 selectionId, u32 mode);
s32 uiSpriteSelectAnim(UiSpriteState *sprite, s32 animation);
s32 FUN_0020ad6c(SaveSlotTransitionPrefixA *ui, s32 state, s32 immediate);

void FUN_0034ee5c(SaveSlotTransitionPrefixA *ui, s32 inputCase, u8 option)
{
    ui->zeroInputCase = inputCase == 0 ? 1 : 0;
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
        FUN_0020ad6c(ui, 0x18, 1);
        return;
    }
    FUN_0020ad6c(ui, 0x1f, 1);
}
}
