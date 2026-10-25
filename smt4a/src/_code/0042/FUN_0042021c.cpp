/* NON_MATCHING: all 22 state handlers and the jump table are written; retail reads the entry flag as a signed byte through a separate address add (ldrsb), keeps case 9's copy of the state-22 tail unshared, and the block layout/shared tails differ, so rows differ. */
#include "common.h"
#include "gamedata/GameFlags.h"

struct SaveLoadBase {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 flag02;
    /* 0x03 */ u8 flag03;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 selected;
};

struct SaveLoadEntry {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 ready;
    /* 0x8B */ u8 unk8B[1];
};

struct DataBlockTable {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u8 mode;
};

struct SaveLoadUi {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 active;
    /* 0x005 */ u8 unk005[2];
    /* 0x007 */ u8 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ u8 pendingState;
    /* 0x00D */ u8 previousState;
    /* 0x00E */ u8 flag0E;
    /* 0x00F */ u8 flag0F;
    /* 0x010 */ u8 flag10;
    /* 0x011 */ u8 flag11;
    /* 0x012 */ u8 unk012[2];
    /* 0x014 */ u8 mode;
    /* 0x015 */ u8 unk015[3];
    /* 0x018 */ s32 index;
    /* 0x01C */ void *tableBuffer;
    /* 0x020 */ void *settingsBuffer;
    /* 0x024 */ void *saveBuffer;
    /* 0x028 */ u8 unk028[0x18];
    /* 0x040 */ void *script;
    /* 0x044 */ u8 unk044[0x18];
    /* 0x05C */ u8 flag5C;
    /* 0x05D */ u8 unk05D[0x28F];
    /* 0x2EC */ u8 slotFlags[12];
    /* 0x2F8 */ s32 selected;
    /* 0x2FC */ u8 unk2FC[0x178];
    /* 0x474 */ SaveLoadEntry entries[1];
};

extern "C" {
extern SaveLoadBase g_saveLoadUIBase;
void saveLoadUIStart(SaveLoadUi *ui);
void FUN_0041f6e0(SaveLoadUi *ui);
void FUN_0041f4c0(SaveLoadUi *ui);
void FUN_0041f22c(SaveLoadUi *ui);
void FUN_0041f110(SaveLoadUi *ui);
void FUN_0041ed4c(SaveLoadUi *ui);
void FUN_0041eeec(SaveLoadUi *ui);
void FUN_0041f5bc(SaveLoadUi *ui);
void FUN_0041fd5c(SaveLoadUi *ui);
void FUN_00420a2c(SaveLoadUi *ui);
void FUN_0041e3a0(SaveLoadUi *ui, s32 flag);
void FUN_0041dbdc(SaveLoadUi *ui, s32 flag);
void saveMenuCacheSlotHeadersStep(SaveLoadUi *ui);
s32 FUN_0026c3a0(void);
s32 FUN_002e19f8(void);
s32 FUN_002e07f4(void);
s32 scrRunOpcodesStub(void *script);
void scrScriptProcessStartEntry(void *script, s32 index);
void slotSetRequest(s32 slot, s32 kind, s32 value);
DataBlockTable *gameDataBlocksGetTable(void);
void *gameDataBlocksGetSaveData(void);
void *configGetSettings(void);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void wordPairCopy(void *destination, const void *source);
s32 gameFlagIsSet(s32 flag);

void gameDataAddHomeButtonHold(s32 value);
void messageMainSetFlag(s32 value);
void sysPlaySe(s32 id);
void gameDataIncrementCounterCapped(void);
void FUN_002ac390(void);
void FUN_00168980(s32 value);
s32 objBStateAllowsAction(void);
}

/* Moves to another state, remembering the one it leaves. */
static __inline void saveLoadUiChangeState(SaveLoadUi *ui, u8 state, u8 pending)
{
    ui->previousState = ui->state;
    ui->state = state;
    ui->step = 0;
    ui->pendingState = pending;
}

/* Leaves for the pending state; arriving at state 22 hands the selection back to the shared base. */
static __inline void saveLoadUiAdvance(SaveLoadUi *ui)
{
    u8 next = ui->pendingState;

    saveLoadUiChangeState(ui, next, 0);
    if (next == 22) {
        g_saveLoadUIBase.selected = ui->selected;
        ui->active = 1;
    }
}

static __inline s8 saveLoadUiEntryReady(SaveLoadUi *ui)
{
    return ui->entries[ui->index].ready;
}

/* Copies the edited tables, settings and save data back into the game. */
static __inline void saveLoadUiCommit(SaveLoadUi *ui)
{
    __aeabi_memcpy4(gameDataBlocksGetTable(), ui->tableBuffer, 128);
    wordPairCopy(configGetSettings(), ui->settingsBuffer);
    __aeabi_memcpy4(gameDataBlocksGetSaveData(), ui->saveBuffer, 0x2A71C);
}

/* Per-frame update of the save/load screen: one state per step of the flow. */
extern "C" void FUN_0042021c(SaveLoadUi *ui)
{
    switch (ui->state) {
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
            if (g_saveLoadUIBase.flag02 != 0 && !gameFlagIsSet(0x470)) {
                gameFlagSetValue(0x470, 1, 1);
            }
            if (g_saveLoadUIBase.flag03 != 0 && !gameFlagIsSet(0x471)) {
                gameFlagSetValue(0x471, 1, 1);
            }
            FUN_00168980(3);
            ui->selected = g_saveLoadUIBase.selected;
            saveLoadUiChangeState(ui, 22, 0);
            ui->active = 1;
        }
        break;
    case 7:
        gameDataAddHomeButtonHold(1);
        ui->flag0F = 0;
        ui->flag10 = 0;
        ui->flag11 = 0;
        ui->flag0E = 1;
        messageMainSetFlag(0);
        scrScriptProcessStartEntry(ui->script, 4);
        sysPlaySe(157);
        saveLoadUiChangeState(ui, 8, 0);
    case 8:
        FUN_0041ed4c(ui);
        break;
    case 9:
        switch (ui->step) {
        case 0:
            if (FUN_002e19f8() == 0) {
                return;
            }
            if (FUN_0026c3a0() == 0) {
                return;
            }
            slotSetRequest(0, 12, 255);
            slotSetRequest(1, 12, 255);
            ui->step++;
        case 1:
            if (FUN_002e07f4() == 0) {
                return;
            }
            if (gameDataBlocksGetTable()->mode == 2) {
                gameDataIncrementCounterCapped();
            }
            FUN_002ac390();
            saveLoadUiCommit(ui);
            saveLoadUiChangeState(ui, 22, 0);
            g_saveLoadUIBase.selected = ui->selected;
            ui->active = 1;
            break;
        }
        break;
    case 10:
        scrScriptProcessStartEntry(ui->script, ui->slotFlags[ui->selected] == 0 ? 7 : 0);
        gameDataAddHomeButtonHold(1);
        ui->flag0F = 0;
        ui->flag0E = 0;
        sysPlaySe(146);
        saveLoadUiChangeState(ui, 11, 0);
        break;
    case 11:
        FUN_0041eeec(ui);
        break;
    case 12:
        if (FUN_0026c3a0() != 0) {
            saveLoadUiChangeState(ui, 22, 0);
            g_saveLoadUIBase.selected = ui->selected;
            ui->active = 1;
        }
        break;
    case 13:
        FUN_0041f5bc(ui);
        break;
    case 14:
        FUN_0041fd5c(ui);
        break;
    case 15:
        FUN_00420a2c(ui);
        if (saveLoadUiEntryReady(ui) != 0) {
            saveLoadUiAdvance(ui);
        }
        break;
    case 16:
        FUN_0041e3a0(ui, 1);
        saveLoadUiChangeState(ui, 18, 0);
        FUN_00420a2c(ui);
        if (saveLoadUiEntryReady(ui) != 0) {
            saveLoadUiAdvance(ui);
        }
        break;
    case 17:
        FUN_0041e3a0(ui, 0);
        saveLoadUiChangeState(ui, 18, 0);
        FUN_00420a2c(ui);
        if (saveLoadUiEntryReady(ui) != 0) {
            saveLoadUiAdvance(ui);
        }
        break;
    case 18:
        FUN_00420a2c(ui);
        if (saveLoadUiEntryReady(ui) != 0) {
            saveLoadUiAdvance(ui);
        }
        break;
    case 19:
        if (objBStateAllowsAction() != 0) {
            ui->flag5C = 0;
            if (ui->mode != 0) {
                FUN_0041dbdc(ui, 0);
            } else {
                FUN_0041dbdc(ui, 1);
            }
            ui->previousState = ui->state;
            ui->step = 0;
            ui->state = 14;
            ui->pendingState = 4;
        }
        break;
    case 20:
        saveMenuCacheSlotHeadersStep(ui);
        break;
    case 21:
        if (scrRunOpcodesStub(ui->script) == 2) {
            if (ui->pendingState != 0) {
                saveLoadUiAdvance(ui);
            } else {
                ui->state = 19;
                ui->previousState = ui->state;
                ui->step = 0;
            }
        }
        break;
    case 22:
        ui->active = 1;
        break;
    }
}
