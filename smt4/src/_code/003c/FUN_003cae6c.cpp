/* NON_MATCHING: retail re-evaluates the unit table address (g_btlAction+4, then index * 0xf1c) at every store and keeps the 64-bit mask halves in different registers; the control flow and calls are the same. */
#include "common.h"
#include "gamedata/DataTable40.h"
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"

namespace {
/* A skill info record (only the kind and its flags). */
struct SkillInfo {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ s8 kind;
    /* 0x24 */ u8 unk24[0x11];
    /* 0x35 */ u8 flags;                  /* bit 3: targets everyone */
};

}

extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlUiBlock;
s32 FUN_003af084(u32 block);
void btlUiCopyStatePairs(u32 block, char *valid, u64 *mask, u64 *pair);
SkillLinkRecord *dataTable08Sub1GetRecord(s32 id);
s32 btlFindEntrySelectionByKey(BtlMainState *block, s32 index);
s32 playerPadTestBit(u32 bit);
void FUN_00247478(CommandInfo *info, BtlMainState *block, BtlEntry *entry);
void FUN_003d0d1c(BtlMainState **block, CommandState *state);
void FUN_00229a24(u32 block);
void FUN_00229b10(BtlMainState **block, CommandState *state);

/* Sets the acting unit's action kind. */
static __inline void setActorAction(BtlMainState **block, u8 kind)
{
    static_cast<ActionStateChannels *>(g_btlAction.data)->entries[(*block)->actionState.index].pending = kind;
}

/* Marks every target the menu reported as chosen. */
static void markChosenTargets(CommandState *state, u64 mask)
{
    for (s32 i = 0; i < 0x40; i++) {
        if ((mask & ((u64)1 << i)) != 0) {
            state->targetMarks[i] = 1;
        }
    }
}

/* Takes the target choice from the command menu: marks the chosen targets (skills that cover the party mark
   them all at once), updates the action kind and hands over to the command executor. Returns 1 once handled,
   0 while waiting. */
u32 FUN_003cae6c(BtlMainState **block, CommandState *state)
{
    if (((*block)->battleFlags & 0x40) != 0) {
        if ((state->flags & 0x80) == 0) {
            state->flags = state->flags | 0x880;
            setActorAction(block, 1);
            return 1;
        }
    } else if (((*block)->battleFlags & 0x100) != 0 && (state->flags & 0x1000) == 0) {
        state->flags = state->flags | 0x1800;
        setActorAction(block, 1);
        return 1;
    }
    if (FUN_003af084(g_btlUiBlock) == 0) {
        return 0;
    }
    char valid = 0;
    u64 mask = 0;
    u64 pair = 0;
    btlUiCopyStatePairs(g_btlUiBlock, &valid, &mask, &pair);
    CommandSelection *selection = state->selection;
    if (valid == 0) {
        if (selection->kind != 10) {
            state->flags = state->flags | 0x800;
            setActorAction(block, 1);
            return 1;
        }
        setActorAction(block, 0x1b);
        return 1;
    }
    s32 kind = selection->kind;
    SkillInfo *info = NULL;
    if (kind == 9) {
        markChosenTargets(state, mask);
    } else if (kind == 10) {
        if (mask == 0) {
            setActorAction(block, 0x1b);
            return 1;
        }
        markChosenTargets(state, mask);
    } else if (kind == 0xd) {
        markChosenTargets(state, mask);
    } else {
        if (kind == 2 || kind == 3) {
            info = reinterpret_cast<SkillInfo *>(dataTable40FindById(selection->value));
        } else if (kind == 8) {
            SkillLinkRecord *record = dataTable08Sub1GetRecord(selection->value);
            if (record->linkedSkill != 0) {
                info = reinterpret_cast<SkillInfo *>(dataTable40FindById(record->linkedSkill));
            }
        }
        if (info != NULL && info->kind == 7) {
            if ((info->flags & 8) != 0) {
                FUN_003d0d1c(block, state);
                u32 flags = state->flags;
                state->flags = flags | 0x4000;
                if ((state->entry->flags & 8) != 0) {
                    state->flags = flags | 0x4004;
                }
                FUN_00229a24(g_btlUiBlock);
                FUN_00229b10(block, state);
                return 1;
            }
            markChosenTargets(state, mask);
        } else {
            /* Per-target pick: slot 0 is the actor and may be dropped again by the command. */
            for (s32 i = 0; i < 0x40; i++) {
                if ((mask & ((u64)1 << i)) != 0) {
                    if (i != 0) {
                        s32 slot = btlFindEntrySelectionByKey(*block, i - 1);
                        if (slot < 0) {
                            slot = i + 0x6c;
                        }
                        state->targetMarks[slot] = 1;
                    } else {
                        state->targetMarks[0] = 1;
                        if (playerPadTestBit(1) != 0) {
                            CommandInfo command;
                            FUN_00247478(&command, *block, state->entry);
                            if (command.kind == 3) {
                                if (!(command.value == 0xe || command.value == 0x11)) {
                                    if (command.value == 1) {
                                        i = 0;
                                        continue;
                                    }
                                    state->targetMarks[0] = 0;
                                }
                            } else {
                                state->targetMarks[0] = 0;
                            }
                        }
                    }
                }
            }
            FUN_00229a24(g_btlUiBlock);
            FUN_00229b10(block, state);
            return 1;
        }
    }
    (*block)->pendingAction = pair;
    FUN_00229a24(g_btlUiBlock);
    FUN_00229b10(block, state);
    return 1;
}

} /* extern "C" */
