/* NON_MATCHING: typed rewrite of the command-window phase dispatcher (490 vs 484 rows); retail returns whatever register is left over (the actor index for unhandled phases) on its fall-through exits, which C cannot express, and numbers the callee-saved registers differently. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/SaveSlotTable.h"

/* The party member record a battle entry is linked to: its id at 0x46. */
struct PartyMemberRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
};

/* The entry words the slot lookup writes. */
struct EntryLinkView {
    /* 0x000 */ u8 unk000[0xce];
    /* 0x0ce */ u16 id;
    /* 0x0d0 */ u8 unk0d0[4];
    /* 0x0d4 */ s16 category;
    /* 0x0d6 */ u8 unk0d6[0x1a6];
    /* 0x27c */ PartyMemberRecord *link;
};

/* The battle state word the escape/event phases read. */
struct BattlePhaseView {
    /* 0x0000 */ u8 unk0000[0x1fc4];
    /* 0x1fc4 */ s16 count;
};

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlUiBlock;
extern void *g_btlMain;
extern void *g_btlEvent;
extern void *DAT_00435d18;

u32 btlAiScriptCall(CommandState *work);
void FUN_00227b14(u32 ui, u32 windowId, s32 kind, s32 mode);
u32 FUN_00229c5c(u32 ui, u32 windowId, s32 mode);
s32 FUN_00229098(BtlMainState **block);
u8 buttonHelpGetStatus(void);
s32 FUN_00293230(BtlMainState *state);
u32 buttonHelpSetPreset(u32 preset);
u32 battleSelectButtonHelpPreset(u32 preset);
void FUN_002569ac(BtlMainState **block, s32 bank);
void btlEntryValuesCopy(BtlMainState **block, CommandState *work);
u32 FUN_0027e3b8(void *event);
u32 FUN_0027e38c(void *event);
u32 FUN_003ca6c4(BtlMainState **block, CommandState *work);
void btlUiRouteSelectedAction(u32 ui);
SaveSlotTable *gameGetSlotTable(void);
PartyMemberRecord *saveResolvePartySlot(s32 slot);
s32 gameSlotFindByCategory(void);
void FUN_00246454(s32 a, CommandState *work, BtlEntry *entry);
u32 FUN_003d3944(BtlMainState **block, CommandState *work);
u32 FUN_00244fb0(BtlMainState *state, u32 slot, u32 palette, u32 param, u32 alpha);
void FUN_0033a780(BtlMainState *state);
void btlResetTransitionProgress(void *main);
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
void btlUiRecountParty(u32 ui);
void objDestroyChild(void *object);
void FUN_002276f8(void *object);
void battleResetCounterAndFlag(void);
void modelManagerReleaseSlots(void *object);
void modelSetResetSlots(void *object);
void eventCommandDispatchPendingCleanup(void);
u32 FUN_00394b8c(void);

u32 FUN_003d2140(BtlMainState **block, u32 phase)
{
    ActionStateChannel *channel = &static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index];
    CommandState *work = reinterpret_cast<CommandState *>(reinterpret_cast<u8 *>(channel) + 4);
    BtlMainState *state = *block;
    u32 result = 0;
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
            return 0;
        }
        return FUN_00229c5c(g_btlUiBlock, work->windowId, 1);
    case 2: {
        btlAiScriptCall(work);
        memClear(work->targetMarks, 0x85);
        FUN_00229098(block);
        s32 status = buttonHelpGetStatus();
        result = FUN_00293230(*block);
        if (result != 0) {
            if (status != 61)
                return buttonHelpSetPreset(61);
        } else if (status != 179 && status != 180) {
            return battleSelectButtonHelpPreset(0);
        }
        return result;
    }
    case 28:
        FUN_002569ac(block, (*block)->actionState.index);
        btlEntryValuesCopy(block, work);
        if (FUN_0027e3b8(g_btlEvent) != 0)
            return result;
        return FUN_0027e38c(g_btlEvent);
    case 5:
        return FUN_003ca6c4(block, work);
    case 7:
        btlUiRouteSelectedAction(g_btlUiBlock);
        memClear(work->targetMarks, 0x85);
        // retail returns the slot table pointer the tail call leaves in r0.
        return reinterpret_cast<u32>(gameGetSlotTable());
    case 8: {
        SaveSlotTable *slots = gameGetSlotTable();
        for (s32 index = 0; index < 4; ++index) {
            BtlEntry *entry = &state->entries[index];
            if ((entry->flags & 1) != 0 && (entry->flags & 8) != 0) {
                s32 slot = 0;
                for (; slot < 3; ++slot) {
                    if (reinterpret_cast<s8 *>(slots)[slot + 0x9108] >= 0) {
                        PartyMemberRecord *member = saveResolvePartySlot(slot);
                        if (member->id == entry->id) {
                            reinterpret_cast<EntryLinkView *>(entry)->link = member;
                            reinterpret_cast<EntryLinkView *>(entry)->category = gameSlotFindByCategory();
                            break;
                        }
                    }
                }
                if (slot == 3)
                    FUN_00246454(0, work, entry);
            }
        }
        return 0;
    }
    case 11:
        return FUN_003d3944(block, work);
    case 12:
        return FUN_00244fb0(state, 0, 1, 10, 0xff);
    case 13:
        FUN_0033a780(state);
        btlResetTransitionProgress(g_btlMain);
        channel->timer = 0;
        FUN_00256898(0, 0);
        return buttonHelpSetPreset(237);
    case 14:
        return FUN_003d3ba8(block, work);
    case 15: {
        s32 target = -1;
        s32 index = 0;
        if ((state->battleFlags & 0x200) != 0) {
            BtlEntry *entries = state->entries;
            for (; index < 109; ++index) {
                BtlEntry *entry = &entries[index];
                if ((entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 && entry->members.ids[0] >= 0 &&
                    (entry->flags & 0x10) != 0) {
                    target = entry->members.ids[0];
                    break;
                }
            }
        } else {
            for (; index < 109; ++index) {
                s32 combatant = state->actions[index].participant.combatantIndex;
                if (combatant >= 0 && work->targetMarks[combatant] != 0) {
                    target = state->actions[index].memberId;
                    break;
                }
            }
        }
        return FUN_001d2710(state, work, 0, target);
    }
    case 16:
        return btlResolveCommandEvent(block, work);
    case 3:
    case 17:
        memClear(work->targetMarks, 0x85);
        return FUN_00229098(block);
    case 18: {
        s32 chance = (work->flags & 0x1080) == 0 ? 50 : 0;
        FUN_0026beb4(chance, work, 0, NULL, 1);
        s32 value = questGetCurrentRecordHalf4();
        if (value == 0)
            return result;
        return btlReflectCreateKind10(0, work, value, -1);
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
        return result;
    }
    case 20:
        return battleResolveEscapeAttempt(block, work);
    case 24:
        if (FUN_0027e3b8(g_btlEvent) != 0)
            return result;
        if (work->selection->kind == 11) {
            if (btlEventSelectTrigger(g_btlEvent, 7, work->entry->selectionIndex, 0) == 0)
                return 0;
        } else {
            if (btlEventSelectTrigger(g_btlEvent, 3, work->entry->selectionIndex, 0) == 0)
                return result;
        }
        return FUN_0027e38c(g_btlEvent);
    case 31:
        return FUN_003dbb40(DAT_00435d18);
    case 32:
        return FUN_003ca32c(block, work);
    case 33:
        if ((work->flags & 0x10000) != 0) {
            if (reinterpret_cast<BattlePhaseView *>(state)->count <= 0)
                return result;
        } else {
            u32 flags = work->entry->flags;
            if ((flags & 1) == 0 || (flags & 0x40) != 0)
                return result;
        }
        if (FUN_0027e3b8(g_btlEvent) != 0)
            return result;
        if (btlEventSelectTrigger(g_btlEvent, 4, work->entry->selectionIndex, 0) == 0)
            return result;
        return FUN_0027e38c(g_btlEvent);
    case 35:
        if ((work->entry->flags & 0x10) == 0)
            btlUiRecountParty(g_btlUiBlock);
        objDestroyChild(DAT_00435d18);
        FUN_002276f8(DAT_00435d18);
        reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(DAT_00435d18) + 0x3028)[0] &= ~0x8000u;
        battleResetCounterAndFlag();
        modelManagerReleaseSlots(DAT_00435d18);
        modelSetResetSlots(DAT_00435d18);
        static_cast<BtlMain *>(g_btlMain)->flags &= ~0x4000u;
        eventCommandDispatchPendingCleanup();
        return FUN_00394b8c();
    default:
        return result;
    }
}
}
