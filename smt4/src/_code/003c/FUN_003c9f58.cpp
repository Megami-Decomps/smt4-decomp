/* NON_MATCHING: retail keeps 0/1 results in r6 with one shared return, reloads the battle block per access and orders the switch's per-case stores differently; the logic and calls are the same. */
#include "common.h"
#include "battle/btlHelp.h"

namespace {
/* The battle state block: its flags and the index of the acting unit. */
struct BattleBlock {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ s32 actorIndex;
    /* 0x0088 */ u8 unk0088[0x4418];
    /* 0x44a0 */ u32 flags;               /* 0x40, 0x100: a command window is open; 0x8000: reflect effect running */
};

/* The battle unit table entry (0xf1c bytes each): only the current action kind is written. */
struct BattleUnit {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 actionKind;
    /* 0x0a */ u8 unk0a[0xf1c - 0xa];
};

/* The choice the player made in the command menu. */
struct CommandSelection {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ s16 kind;
    /* 0x14e */ s16 value;
};

/* The command controller's state. */
struct CommandState {
    /* 0x000 */ u32 flags;                /* 0x80: first window done, 0x1000: second window done */
    /* 0x004 */ u8 unk004[0x1c];
    /* 0x020 */ u32 *environment;         /* bit 1: the actor can use items */
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ CommandSelection *selection;
    /* 0x02c */ u16 windowId;
    /* 0x02e */ u8 unk02e[0x572];
    /* 0x5a0 */ s32 itemSlot;
};

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 linkedSkill;
};
}

extern "C" {
extern BattleUnit *g_btlScriptUnit;
extern u32 g_btlActionReflect;
extern u32 g_btlUiBlock;
s32 nodeListCountActiveById(u32 id, u32 arg);
void FUN_003adc20(u32 block);
s32 battleUiIsFadeAndFieldReady(u32 block);
void btlUiAdvanceFadeInTransition(u32 block);
s32 btlUiAcceptSelection(u32 block);
void btlUiGetAcceptedSelection(u32 block, s16 *kind, s16 *value);
s32 FUN_0023dcb8(void);
void *dataTable40FindById(s32 id);
SkillRecord *dataTable08Sub1GetRecord(s32 id);
s32 FUN_002cf124(void *record);
void battleSetActionKind(BattleBlock **block);
void FUN_00229b10(BattleBlock **block, CommandState *state);

/* Sets the acting unit's action kind. */
static __inline void setActorAction(BattleBlock **block, u8 kind)
{
    g_btlScriptUnit[(*block)->actorIndex].actionKind = kind;
}

/* Steps the command menu: opens the windows as the fade allows, takes the player's choice and sets the actor's
   action kind from it. Returns 1 once a choice has been handled, 0 while waiting. */
u32 FUN_003c9f58(BattleBlock **block, CommandState *state)
{
    BattleBlock *battle = *block;
    if ((battle->flags & 0x8000) != 0) {
        if (nodeListCountActiveById(g_btlActionReflect, 0) > 0) {
            return 0;
        }
        (*block)->flags = (*block)->flags & 0xffff7fff;
        FUN_003adc20(g_btlUiBlock);
    }
    if (battleUiIsFadeAndFieldReady(g_btlUiBlock) != 0) {
        if (((*block)->flags & 0x40) != 0) {
            if ((state->flags & 0x80) == 0) {
                state->flags = state->flags | 0x80;
                btlUiAdvanceFadeInTransition(g_btlUiBlock);
                FUN_00229c5c(g_btlUiBlock, state->windowId, 1);
            }
        } else if (((*block)->flags & 0x100) != 0 && (state->flags & 0x1000) == 0) {
            state->flags = state->flags | 0x1000;
            btlUiAdvanceFadeInTransition(g_btlUiBlock);
            FUN_00229c5c(g_btlUiBlock, state->windowId, 1);
        }
    }
    if (btlUiAcceptSelection(g_btlUiBlock) == 0) {
        return 0;
    }
    CommandSelection *selection = state->selection;
    btlUiGetAcceptedSelection(g_btlUiBlock, &selection->kind, &selection->value);
    if ((state->flags & 0x80) != 0) {
        if ((*state->environment & 2) != 0) {
            if (FUN_0023dcb8() != 0) {
                state->selection->kind = 6;
                state->selection->value = 0;
            } else {
                state->selection->kind = 1;
                state->selection->value = 1;
            }
        } else {
            state->selection->kind = 1;
            state->selection->value = 1;
        }
    } else if ((state->flags & 0x1000) != 0) {
        if ((*state->environment & 2) != 0) {
            if (FUN_0023dcb8() != 0) {
                state->selection->kind = 6;
                state->selection->value = 0;
            } else {
                state->selection->kind = 1;
                state->selection->value = 1;
            }
        } else {
            state->selection->kind = 1;
            state->selection->value = 1;
        }
    }
    switch (state->selection->kind) {
    default:
        return 1;
    case 1:
        setActorAction(block, 5);
        return 1;
    case 2:
    case 3:
        if (FUN_002cf124(dataTable40FindById(state->selection->value)) == 0) {
            setActorAction(block, 7);
        } else {
            setActorAction(block, 5);
        }
        return 1;
    case 4:
    case 0xb:
        battleSetActionKind(block);
        return 1;
    case 6:
    case 0xf:
        FUN_00229b10(block, state);
        return 1;
    case 7:
        state->itemSlot = state->selection->value;
        if (state->selection->value != 7) {
            setActorAction(block, 5);
        } else {
            setActorAction(block, 0xb);
        }
        return 1;
    case 8: {
        SkillRecord *record = dataTable08Sub1GetRecord(state->selection->value);
        if (record->linkedSkill != 0) {
            if (FUN_002cf124(dataTable40FindById(record->linkedSkill)) != 0) {
                setActorAction(block, 5);
                return 1;
            }
        }
        setActorAction(block, 7);
        return 1;
    }
    case 9:
    case 10:
    case 0xd:
        setActorAction(block, 7);
        return 1;
    case 0xe:
        setActorAction(block, 5);
        return 1;
    }
}

} /* extern "C" */
