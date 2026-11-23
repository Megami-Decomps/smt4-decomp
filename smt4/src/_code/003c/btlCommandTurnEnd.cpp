/* NON_MATCHING: 485 vs 490 rows; the scans, the mark loop, the slot marks and every call match. Retail keeps the reflect
 * slot 5 of the quest counter in fp from before btlMainFindActiveEntry and shares one `bl btlReflectCreateKind10` between
 * the two follow-ups (an inline helper taking the slot reproduces both, but has one call site), which also swaps r6/r8
 * between the active action and the held/current value; and it picks other scratch registers for the first next-command
 * store, the second opposing-side scan and the status-0x400 scan. */
#include "battle/BattleCommandController.h"
#include "util/Random.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers_Smt4.h"
#include "battle/btlAction.h"
#include "battle/BtlUnitWork.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern u32 g_btlActionReflect;

s32 nodeListCountActiveById(u32 id);
s32 btlUnitIsDeadAndUncopied(BtlMainState **block, CommandState *work, s32 index);
s32 btlNodeListAnyReady(void);
void FUN_0023f4e4(BtlMainState *state);
void btlReflectQueuePendingRosterFade(s32 a, CommandState *work, s32 b);
void FUN_0027e5e4(BtlActionRecord *action);
void btlSlotManagerResetAll(BtlMainState *state);
void FUN_003cefe0(BtlMainState **block, CommandState *work, u32 command);
void FUN_00246d38(s32 a, CommandState *work, BtlActionRecord *record, u32 mask);
void FUN_00246e24(s32 a, CommandState *work, BtlActionRecord *record, u32 mask, s32 b);
void btlSubmitAction(s32 effect, BtlEntry *entry, s32 mode);
void FUN_003c05e8(s32 value);
void FUN_00229a3c(s32 a, CommandState *work, s32 b, s32 c, s32 d);
s32 FUN_003cfe14(BtlMainState **block, CommandState *work, s32 value);
void btlReflectQueueSelectionMarks(s32 a, CommandState *work, BtlEntry *entry);
BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
s32 battleGetEntryHalfword(s32 id, s32 kind);
s32 questGetCurrentRecordValue6(void);
u16 questGetCurrentRecordValue8(void);
u16 questCurrentGetValue(void);
u16 questRecordValueIfState2(void);
s32 mapCategoryToDestinationGroup(u32 kind);
void FUN_00255180(u32 unit, s32 kind, s32 value);
void FUN_003d03f8(BtlMainState **block, CommandState *work, s32 value, s32 kind, BtlActionRecord *record, BtlEntry *entry);
u16 FUN_003c8880(void);
void btlReflectCreateKind10(s32 a, CommandState *work, s32 value, s32 b);
void FUN_00229754(BtlMainState **block, CommandState *work);

/* Sets the command the acting unit's slot runs next. */
static __inline void setNextCommand(BtlMainState **block, u8 command)
{
    BtlActionSlot &slot = g_btlAction.slots[(*block)->actionState.index];
    slot.unit.command = command;
}

/* True when a unit on the side opposing the acting one is still listed and standing. */
static __inline bool opposingSideStands(BtlMainState **block, CommandState *work)
{
    s32 first;
    s32 count;
    if (work->record->memberId < 4) {
        first = 4;
        count = 50;
    } else {
        first = 0;
        count = 4;
    }
    for (s32 index = first; index < first + count; ++index) {
        if (((*block)->actions[index].status & 1) != 0 && btlUnitIsDeadAndUncopied(block, work, index) == 0)
            return true;
    }
    return false;
}

/* The command controller's turn-end step: waits for the reflected actions, settles the marks every listed
 * unit carries, then queues the counter or quest follow-up and picks the acting unit's next action. */
u32 btlCommandTurnEnd(BtlMainState **block, CommandState *work)
{
    if (nodeListCountActiveById(g_btlActionReflect) > 0)
        return 0;
    bool marked = false;
    if ((work->flags & 0x1080) == 0) {
        for (s32 index = 0; index < 109; ++index) {
            if (((*block)->actions[index].status & 1) != 0 && btlUnitIsDeadAndUncopied(block, work, index) == 0) {
                BtlUnitData *data = &btlMainFindEntryByListedId(*block, index)->data;
                if (data->primaryFlags != 0 && data->statusFlags == 0) {
                    marked = true;
                    break;
                }
            }
        }
    }
    if (marked && (*block)->affinity.minimumPercentApplied != 0 && btlNodeListAnyReady() != 0)
        return 0;

    bool handled = false;
    u32 command = 0;
    FUN_0023f4e4(*block);
    btlReflectQueuePendingRosterFade(0, work, 5);
    for (s32 index = 0; index < 109; ++index) {
        BtlActionRecord *action = &(*block)->actions[index];
        if (action != NULL && (action->status & 1) != 0 && (action->status & 2) != 0)
            FUN_0027e5e4(action);
    }
    (*block)->effectValue = 0;
    btlSlotManagerResetAll(*block);
    if ((work->flags & 0x2000) != 0) {
        work->flags &= ~0x2000u;
        setNextCommand(block, 20);
        return 1;
    }

    bool canRetry = true;
    if (!opposingSideStands(block, work))
        canRetry = false;
    if ((*block)->actionState.mode != 0)
        canRetry = false;

    if ((work->flags & 4) == 0) {
        if (canRetry)
            FUN_003cefe0(block, work, command);
        bool anyUp = false;
        u8 slotFlags[4] = {0, 0, 0, 0};
        for (s32 i = 0; i < 109; ++i) {
            if (((*block)->actions[i].status & 1) == 0 || btlUnitIsDeadAndUncopied(block, work, i) != 0)
                continue;
            BtlEntry *entry = btlMainFindEntryByListedId(*block, i);
            BtlUnitData *data = &entry->data;
            if (data->alternateFlags != 0) {
                FUN_00246d38(0, work, &(*block)->actions[i], 0x10);
                data->alternateFlags = 0;
                data->primaryFlags &= ~0x10;
            } else if (data->primaryFlags == 0 || data->statusFlags != 0) {
                if ((data->statusFlags & 0x10) != 0) {
                    s32 slot = entry->selectionIndex;
                    if (slot >= 0 && slot < 4)
                        slotFlags[slot] = 1;
                }
            } else if (canRetry) {
                FUN_00246e24(0, work, &(*block)->actions[i], 0x10, 0);
                btlSubmitAction(25, entry, 1);
                data->primaryFlags = 0;
                handled = true;
                if ((entry->flags & 10) == 0)
                    continue;
                anyUp = true;
                s32 slot = entry->selectionIndex;
                if (slot >= 0 && slot < 4)
                    slotFlags[slot] = 1;
            }
        }
        if (anyUp && slotFlags[0] != 0 && slotFlags[1] != 0 && slotFlags[2] != 0 && slotFlags[3] != 0) {
            FUN_003c05e8(25);
            FUN_00229a3c(0, work, 0, 33, 0);
        }
        if (!handled) {
            s32 marked = 0;
            for (s32 i = 0; i < 4; ++i) {
                BtlEntry *entry = &(*block)->entries[i];
                if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && (entry->data.statusFlags & 0x10) != 0)
                    ++marked;
            }
            if (marked == 4)
                handled = true;
        }
    }

    if (btlUnitIsDeadAndUncopied(block, work, work->record->memberId) == 0 && (work->selection->responseFlags & 0x20) != 0 &&
        opposingSideStands(block, work) && (*block)->actionState.mode == 0 && (work->entry->flags & 0x40) == 0 &&
        (work->entry->flags & 0x20000000) == 0 && (work->flags & 4) == 0) {
        s32 value = work->selection->power / 8;
        if (value > 100)
            value = randRange(15) + 100;
        if (FUN_003cfe14(block, work, value) != 0)
            work->flags |= 0x10000;
        handled = true;
    }

    for (s32 i = 0; i < 109; ++i) {
        BtlEntry *entry = &(*block)->entries[i];
        if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && (entry->data.statusFlags & 0x400) != 0) {
            btlSubmitAction(22, entry, 1);
            btlReflectQueueSelectionMarks(0, work, entry);
            handled = true;
        }
    }

    BtlEntry *active = btlMainFindActiveEntry(*block);
    if (active != NULL) {
        BtlActionRecord *activeAction = &(*block)->actions[active->ids[0]];
        s32 held = battleGetEntryHalfword(0, 2);
        if (questGetCurrentRecordValue6() != 0 && held > 0) {
            s32 value = questGetCurrentRecordValue8();
            if (value != 0)
                btlReflectCreateKind10(5, work, value, 12);
            handled = true;
        } else {
            s32 current = questCurrentGetValue();
            u32 required = questRecordValueIfState2();
            u32 have = battleGetEntryHalfword(work->record->memberId, 29);
            if (current != 0 && required <= have) {
                FUN_00255180(work->record->memberId, 29, mapCategoryToDestinationGroup(29));
                FUN_003d03f8(block, work, current, 25, activeAction, active);
                s32 result = FUN_003c8880();
                if (result != 0)
                    btlReflectCreateKind10(5, work, result, -1);
                handled = true;
            }
        }
    }
    if (handled)
        setNextCommand(block, 30);
    else
        FUN_00229754(block, work);
    return 1;
}
}
