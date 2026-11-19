/* NON_MATCHING: void phase dispatcher and party lookup recovered; switch layout and instruction scheduling still differ. */
#include "battle/BattleCommandController.h"
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
extern VersionedTextureOwner *DAT_00435d18;

void btlAiScriptCall(u32 argument);
void FUN_00227b14(void *ui, u32 windowId, u32 kind, u32 mode);
void FUN_00229098(BtlMainState **block);
u8 buttonHelpGetStatus(void);
s32 FUN_00293230(BtlMainState *state);
void battleSelectButtonHelpPreset(u32 preset);
void FUN_002569ac(BtlMainState **block, s32 bank);
void btlEntryValuesCopy(BtlMainState **block, CommandState *work);
u32 isEntryUsable(void *event); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "void *" is incompatible with parameter of type "int *")
void FUN_0027e38c(void *event);
void FUN_003ca6c4(BtlMainState **block, CommandState *work);
void btlUiRouteSelectedAction(BtlUi *ui);
u32 FUN_00246454(s32 a, u32 options, BtlEntry *entry);
u32 FUN_003d3944(BtlMainState **block, CommandState *work);
void FUN_0033a780(BtlMainState *state);
void btlResetTransitionProgress(BtlCamera *camera);
void FUN_00256898(s32 a, s32 b);
u32 FUN_003d3ba8(BtlMainState **block, CommandState *work);
u32 FUN_001d2710(BtlMainState *state, CommandState *work, s32 a, s32 target);
u32 btlResolveCommandEvent(BtlMainState **block, CommandState *work);
void FUN_0026beb4(s32 chance, CommandState *work, s32 a, BtlActionRecord *record, s32 b);
s32 questGetCurrentRecordHalf4(void);
u32 btlReflectCreateKind10(s32 a, CommandState *work, s32 value, s32 b);
void frameRangeExtend(BtlMainState **block, CommandState *work, s32 id, s32 a, s32 b, s32 c);
u32 battleResolveEscapeAttempt(BtlMainState **block, CommandState *work);
s32 btlEventSelectTrigger(void *event, s32 trigger, s32 unit, s32 a);
u32 FUN_003dbb40(void *object);
u32 FUN_003ca32c(BtlMainState **block, CommandState *work);
void btlUiRecountParty(BtlUi *ui);
void objDestroyChild(void *object);
void FUN_002276f8(void *object);
void modelManagerReleaseSlots(void *object);
void modelSetResetSlots(void *object);
void eventCommandDispatchPendingCleanup(void);
void FUN_00394b8c(void);

// Initialize the effects, windows and command data for a newly entered action phase.
void btlCommandEnterPhase(BtlMainState **block, s32 phase)
{
    BtlMainState *state = *block;
    s32 actor = state->actionState.index;
    CommandState *work = reinterpret_cast<CommandState *>(&reinterpret_cast<ActionStateChannels *>(g_btlAction.slots)->entries[actor].flags);
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
        if (FUN_00293230(*block) != 0) {
            if (status != 61)
                buttonHelpSetPreset(61);
        } else if (status != 179 && status != 180) {
            battleSelectButtonHelpPreset(0);
        }
        return;
    }
    case 28:
        FUN_002569ac(block, actor);
        btlEntryValuesCopy(block, work);
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
    case 8: {
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
                    FUN_00246454(0, reinterpret_cast<u32>(work), entry);
            }
        }
        return;
    }
    case 11:
        FUN_003d3944(block, work);
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
    case 15: {
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
        return;
    }
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
        FUN_0026beb4(chance, work, 0, NULL, 1);
        s32 value = questGetCurrentRecordHalf4();
        if (value != 0)
            btlReflectCreateKind10(0, work, value, -1);
        return;
    }
    case 19: {
        s32 chance = (work->flags & 0x1080) == 0 ? 50 : 0;
        s32 kind = work->selection->kind;
        if (kind == 6) {
            FUN_0026beb4(0, work, 1, work->record, 1);
            frameRangeExtend(block, work, work->record->memberId, 0, 5, 5);
        } else if (kind == 15) {
            FUN_0026beb4(chance, work, 0, work->record, 1);
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
        FUN_003dbb40(DAT_00435d18);
        return;
    case 32:
        FUN_003ca32c(block, work);
        return;
    case 33:
        if ((work->flags & 0x10000) != 0) {
            if (state->eventCount <= 0)
                return;
        } else {
            u32 flags = work->entry->flags;
            if ((flags & 1) == 0 || (flags & 0x40) != 0)
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
        objDestroyChild(DAT_00435d18);
        FUN_002276f8(DAT_00435d18);
        DAT_00435d18->flags &= ~0x8000u;
        battleResetCounterAndFlag(reinterpret_cast<ResetCounterOwner *>(DAT_00435d18));
        modelManagerReleaseSlots(DAT_00435d18);
        modelSetResetSlots(DAT_00435d18);
        g_btlMain->flags &= ~0x4000u;
        eventCommandDispatchPendingCleanup();
        FUN_00394b8c();
        return;
    default:
        return;
    }
}
}
