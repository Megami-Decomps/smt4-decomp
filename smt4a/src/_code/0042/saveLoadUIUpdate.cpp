/* NON_MATCHING: all 22 mode handlers, the jump table and the sprite waits (modes 15-18) agree with retail; what differs is
 * scheduling around the mode changes: modes 16/17 store the new mode and the step before the remembered mode, mode 19 clears
 * the step first, mode 21 loads the old mode before testing the pending one, modes 6 and 9 hold the final 1 in r0 (here r1),
 * and retail shares mode 22 with the tail of mode 6 and the hand-back of mode 12 with the waits where armcc here keeps the
 * first wait's copy. */
#include "common.h"
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

struct DataBlockTable {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u8 mode;   /* 2: the save counts toward the capped counter */
};

extern "C" {
extern SaveLoadUiSharedPrefixA g_saveLoadUIBase;
void saveLoadUIStart(SaveSlotHeaderWork *ui);
void FUN_0041f6e0(SaveSlotHeaderWork *ui);
void FUN_0041f4c0(SaveSlotHeaderWork *ui);
void FUN_0041f22c(SaveSlotHeaderWork *ui);
void FUN_0041f110(SaveSlotHeaderWork *ui);
void FUN_0041ed4c(SaveSlotHeaderWork *ui);
void FUN_0041eeec(SaveSlotHeaderWork *ui);
void FUN_0041f5bc(SaveSlotHeaderWork *ui);
void FUN_0041fd5c(SaveSlotHeaderWork *ui);
void FUN_00420a2c(SaveSlotHeaderWork *ui);
void FUN_0041e3a0(SaveSlotHeaderWork *ui, s32 resetHeader);
void FUN_0041dbdc(SaveSlotHeaderWork *ui, s32 flag);
void saveMenuCacheSlotHeadersStep(SaveSlotHeaderWork *ui);
void scrScriptProcessStartEntry(ScriptProcess *script, s32 index);
DataBlockTable *gameDataBlocksGetTable(void);
void __ARM_common_memcpy4_8(void *destination, const void *source);

void messageMainSetFlag(s32 value);
void sysPlaySe(s32 id);
void gameDataIncrementCounterCapped(void);
void FUN_002ac390(void);
}

/* Moves to another mode, remembering the one it leaves. */
static __inline void saveLoadUiEnterMode(SaveSlotHeaderWork *ui, s32 mode)
{
    ui->previousMode = ui->mode;
    ui->mode = mode;
    ui->step = 0;
}

/* Moves to another mode and sets the one to follow it. */
static __inline void saveLoadUiChangeMode(SaveSlotHeaderWork *ui, s32 mode, s32 next)
{
    saveLoadUiEnterMode(ui, mode);
    ui->phase = next;
}

/* Switches to another mode: the new mode is stored first, then the one it replaces. */
static __inline void saveLoadUiSetMode(SaveSlotHeaderWork *ui, u8 mode)
{
    u8 previous = ui->mode;

    ui->mode = mode;
    ui->previousMode = previous;
    ui->step = 0;
}

/* Goes to a mode with nothing queued after it; arriving at mode 22 hands the selection back to the shared base. */
static __inline void saveLoadUiGoTo(SaveSlotHeaderWork *ui, s32 mode)
{
    saveLoadUiSetMode(ui, mode);
    ui->phase = 0;
    if (ui->mode == 22) {
        g_saveLoadUIBase.selectedValue = ui->selected;
        ui->finished = 1;
    }
}

/* Advances the slot sprites; once the last one has settled, leaves for the pending mode (arriving at
 * mode 22 hands the selection back to the shared base). */
static __inline void saveLoadUiWaitSprites(SaveSlotHeaderWork *ui)
{
    FUN_00420a2c(ui);
    if (uiSpriteGetCompletionState(&ui->sprites[ui->spriteCount]) != 0) {
        saveLoadUiEnterMode(ui, ui->phase);
        ui->phase = 0;
        if (ui->mode == 22) {
            g_saveLoadUIBase.selectedValue = ui->selected;
            ui->finished = 1;
        }
    }
}

/* Copies the edited tables, settings and save data back into the game. */
static __inline void saveLoadUiCommit(SaveSlotHeaderWork *ui)
{
    __aeabi_memcpy4(gameDataBlocksGetTable(), ui->tableBuffer, 128);
    __ARM_common_memcpy4_8(configGetSettings(), ui->settingsBuffer);
    __aeabi_memcpy4(gameDataBlocksGetSaveData(), ui->saveBuffer, 0x2A71C);
}

/* Per-frame update of the save/load screen: one mode per step of the flow. */
extern "C" void saveLoadUIUpdate(SaveSlotHeaderWork *ui)
{
    switch (ui->mode) {
    case 1:
        saveLoadUIStart(ui);
    case 2:
        FUN_0041f6e0(ui);
        break;
    case 3:
        FUN_0041f4c0(ui);
        break;
    case 4:
        FUN_0041f22c(ui);
        break;
    case 5:
        FUN_0041f110(ui);
        break;
    case 6:
        if (FUN_0026c3a0() != 0) {
            saveLoadUiCommit(ui);
            if (g_saveLoadUIBase.setFlag470 != 0 && !gameFlagIsSet(0x470)) {
                gameFlagSetValue(0x470, 1, 1);
            }
            if (g_saveLoadUIBase.setFlag471 != 0 && !gameFlagIsSet(0x471)) {
                gameFlagSetValue(0x471, 1, 1);
            }
            FUN_00168980(3);
            ui->selected = g_saveLoadUIBase.selectedValue;
            saveLoadUiChangeMode(ui, 22, 0);
            ui->finished = 1;
        }
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
        FUN_0041ed4c(ui);
        break;
    case 9:
        switch (ui->step) {
        case 0:
            if (buttonHelpStateIsNot3() == 0) {
                return;
            }
            if (FUN_0026c3a0() == 0) {
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
            FUN_002ac390();
            saveLoadUiCommit(ui);
            saveLoadUiChangeMode(ui, 22, 0);
            g_saveLoadUIBase.selectedValue = ui->selected;
            ui->finished = 1;
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
        FUN_0041eeec(ui);
        break;
    case 12:
        if (FUN_0026c3a0() != 0) {
            saveLoadUiGoTo(ui, 22);
        }
        break;
    case 13:
        FUN_0041f5bc(ui);
        break;
    case 14:
        FUN_0041fd5c(ui);
        break;
    case 15:
        saveLoadUiWaitSprites(ui);
        break;
    case 16:
        FUN_0041e3a0(ui, 1);
        saveLoadUiEnterMode(ui, 18);
        saveLoadUiWaitSprites(ui);
        break;
    case 17:
        FUN_0041e3a0(ui, 0);
        saveLoadUiEnterMode(ui, 18);
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
            saveLoadUiSetMode(ui, 14);
            ui->phase = 4;
        }
        break;
    case 20:
        saveMenuCacheSlotHeadersStep(ui);
        break;
    case 21:
        if (scrRunOpcodesStub(ui->script) == 2) {
            u8 next = ui->phase;
            if (next != 0) {
                saveLoadUiGoTo(ui, next);
            } else {
                saveLoadUiSetMode(ui, 19);
            }
        }
        break;
    case 22:
        ui->finished = 1;
        break;
    }
}
