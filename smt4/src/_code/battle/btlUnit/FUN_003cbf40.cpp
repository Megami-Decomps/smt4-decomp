/* NON_MATCHING: typed rewrite of the command target-selection step (627 vs 638 rows); register numbering differs (retail keeps work in r6 and the constant 1 in r9) and armcc orders the action-table address computations differently. */
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/DataTable40.h"

/* The battle state words this step reads beyond the shared prefix. */
struct CommandTargetView {
    /* 0x0000 */ u8 unk0000[0x225a];
    /* 0x225a */ u16 checkId;
    /* 0x225c */ u8 unk225c[0x2780];
    /* 0x49dc */ u32 word49dc;
};

typedef char CommandTargetViewOffsets[
    offsetof(CommandTargetView, checkId) == 0x225a && offsetof(CommandTargetView, word49dc) == 0x49dc ? 1 : -1];

/* The skill record byte at 0x55: set when the skill costs a fixed amount. */
struct CostedSkill {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ u8 costed;
};

/* The unit record the action scan reads: its response flags at 0xfa. */
struct CommandUnit {
    /* 0x00 */ u8 unk00[0xfa];
    /* 0xfa */ u16 responseFlags;
};

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlUiBlock;
extern u32 DAT_00439cf8;

CommandUnit *FUN_0027da30(BtlMainState *state, s32 unit);
void FUN_00229098(BtlMainState **block);
s32 FUN_00229118(BtlMainState **block, s32 a, s32 target, CommandState *work);
void FUN_002296dc(u32 ui);
void btlMarkLowestHpUnit(BtlMainState **block);
void FUN_00229a24(u32 ui);
void FUN_00229b10(BtlMainState **block, CommandState *work);
void bgmSwitchCurrent(BtlMainState *state, u32 value);
void FUN_00247478(CommandInfo *info, BtlMainState *state, BtlEntry *entry);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
void gameCounterAddSaturating(s32 counter, s32 amount);
s32 battleUiIsFadeAndFieldReady(u32 ui);
s32 FUN_0028d1f4(s32 skill);
s32 FUN_0029e02c(void);
void FUN_002bf80c(u32 sound);
s32 padIsButtonPressed(u32 button);
s32 FUN_003ae608(u32 ui, s32 button);
u32 FUN_003af054(u32 ui);
void FUN_003af06c(u32 ui, u64 mask);
s32 FUN_003d06e4(BtlMainState **block, CommandState *work);
void FUN_003d0fcc(BtlMainState **block, s32 mode);
void FUN_003d1e2c(BtlMainState **block, CommandState *work);
void FUN_003dda20(s32 a, CommandState *work, s32 amount);

/* Sets the acting combatant's pending action. */
static __inline void setPendingAction(BtlMainState **block, u8 pending)
{
    static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index].pending = pending;
}

/* Clears the target-pick marks of every action. */
static __inline void clearActionMarks(BtlMainState **block)
{
    for (s32 remaining = 109, i = 0; remaining != 0; --remaining, ++i) {
        (*block)->actions[i].status &= ~4;
        (*block)->actions[i].status &= ~8;
    }
}

/* Flags every present unit that has a selection slot as taking part in the pick. */
static __inline void markPickableUnits(BtlMainState **block)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlEntry *entry = &(*block)->entries[i];
        if (entry->selectionIndex >= 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            (entry->flags & 0x10) != 0)
            entry->flags |= 0x400;
    }
}

u32 FUN_003cbf40(BtlMainState **block, CommandState *work)
{
    u32 battleFlags = (*block)->battleFlags;
    if ((battleFlags & 0x40) != 0) {
        if ((work->flags & 0x80) == 0) {
            work->flags |= 0x880;
            setPendingAction(block, 1);
            FUN_002296dc(g_btlUiBlock);
            return 1;
        }
    } else if ((battleFlags & 0x100) != 0 && (work->flags & 0x1000) == 0) {
        work->flags |= 0x1800;
        setPendingAction(block, 1);
        FUN_002296dc(g_btlUiBlock);
        return 1;
    }
    if ((battleFlags & 0x800) != 0)
        return 0;

    bool done = false;
    s32 value = work->selection->value;
    s32 kind = work->selection->kind;
    const CostedSkill *skill = reinterpret_cast<const CostedSkill *>(dataTable40FindById(value));
    CommandInfo info;
    FUN_00247478(&info, *block, work->entry);
    u32 scope = info.scope;

    if ((work->flags & 0x1080) == 0) {
        if (scope == 1) {
            for (s32 remaining = 109, i = 0; remaining != 0; --remaining, ++i) {
                if (work->targetOrder[i] != 0)
                    work->targetMarks[i] = 1;
            }
            FUN_00229118(block, 1, -1, work);
        } else if (scope != 0) {
            for (u32 i = 0; i < 109; ++i) {
                u32 flags = (*block)->entries[i].flags;
                if ((flags & 1) != 0 && (flags & 0x40) == 0)
                    work->targetMarks[i] = 1;
            }
            FUN_00229118(block, 1, -1, work);
        } else {
            FUN_003d1e2c(block, work);
            FUN_00229118(block, 1, work->targetIndex, work);
        }
        for (s32 remaining = 109, i = 0; remaining != 0; --remaining, ++i) {
            BtlActionRecord *action = &(*block)->actions[i];
            if ((action->status & 8) == 0) {
                s32 combatant = action->participant.combatantIndex;
                if (combatant >= 0 && work->targetMarks[combatant] != 0)
                    action->status |= 8;
            }
        }
        s32 handle;
        if (scope == 0 && (handle = static_cast<s32>(FUN_003af054(g_btlUiBlock))) >= 0) {
            for (s32 remaining = 109, i = 0; remaining != 0; --remaining, ++i) {
                (*block)->actions[i].status &= ~8;
                work->targetMarks[i] = 0;
            }
            s32 selected = -1;
            for (s32 k = 0; k < 133; ++k) {
                if (static_cast<s32>(work->windowHandles[k]) == handle) {
                    selected = work->windowSelections[k];
                    break;
                }
            }
            for (s32 i = 0; i < 109; ++i) {
                if ((*block)->entries[i].selectionIndex == selected) {
                    for (s32 j = 0; j < 109; ++j) {
                        BtlActionRecord *action = &(*block)->actions[j];
                        if (action->participant.combatantIndex == selected)
                            action->status |= 8;
                    }
                }
            }
            if (selected >= 0) {
                work->targetIndex = selected;
                work->targetMarks[selected] = 1;
            }
        } else {
            u8 used[136];
            memClear(used, sizeof(used));
            u64 mask = 0;
            for (s32 i = 0; i < 109; ++i) {
                BtlActionRecord *action = &(*block)->actions[i];
                if ((action->status & 8) == 0)
                    continue;
                BtlEntry *entry = btlMainFindEntryByListedId(*block, action->memberId);
                if (entry == NULL)
                    continue;
                for (s32 k = 0; k < 133; ++k) {
                    if (work->windowSelections[k] == entry->selectionIndex && used[k] == 0) {
                        used[k] = 1;
                        mask |= static_cast<u64>(1) << work->windowHandles[k];
                    }
                }
            }
            FUN_003af06c(g_btlUiBlock, mask);
        }
    }

    bool refresh = false;
    if ((work->flags & 0x80) != 0) {
        FUN_00229098(block);
        markPickableUnits(block);
        if (scope != 0)
            FUN_003d0fcc(block, 1);
        else
            btlMarkLowestHpUnit(block);
        clearActionMarks(block);
        FUN_00229b10(block, work);
        refresh = true;
        done = true;
        FUN_00229a24(g_btlUiBlock);
        FUN_00229118(block, 0, -1, NULL);
    } else if ((work->flags & 0x1000) != 0) {
        FUN_00229098(block);
        markPickableUnits(block);
        FUN_003d06e4(block, work);
        clearActionMarks(block);
        FUN_00229b10(block, work);
        refresh = true;
        done = true;
        FUN_00229a24(g_btlUiBlock);
        FUN_00229118(block, 0, -1, NULL);
    } else {
        if (padIsButtonPressed(0) != 0 || FUN_003ae608(g_btlUiBlock, 0) != 0) {
            if (kind != 14) {
                FUN_002bf80c(0x100016d);
                refresh = true;
                for (s32 i = 0; i < 109; ++i) {
                    if (((*block)->actions[i].status & 8) != 0) {
                        reinterpret_cast<CommandTargetView *>(*block)->checkId = (*block)->actions[i].memberId;
                        break;
                    }
                }
                clearActionMarks(block);
                if (kind == 3) {
                    bgmSwitchCurrent(*block, reinterpret_cast<CommandTargetView *>(*block)->word49dc);
                    if (skill->costed != 0) {
                        FUN_00229b10(block, work);
                        s32 cost = FUN_0028d1f4(value);
                        FUN_003dda20(1, work, -cost);
                        gameCounterAddSaturating(1, cost);
                    } else {
                        FUN_00229b10(block, work);
                    }
                } else {
                    FUN_00229b10(block, work);
                }
                done = true;
                FUN_00229a24(g_btlUiBlock);
                FUN_00229118(block, 0, -1, NULL);
            }
        } else if ((padIsButtonPressed(1) != 0 || FUN_003ae608(g_btlUiBlock, 1) != 0) &&
                   FUN_0029e02c() == 0 && battleUiIsFadeAndFieldReady(g_btlUiBlock) != 0) {
            FUN_002bf80c(0x100016e);
            refresh = true;
            clearActionMarks(block);
            work->flags |= 0x800;
            done = true;
            setPendingAction(block, 1);
            FUN_00229118(block, 0, -1, NULL);
        }
    }

    for (s32 i = 0; i < 109; ++i) {
        BtlActionRecord *action = &(*block)->actions[i];
        if ((action->status & 1) != 0 && (action->status & 2) != 0 && (action->stateFlags & 2) == 0) {
            if ((action->status & 8) != 0) {
                action->editorRestore.current = DAT_00439cf8;
            } else {
                action->editorRestore.current = action->editorRestore.saved;
                if (!done) {
                    CommandUnit *unit = FUN_0027da30(*block, action->memberId);
                    if (unit != NULL && (unit->responseFlags & 0x10) == 0) {
                        (*block)->actions[i].editorRestore.current = 0x4c4c4cff;
                        continue;
                    }
                }
                (*block)->actions[i].editorRestore.current = (*block)->actions[i].editorRestore.saved;
            }
        }
    }
    if (refresh)
        FUN_002296dc(g_btlUiBlock);
    return done ? 1 : 0;
}
}
