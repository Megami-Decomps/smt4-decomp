/* NON_MATCHING: the phase dispatcher's table, blocks and calls match retail (126 lines, 68 by shape). Phases 8 and
 * 15 are functions armcc inlined: retail copies `work` into another register at the start of each (mov r9, r4;
 * mov r1, r4) and reuses r4 for the body's own locals. What differs: in phase 15 retail loads the entry list
 * predicated before the branch and the action list at the else loop's head (this build selects one address and
 * loads once), and in phase 19 it keeps the reflect chance in r0 and the selection kind in r1 (this build ip and
 * r0). */
#include "battle/BattleCommandController.h"
#include "battle/BtlUnitTarget.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/SaveSlotTableIV.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"
#include "battle/btlHelp.h"
#include "gamedata/UnitStats.h"
#include "gfx/VersionedTextureRequest.h"
#include "quest_center/qcMain.h"
#include "code/Code0022_Smt4.h"

extern "C" {
StatBlock *saveResolvePartySlot(u32 partySlot);
s32 gameSlotFindByCategory(const StatBlock *record);
extern void *g_btlEvent;
extern VersionedTextureOwner *g_btlAux;

void btlAiScriptCall(u32 argument);
void FUN_00227b14(void *ui, u32 windowId, u32 kind, u32 mode);
void FUN_00229098(BtlMainState **block);
u8 buttonHelpGetStatus(void);
s32 btlScriptUnitIsIncapacitated(BtlMainState *state);
void battleSelectButtonHelpPreset(u32 preset);
void FUN_002569ac(BtlMainState **block, s32 bank);
u32 isEntryUsable(void *event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "void *" is incompatible with parameter of type "int *")
void FUN_0027e38c(void *event);
void FUN_003ca6c4(BtlMainState **block, CommandState *work);
void btlUiRouteSelectedAction(BtlUi *ui);
u32 btlReflectQueueSelectionMarks(s32 a, u32 options, BtlEntry *entry);
u32 btlEntrySetupMusic(BtlMainState **block, CommandState *work);
void FUN_0033a780(BtlMainState *state);
void btlResetTransitionProgress(BtlCamera *camera);
void FUN_00256898(s32 a, s32 b);
u32 FUN_003d3ba8(BtlMainState **block, CommandState *work);
u32 FUN_001d2710(BtlMainState *state, CommandState *work, s32 a, s32 target);
u32 btlResolveCommandEvent(BtlMainState **block, CommandState *work);
void btlMenuCursorStepReflectAction(s32 chance, CommandState *work, s32 a, BtlActionRecord *record, s32 b);
s32 questGetCurrentRecordHalf4(void);
u32 btlReflectCreateKind10(s32 a, CommandState *work, s32 value, s32 b);
void frameRangeExtend(BtlMainState **block, CommandState *work, s32 id, s32 a, s32 b, s32 c);
u32 battleResolveEscapeAttempt(BtlMainState **block, CommandState *work);
s32 btlEventSelectTrigger(void *event, s32 trigger, s32 unit, s32 a);
u32 FUN_003dbb40(void *object);
u32 btlQueuePartyHalfRecovery(BtlMainState **block, CommandState *work);
void btlUiRecountParty(BtlUi *ui);
void objDestroyChild(void *object);
void btlEffectNumberedRelease(void *object);
void modelManagerReleaseSlots(void *object);
void modelSetResetSlots(void *object);
void eventCommandDispatchPendingCleanup(void);
void FUN_00394b8c(void);

/* Phase 8: points each present player-side combatant at its party record again, and queues its selection
 * marks when the record has left the party. */
static __inline void commandRebindPartyUnits(BtlMainState **block, CommandState *work)
{
    SaveSlotTableIV *slots = gameGetSlotTable();
    for (s32 index = 0; index < 4; ++index) {
        BtlEntry *entry = &(*block)->entries[index];
        if ((entry->flags & 1) != 0 && (entry->flags & 8) != 0) {
            bool found = false;
            for (s32 slot = 0; slot < 3; ++slot) {
                if (slots->active[slot] >= 0) {
                    StatBlock *member = saveResolvePartySlot(slot);
                    if (member->id == entry->data.id) {
                        entry->data.partyUnit = member;
                        entry->data.model = gameSlotFindByCategory(member);
                        found = true;
                        break;
                    }
                }
            }
            if (!found)
                btlReflectQueueSelectionMarks(0, reinterpret_cast<u32>(work), entry);
        }
    }
}

/* Phase 15: starts the action on its first target, the first usable combatant when the battle picks the
 * target itself, else the first marked one (-1 when there is none). */
static __inline void commandStartOnFirstTarget(BtlMainState *state, CommandState *work)
{
    s32 target = -1;
    s32 index = 0;
    if ((state->battleFlags & 0x200) != 0) {
        BtlEntry *entries = state->entries;
        for (; index < BTL_ENTRY_COUNT; ++index) {
            BtlEntry *entry = &entries[index];
            if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->ids[0] >= 0 &&
                (entry->flags & 0x10) != 0) {
                target = entry->ids[0];
                break;
            }
        }
    } else {
        for (; index < BTL_ENTRY_COUNT; ++index) {
            s32 combatant = state->actions[index].participant.combatantIndex;
            if (combatant >= 0 && work->targetMarks[combatant] != 0) {
                target = state->actions[index].memberId;
                break;
            }
        }
    }
    FUN_001d2710(state, work, 0, target);
}

/* Initializes the effects, windows and command data for a newly entered action phase. */
void btlCommandEnterPhase(BtlMainState **block, s32 phase)
{
    BtlMainState *state = *block;
    s32 actor = state->actionState.index;
    ActionStateChannel *channel = &((ActionStateChannels *)g_btlAction.slots)->entries[actor];
    CommandState *work = (CommandState *)&channel->flags;
    switch (phase) {
    case 1:
        if ((state->battleFlags & 0x40) != 0)
            work->flags |= 0x80;
        else if ((state->battleFlags & 0x100) != 0)
            work->flags |= 0x1000;
        if ((work->flags & 0x800) != 0) {
            FUN_00227b14(g_btlUiBlock, work->windowId, work->selection->kind, 1);
            work->flags &= ~0x800u;
            work->selection->kind = 0;
            work->selection->value = 0;
            return;
        }
        FUN_00229c5c(g_btlUiBlock, work->windowId, 1);
        return;
    case 2: {
        btlAiScriptCall(reinterpret_cast<u32>(work));
        memClear(work->targetMarks, 0x85);
        FUN_00229098(block);
        s32 status = buttonHelpGetStatus();
        if (btlScriptUnitIsIncapacitated(*block) != 0) {
            if (status != 61)
                buttonHelpSetPreset(61);
        } else if (status != 179 && status != 180) {
            battleSelectButtonHelpPreset(0);
        }
        return;
    }
    case 28:
        FUN_002569ac(block, actor);
        btlEntryValuesCopy(block, (BtlUnit *)work);
        if (isEntryUsable(g_btlEvent) != 0)
            return;
        FUN_0027e38c(g_btlEvent);
        return;
    case 5:
        FUN_003ca6c4(block, work);
        return;
    case 7:
        btlUiRouteSelectedAction(g_btlUiBlock);
        memClear(work->targetMarks, 0x85);
        gameGetSlotTable();
        return;
    case 8:
        commandRebindPartyUnits(block, work);
        return;
    case 11:
        btlEntrySetupMusic(block, work);
        return;
    case 12:
        FUN_00244fb0(state, 0, 1, 10, 0xff);
        return;
    case 13:
        FUN_0033a780(state);
        btlResetTransitionProgress(g_btlMain);
        work->phaseTimer = 0;
        FUN_00256898(0, 0);
        buttonHelpSetPreset(237);
        return;
    case 14:
        FUN_003d3ba8(block, work);
        return;
    case 15:
        commandStartOnFirstTarget(state, work);
        return;
    case 16:
        btlResolveCommandEvent(block, work);
        return;
    case 3:
    case 17:
        memClear(work->targetMarks, 0x85);
        FUN_00229098(block);
        return;
    case 18: {
        s32 chance = (work->flags & 0x1080) == 0 ? 50 : 0;
        btlMenuCursorStepReflectAction(chance, work, 0, NULL, 1);
        if (s32 value = questGetCurrentRecordHalf4())
            btlReflectCreateKind10(0, work, value, -1);
        return;
    }
    case 19: {
        s32 chance = (work->flags & 0x1080) == 0 ? 50 : 0;
        s32 kind = work->selection->kind;
        if (kind == 6) {
            btlMenuCursorStepReflectAction(0, work, 1, work->record, 1);
            frameRangeExtend(block, work, work->record->memberId, 0, 5, 5);
        } else if (kind == 15) {
            btlMenuCursorStepReflectAction(chance, work, 0, work->record, 1);
            frameRangeExtend(block, work, work->record->memberId, 0, 5, 5);
        }
        return;
    }
    case 20:
        battleResolveEscapeAttempt(block, work);
        return;
    case 24:
        if (isEntryUsable(g_btlEvent) != 0)
            return;
        if (work->selection->kind == 11) {
            if (btlEventSelectTrigger(g_btlEvent, 7, work->entry->selectionIndex, 0) == 0)
                return;
        } else {
            if (btlEventSelectTrigger(g_btlEvent, 3, work->entry->selectionIndex, 0) == 0)
                return;
        }
        FUN_0027e38c(g_btlEvent);
        return;
    case 31:
        FUN_003dbb40(g_btlAux);
        return;
    case 32:
        btlQueuePartyHalfRecovery(block, work);
        return;
    case 33:
        if ((work->flags & 0x10000) == 0) {
            u32 flags = work->entry->flags;
            if ((flags & 1) == 0)
                return;
            if ((flags & 0x40) != 0)
                return;
        } else {
            if (state->eventCount <= 0)
                return;
        }
        if (isEntryUsable(g_btlEvent) != 0)
            return;
        if (btlEventSelectTrigger(g_btlEvent, 4, work->entry->selectionIndex, 0) == 0)
            return;
        FUN_0027e38c(g_btlEvent);
        return;
    case 35:
        if ((work->entry->flags & 0x10) == 0)
            btlUiRecountParty(g_btlUiBlock);
        objDestroyChild(g_btlAux);
        btlEffectNumberedRelease(g_btlAux);
        g_btlAux->flags &= ~0x8000u;
        battleResetCounterAndFlag(reinterpret_cast<ResetCounterOwner *>(g_btlAux));
        modelManagerReleaseSlots(g_btlAux);
        modelSetResetSlots(g_btlAux);
        g_btlMain->flags &= ~0x4000u;
        eventCommandDispatchPendingCleanup();
        FUN_00394b8c();
        return;
    default:
        return;
    }
}
}
