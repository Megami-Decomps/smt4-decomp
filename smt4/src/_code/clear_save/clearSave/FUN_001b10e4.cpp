/* NON_MATCHING: readable rebuild of the clear-save screen's per-frame step (367 vs 368 rows); retail keeps the shared zero constant in r7 across the highlight lookup and orders two state stores differently. */
#include "AsdSDK/AsdDebug.h"
#include "clear_save/clearSave.h"
#include "gamedata/GameFlags.h"
#include "gamedata/DataTable.h"
#include "shard/JobWork.h"
#include "gamedata/SaveSlotTableIV.h"

/* The clear-save screen's work area as its update step reads it (see ClearSaveWork). */
struct ClearSaveStepWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ s32 state;
    union {
        /* 0x10 */ u8 options[8];     /* what to clear; [6] is set once a unit was picked */
        /* 0x10 */ u32 optionWords[2];
    };
    /* 0x18 */ s32 selectedUnit;
    /* 0x1C */ s32 cursor;            /* the option row, 0..8 */
    /* 0x20 */ s32 unitCursor;
    /* 0x24 */ s32 unitIds[24];
    /* 0x84 */ s32 unitCount;
    /* 0x88 */ void *heapA;
    /* 0x8C */ void *script;
    /* 0x90 */ void *heapB;
};
typedef char ClearSaveStepWorkLayoutCheck[
    offsetof(ClearSaveStepWork, options) == 0x10 && offsetof(ClearSaveStepWork, unitIds) == 0x24 &&
    offsetof(ClearSaveStepWork, unitCount) == 0x84 && offsetof(ClearSaveStepWork, script) == 0x8C ? 1 : -1];

extern "C" {
extern ClearSaveWork *g_clearSave;

s32 uiAdjustIntegerFromRepeat(s32 *value, s32 minimum, s32 maximum, s32 step, s32 wrap, s32 repeat);
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
u32 gameCountUnits(void);
s32 scrRunOpcodesStub(void *process);
s32 scrScriptProcessStartEntry(void *process, s32 entry);
s32 messageMainGetChoiceResult(void);
u32 messageTargetGetValue(void);
void slotSetRequest(s32 slot, s32 value, u32 mask);
void FUN_002a03d8(s32 slot, s32 value);
u32 FUN_002896bc(void);
void buttonHelpSetPreset(u32 preset);
void FUN_0029ee6c(void *record, u32 color);
void FUN_001c36d8(u8 *options);
void FUN_0030aa50(s32 value);
s32 jobWorkerPollAndFree(void);
s32 FUN_00215a24(void);
void gameRestorePrimaryWorkSave(void);
s32 screenFadeIsBusy(void);
void FUN_00287728(u32 index);
u32 jobStop(u32 handle, u16 delay);
void asdSequenceRequest(s32 state, const void *arg, u32 size);

/* Highlights the row of the clear-save table (records of 0x52 bytes) the cursor or a message points at. */
static __inline void clearSaveHighlightRow(u32 index)
{
    void *section = dataTableGet(0x3c, 0);
    u8 *entries = static_cast<u8 *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    u8 *record = index < count ? entries + index * 0x52 : NULL;
    FUN_0029ee6c(record, 0x323232ff);
}

/* Per-frame step of the clear-save screen: fade in, pick what to clear and a unit, confirm, save, fade out. */
s32 FUN_001b10e4(u32 job)
{
    ClearSaveStepWork *work = reinterpret_cast<ClearSaveStepWork *>(jobGetWork(job));
    switch (work->state) {
    case 0:
        work->state = 1;
        slotSetRequest(0, 0, 0xFF);
        slotSetRequest(1, 0, 0xFF);
        break;
    case 1:
        work->state = 2;
        FUN_002a03d8(0, 0x14);
        FUN_002a03d8(1, 0x14);
        break;
    case 2:
        if (FUN_002896bc() != 0) {
            work->state = 8;
            buttonHelpSetPreset(0xA7);
            scrScriptProcessStartEntry(work->script, 1);
        }
        break;
    case 3:
        if (uiAdjustIntegerFromRepeat(&work->cursor, 0, 8, 1, 0, 1) != 0) {
            clearSaveHighlightRow(work->cursor);
            break;
        }
        if (padIsButtonPressed(0) != 0) {
            if (work->cursor == 7) {
                work->state = 4;
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
            } else if (work->cursor == 8) {
                work->state = 6;
                scrScriptProcessStartEntry(work->script, 0);
            } else if (work->cursor == 6) {
                if (work->options[6] == 0) {
                    break;
                }
                work->unitCursor = -1;
                work->state = 7;
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
        if (padIsButtonPressed(0) == 0) {
            break;
        }
        work->selectedUnit = work->unitIds[work->unitCursor];
        work->options[6] = 1;
        work->state = 3;
        break;
    case 6:
        if (scrRunOpcodesStub(work->script) != 2) {
            break;
        }
        {
            s32 choice = messageMainGetChoiceResult();
            if (choice == 0) {
                work->state = 11;
                slotSetRequest(0, 10, 0xFF);
                slotSetRequest(1, 10, 0xFF);
            } else if (choice == 1) {
                work->state = 2;
            }
        }
        break;
    case 8:
        if (scrRunOpcodesStub(work->script) == 2) {
            work->optionWords[0] = 0;
            work->optionWords[1] = 0;
            s32 choice = messageMainGetChoiceResult();
            if (choice == 0) {
                work->options[1] = 1;
                work->options[0] = 1;
                work->options[2] = 1;
                work->options[4] = 1;
                work->options[5] = 1;
                work->options[6] = 1;
            } else if (choice == 1) {
                work->options[7] = 1;
                work->options[6] = 1;
            }
            FUN_001c36d8(work->options);
            gameFlagSetValue(0x556, 1, 1);
            gameFlagSetValue(0x555, 1, 1);
            FUN_0030aa50(2);
            work->state = 9;
        } else {
            clearSaveHighlightRow(messageTargetGetValue());
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
            scrScriptProcessStartEntry(work->script, 2);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(work->script) != 2) {
            break;
        }
        {
            s32 choice = messageMainGetChoiceResult();
            if (choice == 0) {
                slotSetRequest(0, 0x14, 0xFF);
                slotSetRequest(1, 0x14, 0xFF);
                work->state = 11;
            } else if (choice == 1) {
                work->state = 2;
            }
        }
        break;
    case 11:
        if (screenFadeIsBusy() == 0) {
            if (work->active != 0) {
                FUN_00287728(0);
                FUN_00287728(1);
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
