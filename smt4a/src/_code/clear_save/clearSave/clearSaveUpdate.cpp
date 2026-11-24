/* NON_MATCHING: 22 lines, all register numbers in the unit-list loop: the same source as IV's FUN_001b10e4
 * (IDENTICAL there), with the ninth option cleared by memset (armcc emits retail's call to
 * __ARM_common_memclr4_9). Retail loads the party entry into r2 and keeps the slot table in r1 (this
 * build: r1 and r2). Caching the options' address in a local closes the option toggle's base/index
 * swap (12 lines) but is a steering temporary, so it is not used.
 * Wave 90: the loop's pair and the toggle's pair (cursor r1, options base r0) flip together with any change
 * of the function's temporaries, wherever it is: clearSaveRow without its `count` local or with its test as
 * `count <= index` (16 lines: retail's loop, but the row test's operands and the toggle turn round) or the
 * loop's test as `work->selectedUnit == slots->party[i]` (14) give retail's loop and IV's toggle (cursor r0,
 * base r1). Retail has IV's loop with the other toggle, so one of the two sites is worded differently from
 * IV here. Not it: the counter or `slots` at function scope, a while loop, an explicit cast, a const table,
 * the toggle as a ternary, `!(x == 1)`, a signed range test (26), a pointer to the option or an inline (16:
 * a writeback load), the clamp as a ternary, the options cleared by a loop or `memset(.., 9)` (all 22). */
#include <string.h>
#include "clear_save/clearSave.h"
#include "gamedata/GameFlags.h"
#include "gamedata/DataTable.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/JobWork.h"
#include "map/mapRndMaze.h"
#include "code/Code0023_Smt4a.h"
#include "code/Code002e.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "script/scrScriptProcess.h"
#include "shop/ShopItemDescription.h"
#include "quest_center/qcMain.h"

extern "C" {
extern ClearSaveWorkA *g_clearSave;

u32 uiAdjustIntegerFromRepeat(s32 *value, s32 minimum, s32 maximum, s32 wrap, s32 mode, s32 step);
u32 padButtonIsPressed(u32 button);
s32 gameSlotTableFindFree(void);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
u32 messageMainGetValue(void);
void titleSetSlotValueState2(u32 index, u32 value);
void sysPlaySe(u32 id);
void buttonHelpSetText(const s8 *text, u32 color);
void saveLoadStartWindowWithArgument(u32 argument);
s32 FUN_0037de28(void);
u32 screenFadeIsBusy(void);

/* The row of the clear-save table (records of 0x50 bytes) with the index, or NULL past the end. */
static __inline const s8 *clearSaveRow(u32 index)
{
    void *section = dataTableGet(0x3c, 0);
    const s8 *entries = static_cast<const s8 *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    if (index >= count) {
        return NULL;
    }
    return entries + index * 0x50;
}

/* Per-frame step of the clear-save screen: fade in, pick what to clear and a unit, confirm, save, fade out. */
s32 clearSaveUpdate(u32 job)
{
    ClearSaveWorkA *work = reinterpret_cast<ClearSaveWorkA *>(jobGetWork(job));
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
        if (pairedAvailabilityBothReady() != 0) {
            work->state = 8;
            sysPlaySe(0xA9);
            scrScriptProcessStartEntry(work->resource, 1);
        }
        break;
    case 3:
        if (uiAdjustIntegerFromRepeat(&work->cursor, 0, 8, 1, 0, 1) != 0) {
            buttonHelpSetText(clearSaveRow(work->cursor), 0xf4f4f4ff);
            break;
        }
        if (padButtonIsPressed(0) != 0) {
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
                work->unitCount = gameSlotTableFindFree();
                SaveSlotTableA *slots = gameGetSlotTable();
                for (s32 i = 0; i < work->unitCount; i++) {
                    work->unitIds[i] = slots->party[i];
                    if (slots->party[i] == work->selectedUnit) {
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
        if (padButtonRepeat(4) == 0 && padButtonRepeat(3) == 0) {
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
        if (padButtonIsPressed(1) != 0) {
            work->state = 3;
            break;
        }
        if (padButtonIsPressed(0) != 0) {
            work->selectedUnit = work->unitIds[work->unitCursor];
            work->options[6] = 1;
            work->state = 3;
        }
        break;
    case 6:
        if (scrRunOpcodesStub(work->resource) != 2) {
            break;
        }
        switch (messageGetChoiceResult()) {
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
            switch (messageGetChoiceResult()) {
            case 0:
                work->options[1] = 1;
                work->options[0] = 1;
                work->options[7] = 1;
                work->options[4] = 1;
                work->options[5] = 1;
                work->options[6] = 1;
                work->options[8] = 1;
                break;
            case 1:
                work->options[7] = 1;
                work->options[6] = 1;
                break;
            }
            FUN_00261a28(work->options);
            gameFlagSetValue(0x556, 1, 1);
            gameFlagSetValue(0x555, 1, 1);
            saveLoadStartWindowWithArgument(2);
            work->state = 9;
        } else {
            buttonHelpSetText(clearSaveRow(messageMainGetValue()), 0xf4f4f4ff);
        }
        break;
    case 9:
        if (mapRndMazeTaskIsActive() != 0) {
            break;
        }
        if (FUN_0037de28() != 0) {
            slotSetRequest(0, 0x14, 0xFF);
            slotSetRequest(1, 0x14, 0xFF);
            work->state = 11;
        } else {
            FUN_00239b08();
            work->state = 10;
            sysPlaySe(0xA9);
            scrScriptProcessStartEntry(work->resource, 2);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(work->resource) != 2) {
            break;
        }
        switch (messageGetChoiceResult()) {
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
