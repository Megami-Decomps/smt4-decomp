/* NON_MATCHING: retail re-evaluates the unit table address (g_btlAction+4, then index * 0xf1c) at every store and keeps the 64-bit mask halves in different registers; the control flow and calls are the same. */
#include "common.h"
#include "gamedata/DataTable40.h"

namespace {
/* The battle state block: its flags, the acting unit's index and a pair of words the target pick leaves. */
struct BattleBlock {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ s32 actorIndex;
    /* 0x0088 */ u8 unk0088[0x1f48];
    /* 0x1fd0 */ u64 targetPair;
    /* 0x1fd8 */ u8 unk1fd8[0x24c8];
    /* 0x44a0 */ u32 flags;               /* 0x40, 0x100: a command window is open */
};

/* The battle unit table entry (0xf1c bytes each): only the current action kind is written. */
struct BattleUnit {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 actionKind;
    /* 0x0a */ u8 unk0a[0xf1c - 0xa];
};

/* The battle action globals: the unit table pointer is the second word. */
struct BattleActionGlobals {
    u32 unk00;
    BattleUnit *units;
};

/* The choice the player made in the command menu. */
struct CommandSelection {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ s16 kind;
    /* 0x14e */ s16 value;
};

/* The command controller's state. */
struct CommandState {
    /* 0x000 */ u32 flags;                /* 0x80/0x1000: first/second window done, 0x4000, 0x4, 0x800, 0x1800 */
    /* 0x004 */ u8 unk004[0x1c];
    /* 0x020 */ u32 *environment;         /* its first word: bit 3, the actor can cover the whole party */
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ CommandSelection *selection;
    /* 0x02c */ u8 unk02c[0xc];
    /* 0x038 */ u8 targets[0x40];         /* one flag per candidate target */
};

/* A skill info record (only the kind and its flags). */
struct SkillInfo {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ s8 kind;
    /* 0x24 */ u8 unk24[0x11];
    /* 0x35 */ u8 flags;                  /* bit 3: targets everyone */
};

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 linkedSkill;
};

/* What FUN_00247478 reports about the current command. */
struct CommandInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 kind;
    /* 0x06 */ s8 value;
};
}

extern "C" {
extern BattleActionGlobals g_btlAction;
extern u32 g_btlUiBlock;
s32 FUN_003af084(u32 block);
void btlUiCopyStatePairs(u32 block, char *valid, u64 *mask, u64 *pair);
SkillRecord *dataTable08Sub1GetRecord(s32 id);
s32 FUN_0033a2c4(BattleBlock *block, s32 index);
s32 playerPadTestBit(u32 bit);
void FUN_00247478(CommandInfo *info, BattleBlock *block, u32 *environment);
void FUN_003d0d1c(BattleBlock **block, CommandState *state);
void FUN_00229a24(u32 block);
void FUN_00229b10(BattleBlock **block, CommandState *state);

/* Sets the acting unit's action kind. */
static __inline void setActorAction(BattleBlock **block, u8 kind)
{
    g_btlAction.units[(*block)->actorIndex].actionKind = kind;
}

/* Marks every target the menu reported as chosen. */
static void markChosenTargets(CommandState *state, u64 mask)
{
    for (s32 i = 0; i < 0x40; i++) {
        if ((mask & ((u64)1 << i)) != 0) {
            state->targets[i] = 1;
        }
    }
}

/* Takes the target choice from the command menu: marks the chosen targets (skills that cover the party mark
   them all at once), updates the action kind and hands over to the command executor. Returns 1 once handled,
   0 while waiting. */
u32 FUN_003cae6c(BattleBlock **block, CommandState *state)
{
    if (((*block)->flags & 0x40) != 0) {
        if ((state->flags & 0x80) == 0) {
            state->flags = state->flags | 0x880;
            setActorAction(block, 1);
            return 1;
        }
    } else if (((*block)->flags & 0x100) != 0 && (state->flags & 0x1000) == 0) {
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
            SkillRecord *record = dataTable08Sub1GetRecord(selection->value);
            if (record->linkedSkill != 0) {
                info = reinterpret_cast<SkillInfo *>(dataTable40FindById(record->linkedSkill));
            }
        }
        if (info != NULL && info->kind == 7) {
            if ((info->flags & 8) != 0) {
                FUN_003d0d1c(block, state);
                u32 flags = state->flags;
                state->flags = flags | 0x4000;
                if ((*state->environment & 8) != 0) {
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
                        s32 slot = FUN_0033a2c4(*block, i - 1);
                        if (slot < 0) {
                            slot = i + 0x6c;
                        }
                        state->targets[slot] = 1;
                    } else {
                        state->targets[0] = 1;
                        if (playerPadTestBit(1) != 0) {
                            CommandInfo command;
                            FUN_00247478(&command, *block, state->environment);
                            if (command.kind == 3) {
                                if (!(command.value == 0xe || command.value == 0x11)) {
                                    if (command.value == 1) {
                                        i = 0;
                                        continue;
                                    }
                                    state->targets[0] = 0;
                                }
                            } else {
                                state->targets[0] = 0;
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
    (*block)->targetPair = pair;
    FUN_00229a24(g_btlUiBlock);
    FUN_00229b10(block, state);
    return 1;
}

} /* extern "C" */
