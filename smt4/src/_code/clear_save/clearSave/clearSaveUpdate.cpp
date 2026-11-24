#include <string.h>
#include "clear_save/clearSave.h"
#include "gamedata/GameFlags.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "gamedata/SaveSlotTableIV.h"
#include "quest_center/qcMain.h"
#include "script/scrScriptProcess.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_ScrollList.h"
#include "sys/RuntimeObjects.h"

extern "C" {
extern ClearSaveWork *g_clearSave;

u32 uiAdjustIntegerFromRepeat(s32 *value, s32 minimum, s32 maximum, s32 wrap, s32 mode, s32 step);
u32 padIsButtonPressed(u32 button);
u32 padIsButtonRepeat(u32 button);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
u32 messageMainGetChoiceResult(void);
u32 messageTargetGetValue(void);
void titleSetSlotValueState2(u32 index, u32 value);
void buttonHelpSetText(const s8 *text, u32 style);
void clearSaveStartNewGame(u8 *options);
void FUN_0030aa50(u8 arg);
u32 jobWorkerPollAndFree(void);
s32 FUN_00215a24(void);
void gameRestorePrimaryWorkSave(void);
u32 screenFadeIsBusy(void);

/* The row of the clear-save table (data table 0x3c, records of 0x52 bytes) with the index, or NULL past the end. */
static __inline const s8 *clearSaveRow(u32 index)
{
    void *section = dataTableGet(0x3c, 0);
    const s8 *entries = static_cast<const s8 *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    if (index >= count) {
        return NULL;
    }
    return entries + index * 0x52;
}

/* Per-frame step of the clear-save screen: fade in, pick what to clear and a unit, confirm, save, fade out. */
s32 clearSaveUpdate(u32 job)
{
    ClearSaveWork *work = reinterpret_cast<ClearSaveWork *>(jobGetWork(job));
    switch (work->state) {
    case 0:
        work->state = 1;
        slotSetRequest(0, 0, 0xFF);
        slotSetRequest(1, 0, 0xFF);
        break;
    case 1:
        work->state = 2;
        titleSetSlotValueState2(0, 0x14);
        titleSetSlotValueState2(1, 0x14);
        break;
    case 2:
        if (screenFadesAllReady() != 0) {
            work->state = 8;
            buttonHelpSetPreset(0xA7);
            scrScriptProcessStartEntry(work->resource, 1);
        }
        break;
    case 3:
        if (uiAdjustIntegerFromRepeat(&work->cursor, 0, 8, 1, 0, 1) != 0) {
            buttonHelpSetText(clearSaveRow(work->cursor), 0x323232ff);
            break;
        }
        if (padIsButtonPressed(0) != 0) {
            if (work->cursor == 7) {
                work->state = 4;
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
            } else if (work->cursor == 8) {
                work->state = 6;
                scrScriptProcessStartEntry(work->resource, 0);
            } else if (work->cursor == 6) {
                if (work->options[6] == 0) {
                    break;
                }
                work->state = 7;
                work->unitCursor = -1;
                work->unitCount = gameCountUnits();
                SaveSlotTableIV *slots = gameGetSlotTable();
                for (s32 i = 0; i < work->unitCount; i++) {
                    work->unitIds[i] = slots->stock[i];
                    if (slots->stock[i] == work->selectedUnit) {
                        work->unitCursor = i;
                    }
                }
                if (work->unitCursor <= 0) {
                    work->unitCursor = 0;
                }
                work->selectedUnit = work->unitIds[work->unitCursor];
            }
            break;
        }
        if (padIsButtonRepeat(4) == 0 && padIsButtonRepeat(3) == 0) {
            break;
        }
        if (static_cast<u32>(work->cursor) <= 6) {
            work->options[work->cursor] = work->options[work->cursor] != 1;
        }
        break;
    case 7:
        if (uiAdjustIntegerFromRepeat(&work->unitCursor, 0, work->unitCount - 1, 1, 1, 1) != 0) {
            break;
        }
        if (padIsButtonPressed(1) != 0) {
            work->state = 3;
            break;
        }
        if (padIsButtonPressed(0) != 0) {
            work->selectedUnit = work->unitIds[work->unitCursor];
            work->options[6] = 1;
            work->state = 3;
        }
        break;
    case 6:
        if (scrRunOpcodesStub(work->resource) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            work->state = 11;
            slotSetRequest(0, 10, 0xFF);
            slotSetRequest(1, 10, 0xFF);
            break;
        case 1:
            work->state = 2;
            break;
        }
        break;
    case 8:
        if (scrRunOpcodesStub(work->resource) == 2) {
            memset(work->options, 0, sizeof(work->options));
            switch (messageMainGetChoiceResult()) {
            case 0:
                work->options[1] = 1;
                work->options[0] = 1;
                work->options[2] = 1;
                work->options[4] = 1;
                work->options[5] = 1;
                work->options[6] = 1;
                break;
            case 1:
                work->options[7] = 1;
                work->options[6] = 1;
                break;
            }
            clearSaveStartNewGame(work->options);
            gameFlagSetValue(0x556, 1, 1);
            gameFlagSetValue(0x555, 1, 1);
            FUN_0030aa50(2);
            work->state = 9;
        } else {
            buttonHelpSetText(clearSaveRow(messageTargetGetValue()), 0x323232ff);
        }
        break;
    case 9:
        if (jobWorkerPollAndFree() != 0) {
            break;
        }
        if (FUN_00215a24() != 0) {
            slotSetRequest(0, 0x14, 0xFF);
            slotSetRequest(1, 0x14, 0xFF);
            work->state = 11;
        } else {
            gameRestorePrimaryWorkSave();
            work->state = 10;
            buttonHelpSetPreset(0xA7);
            scrScriptProcessStartEntry(work->resource, 2);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(work->resource) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            slotSetRequest(0, 0x14, 0xFF);
            slotSetRequest(1, 0x14, 0xFF);
            work->state = 11;
            break;
        case 1:
            work->state = 2;
            break;
        }
        break;
    case 11:
        if (screenFadeIsBusy() == 0) {
            if (work->active != 0) {
                screenFadeSlotReset(0);
                screenFadeSlotReset(1);
                jobStop(g_clearSave->process, 0);
            } else {
                asdSequenceRequest(1, 0, 0);
            }
            return -1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
