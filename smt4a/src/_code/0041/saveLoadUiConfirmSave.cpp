#include "common.h"
#include <string.h>
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SavedUnitSelection.h"
#include "network/DataStore/DataStoreMain.h"
#include "saveLoadUI/SaveLoadInteractionsA.h"
#include "shard/SaveSlotHeaderWork.h"
#include "script/scrScriptProcess.h"
#include "mobiclip_ctrl/MobiclipCtrl.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code0033.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "shop/ShopItemDescription.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "script/ScriptEntry.h"

extern "C" {

void gameDataBlocksReleaseHold(u32 bits);
void *gameDataBlocksGetTable(void);
void sysPlaySe(u32 id);
void FUN_002299b0(u16 *save);
void clockRecordStartSeconds(void);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared header keeps the decompiler's word-pointer view)
void messageStateEndMode2(void);
void statusCameraRestore(s32 usePreset);
void FUN_0033440c(u32 value);
void FUN_0034aac8(u8 value);
void gameGlobalsQueueValues(PlayerDataA *player, s32 mode);
s32 statusModelPreviewOutfitPart(s32 mode, u32 value);
void messageMainSetFlag(u8 value);
u32 saveLoadStartSave(s32 slot, u8 option);
s32 saveLoadThreadHasResult(void);
s32 byteTripleGetV1(void);
s32 byteArr5Get4(void);

enum {
    SAVE_TABLE_SIZE = 0x80,
    CONFIG_SETTINGS_SIZE = 8,
    SAVE_BODY_SIZE = 0x2a71c
};

/* Runs the save confirmation: once the player confirms, writes the menu's working copies back, starts the
 * save, and when it has finished shows the saved slot's header in the preview and returns to the slot list. */
void saveLoadUiConfirmSave(SaveSlotHeaderWork *ui)
{
    if (ui->flag0e == 0) {
        if (saveLoadThreadHasResult() != 0) {
            return;
        }
        if (scrRunOpcodesStub(ui->script) != 2) {
            return;
        }
        if (messageGetChoiceResult() != 0) {
            /* Declined. */
            gameDataBlocksReleaseHold(1);
            ui->flag0e = 0;
            ui->busy = 0;
            ui->flag0f = 0;
            sysPlaySe(0xaa);
            return;
        }
        messageStateEndMode2();
        messageMainSetFlag(0);
        ui->flag0e = 1;
        memcpy((u32 *)gameDataBlocksGetTable(), (const u32 *)ui->tableBuffer, SAVE_TABLE_SIZE);
        memcpy(configGetSettings(), ui->settingsBuffer, CONFIG_SETTINGS_SIZE);
        memcpy((u32 *)gameDataBlocksGetSaveData(), (const u32 *)ui->saveBuffer, SAVE_BODY_SIZE);
        if (g_saveLoadUIBase.setFlag470 != 0 && gameFlagIsSet(0x470) == 0) {
            gameFlagSetValue(0x470, 1, 1);
        }
        if (g_saveLoadUIBase.setFlag471 != 0 && gameFlagIsSet(0x471) == 0) {
            gameFlagSetValue(0x471, 1, 1);
        }
        scrScriptProcessStartEntry(ui->script, 1);
        ((GameSaveBodyA *)gameDataBlocksGetSaveData())->summaryId = 4;
        ((GameSaveBodyA *)gameDataBlocksGetSaveData())->saveKind = ui->saveKind;
        FUN_002299b0((u16 *)gameDataBlocksGetSaveData());
        clockRecordStartSeconds();
        gameCounterAddSaturating(0x20, 1);
        saveLoadStartSave(ui->selected + 1, ((GameSaveBodyA *)gameDataBlocksGetSaveData())->saveKind);
        return;
    }

    if (byteTripleGetV1() != 0 && ui->flag0f == 0) {
        if (byteArr5Get4() != 0) {
            /* Saved: the slot now holds the current game, so show its header in the preview. */
            scrScriptProcessStartEntry(ui->script, 2);
            memcpy((u32 *)ui->headers[ui->selected], (const u32 *)gameDataBlocksGetTable(), SAVE_TABLE_SIZE);
            ui->present[ui->selected] = 1;
            PlayerDataA *player = ui->player;
            const SavedUnitChoice *header = (const SavedUnitChoice *)ui->headers[ui->selected];
            memcpy(player->equipment, &header->base, sizeof(player->equipment));
            memcpy(&player->baseStats, &header->maximum, sizeof(player->baseStats));
            memcpy((u32 *)&player->maxHp, (const u32 *)&header->current, sizeof(UnitSevenStats));
            player->hp = header->hp;
            player->mp = header->mp;
            player->experience = header->bits;
            libc_strcpy((char *)player->name, header->name);
            player->level = header->id;
            libc_strcpy((char *)((GameSaveBodyA *)gameDataBlocksGetSaveData())->slots.hero.name, header->name);
            gameGlobalsQueueValues(ui->player, 0);
            FUN_0033440c(((const SavedUnitChoice *)ui->headers[ui->selected])->kind);
            header = (const SavedUnitChoice *)ui->headers[ui->selected];
            if (header != NULL) {
                FUN_0034aac8(header->alternate != 0);
            }
            FUN_0033449c(0);
            FUN_0023b45c(1);
            gameGlobalsSetOverlayActive(1);
            statusCameraRestore(0);
            ui->suspended = 0;
            statusModelPreviewOutfitPart(1, ui->player->equipment[4]);
            statusModelPreviewOutfitPart(2, ui->player->equipment[5]);
            statusModelPreviewOutfitPart(0, ui->player->equipment[3]);
        }
        ui->flag0f = 1;
        ui->popupActive = 1;
        messageMainSetFlag(1);
        sysPlaySe(0xa0);
    }
    if (ui->popupActive != 0 && objBStateAllowsAction() != 0) {
        ui->popupActive = 0;
        statusCameraRestore(1);
        ui->suspended = 1;
    }
    if (saveLoadThreadHasResult() != 0) {
        if (ui->flag0e != 0) {
            ui->flag0f = 1;
        }
        return;
    }
    if (ui->selected < 1 && scrRunOpcodesStub(ui->script) != 2) {
        return;
    }
    if (ui->selected >= 1 && ui->waitScript != 0 && scrRunOpcodesStub(ui->script) != 2) {
        return;
    }
    if (FUN_002a6464() != 0 && byteTripleGetV1() != 0 && ui->popupActive == 0) {
        /* The announcement is over: back to the slot list. */
        g_saveLoadUIBase.saveAnnounced = 1;
        ui->busy = 0;
        ui->flag0e = 0;
        ui->flag0f = 0;
        if (byteArr5Get4() == 0) {
            ui->selected = g_saveLoadUIBase.selectedValue;
        }
    }
}

} /* extern "C" */
