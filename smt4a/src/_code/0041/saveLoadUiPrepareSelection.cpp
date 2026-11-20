#include "common.h"
#include "saveLoadUI/SaveLoadTransitionsA.h"
#include "gamedata/SaveLoadUITable.h"
#include "event/2dEvent/SmokeFade.h"

#include "code/Code0028.h"
#include "StaffRoll/StaffRollMain.h"
extern "C" {

s32 byteTripleGetV0(void);
void FUN_0041e58c(SaveSlotHeaderWork *ui);
void statusCameraRestore(s32 arg);
void buttonHelpSetText(void *target, u32 color);

/* Resets the screen into state 13 when the game is ready, showing the current mode's button help. */
void saveLoadUiPrepareSelection(SaveSlotHeaderWork *ui)
{
    s32 index;

    if (gameStateIsNotTransitioning() == 0 || FUN_002857dc() == 0 || byteTripleGetV0() == 0) {
        return;
    }
    FUN_0041e58c(ui);
    resetSaveLoadTouch(ui, 1);
    if (slotIsActive(6) != 0 || slotIsActive(3) != 0 || slotIsActive(12) != 0 || slotIsActive(15) != 0) {
        ui->slotBusy = 1;
        statusCameraRestore(0);
        ui->suspended = 0;
    }
    index = ui->recordIndex;
    SaveLoadUIRecord *texts = saveLoadUIRecords();
    buttonHelpSetText(texts[index].help, 0xf4f4f4ff);
    saveLoadUiRestartMode(ui, 13, 4);
}

} /* extern "C" */
