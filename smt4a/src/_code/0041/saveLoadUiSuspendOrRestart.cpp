#include "saveLoadUI/SaveLoadTransitionsA.h"
#include "gamedata/SaveLoadUITable.h"
#include "network/DataStore/DataStoreMain.h"
#include "Model/MoriModelManager.h"

extern "C" {
void FUN_002f0384(s32 enabled);
void FUN_0022e774(void);
void buttonHelpSetText(void *text, u32 rgba);

/* Leave for the suspended screen or restart the idle screen for another selection. */
void saveLoadUiSuspendOrRestart(SaveSlotHeaderWork *ui)
{
    if (objBStateAllowsAction() && ui->present[ui->selected]) {
        FUN_002f0384(1);
        ui->suspended = 1;
    }
    FUN_0041de6c(ui);
    if (g_saveLoadUIBase.unk00[1]) {
        if (ui->popup != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, reinterpret_cast<void *>(ui->popup->id));
            if (ui->popup != NULL) {
                delete ui->popup;
                ui->popup = NULL;
            }
        }
        FUN_0022e774();
        saveLoadUiSetMode(ui, 16, 12);
    } else if (!ui->busy) {
        s32 index = ui->recordIndex;
        SaveLoadUIRecord *texts = saveLoadUIRecords();
        buttonHelpSetText(texts[index].help, 0xF4F4F4FF);
        saveLoadUiRestartMode(ui, 4, 0);
        resetSaveLoadTouch(ui, 1);
    }
}
}
