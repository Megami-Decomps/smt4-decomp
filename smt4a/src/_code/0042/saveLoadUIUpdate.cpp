#include "common.h"
#include <string.h>
#include "sys/RuntimeObjects.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "camp/CampMenuEntry.h"
#include "gamedata/GameFlags.h"
#include "gamedata/SavedUnitSelection.h"
#include "network/DataStore/DataStoreMain.h"
#include "test/BustupViewer.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code002e.h"
#include "ui/UiSpriteApi.h"
#include "shard/SaveSlotHeaderWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

struct DataBlockTable {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u8 mode;   /* 2: the save counts toward the capped counter */
};

extern "C" {
void saveLoadUIStart(SaveSlotHeaderWork *ui);
void saveLoadUiPrepareSelection(SaveSlotHeaderWork *ui);
void FUN_0041f22c(SaveSlotHeaderWork *ui);
void saveLoadUiWaitPopupDismissed(SaveSlotHeaderWork *ui);
void saveLoadUiSuspendOrRestart(SaveSlotHeaderWork *ui);
void saveLoadUiRestartSpritesAndWait(SaveSlotHeaderWork *ui);
void saveLoadUiRestartSlotSpritesAndWait(SaveSlotHeaderWork *ui);
void spriteListMenuResetSprites(SaveSlotHeaderWork *ui, s32 resetHeader);
void FUN_0041dbdc(SaveSlotHeaderWork *ui, bool selected);
void saveMenuCacheSlotHeadersStep(SaveSlotHeaderWork *ui);
DataBlockTable *gameDataBlocksGetTable(void);

void messageMainSetFlag(s32 value);
void sysPlaySe(s32 id);
void gameDataIncrementCounterCapped(void);
void saveLoadUiSnapshotGameData(void);
}

/* Copies the edited tables, settings and save data back into the game. */
static __inline void saveLoadUiCommit(SaveSlotHeaderWork *ui)
{
    __aeabi_memcpy4(gameDataBlocksGetTable(), ui->tableBuffer, 128);
    memcpy(configGetSettings(), ui->settingsBuffer, 8);
    __aeabi_memcpy4(gameDataBlocksGetSaveData(), ui->saveBuffer, 0x2A71C);
}

/* Per-frame update of the save/load screen: one mode per step of the flow. */
extern "C" void saveLoadUIUpdate(SaveSlotHeaderWork *ui)
{
    switch (ui->mode) {
    case 1:
        saveLoadUIStart(ui);
    case 2:
        FUN_0041f6e0((SavedUnitSelection *)ui);
        break;
    case 3:
        saveLoadUiPrepareSelection(ui);
        break;
    case 4:
        FUN_0041f22c(ui);
        break;
    case 5:
        saveLoadUiWaitPopupDismissed(ui);
        break;
    case 6:
        if (gameGlobalsIsActiveStateFour() == 0) {
            break;
        }
        saveLoadUiCommit(ui);
        if (g_saveLoadUIBase.setFlag470 != 0 && !gameFlagIsSet(0x470)) {
            gameFlagSetValue(0x470, 1, 1);
        }
        if (g_saveLoadUIBase.setFlag471 != 0 && !gameFlagIsSet(0x471)) {
            gameFlagSetValue(0x471, 1, 1);
        }
        buttonHelpTransitionPresetFlags(3);
        ui->selected = g_saveLoadUIBase.selectedValue;
        saveLoadUiSetMode(ui, 22, 0);
        /* Fall through: the flow is finished. */
    case 22:
        ui->finished = 1;
        break;
    case 7:
        gameDataAddHomeButtonHold(1);
        ui->flag0f = 0;
        ui->flag10 = 0;
        ui->flag11 = 0;
        ui->flag0e = 1;
        messageMainSetFlag(0);
        scrScriptProcessStartEntry(ui->script, 4);
        sysPlaySe(157);
        saveLoadUiChangeMode(ui, 8, 0);
    case 8:
        savedUnitEditorApplyOrClose((SavedUnitSelection *)ui);
        break;
    case 9:
        switch (ui->step) {
        case 0:
            if (buttonHelpStateIsNot3() == 0) {
                return;
            }
            if (gameGlobalsIsActiveStateFour() == 0) {
                return;
            }
            slotSetRequest(0, 12, 255);
            slotSetRequest(1, 12, 255);
            ui->step++;
        case 1:
            if (pairedAvailabilityBothReady() == 0) {
                return;
            }
            if (gameDataBlocksGetTable()->mode == 2) {
                gameDataIncrementCounterCapped();
            }
            saveLoadUiSnapshotGameData();
            saveLoadUiCommit(ui);
            saveLoadUiChangeMode(ui, 22, 0);
            break;
        }
        break;
    case 10:
        scrScriptProcessStartEntry(ui->script, ui->present[ui->selected] == 0 ? 7 : 0);
        gameDataAddHomeButtonHold(1);
        ui->flag0f = 0;
        ui->flag0e = 0;
        sysPlaySe(146);
        saveLoadUiChangeMode(ui, 11, 0);
        break;
    case 11:
        saveLoadUiSuspendOrRestart(ui);
        break;
    case 12:
        if (gameGlobalsIsActiveStateFour() != 0) {
            saveLoadUiChangeMode(ui, 22, 0);
        }
        break;
    case 13:
        saveLoadUiRestartSpritesAndWait(ui);
        break;
    case 14:
        saveLoadUiRestartSlotSpritesAndWait(ui);
        break;
    case 15:
        saveLoadUiWaitSprites(ui);
        break;
    case 16:
        spriteListMenuResetSprites(ui, 1);
        /* Waits in mode 18; the pending mode stays queued. */
        saveLoadUiChangeMode(ui, 18, ui->phase);
        saveLoadUiWaitSprites(ui);
        break;
    case 17:
        spriteListMenuResetSprites(ui, 0);
        saveLoadUiChangeMode(ui, 18, ui->phase);
        saveLoadUiWaitSprites(ui);
        break;
    case 18:
        saveLoadUiWaitSprites(ui);
        break;
    case 19:
        if (objBStateAllowsAction() != 0) {
            ui->popupActive = 0;
            if (ui->isLoad != 0) {
                FUN_0041dbdc(ui, 0);
            } else {
                FUN_0041dbdc(ui, 1);
            }
            saveLoadUiChangeMode(ui, 14, 4);
        }
        break;
    case 20:
        saveMenuCacheSlotHeadersStep(ui);
        break;
    case 21:
        if (scrRunOpcodesStub(ui->script) == 2) {
            u8 next = ui->phase;
            if (next != 0) {
                saveLoadUiChangeMode(ui, next, 0);
            } else {
                saveLoadUiChangeMode(ui, 19, 0);
            }
        }
        break;
    }
}
