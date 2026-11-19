/* NON_MATCHING: the mode change's registers agree with retail; its step store comes after the mode and previous-mode stores (retail: first), and the arguments of FUN_0041f020 are set up in the other order. */
#include "common.h"
#include "shard/SaveSlotHeaderWork.h"
#include "gamedata/SaveLoadUITable.h"
#include "event/2dEvent/SmokeFade.h"

#include "code/Code0028.h"
#include "StaffRoll/StaffRollMain.h"
extern "C" {

s32 byteTripleGetV0(void);
void FUN_0041e58c(SaveSlotHeaderWork *ui);
void FUN_0041f020(SaveSlotHeaderWork *ui, s32 arg);
void FUN_002f0384(s32 arg);
void buttonHelpSetText(void *target, u32 color);

/* Resets the screen into state 13 when the game is ready, showing the current mode's button help. */
void FUN_0041f4c0(SaveSlotHeaderWork *ui)
{
    s32 index;

    if (FUN_0023b3d0() == 0 || FUN_002857dc() == 0 || byteTripleGetV0() == 0) {
        return;
    }
    FUN_0041e58c(ui);
    ui->pending = 0;
    ui->confirmed = 0;
    ui->canceled = 0;
    FUN_0041f020(ui, 1);
    if (slotIsActive(6) != 0 || slotIsActive(3) != 0 || slotIsActive(12) != 0 || slotIsActive(15) != 0) {
        ui->slotBusy = 1;
        FUN_002f0384(0);
        ui->suspended = 0;
    }
    index = ui->recordIndex;
    SaveLoadUIRecord *texts = saveLoadUIRecords();
    buttonHelpSetText(texts[index].help, 0xf4f4f4ff);
    saveLoadUiChangeMode(ui, 13, 4);
}

} /* extern "C" */
