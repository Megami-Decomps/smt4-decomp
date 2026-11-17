/* NON_MATCHING: retail reads some 64-bit kind masks as two word loads and others with ldrd, and repeats the queued-action check in each branch without merging the tails; ours uses ldrd throughout and shares the check (164 rows against 203). Logic and constants agree with retail. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BattleSkillResponseMasks.h"

/* The action-kind masks the AI chance logic tests a unit's input word against (observed fields). */

/* The unit the chance is for (observed fields). */
struct BtlAiUnit {
    /* 0x000 */ u64 input;
    /* 0x008 */ u8 unk008[0x108];
    /* 0x110 */ s32 queuedAction;
    /* 0x114 */ u8 unk114[0x144];
    /* 0x258 */ s32 hp;
    /* 0x25C */ s32 maxHp;
    /* 0x260 */ u8 unk260[0x6A];
    /* 0x2CA */ u16 category;      /* top six bits */
};

/* The battle state's words (observed fields). */
struct BtlAiState {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ u64 forced;
    /* 0x45A8 */ u64 blocked;
    /* 0x45B0 */ u8 unk45B0[0x894];
    /* 0x4E44 */ u8 forcedResult;
};

struct BtlAiScales {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 scaleA;
    /* 0x14 */ f32 scaleC;
};

extern "C" {
s32 gameFlagIsSet(u32 flag);
BtlAiUnit *btlMainFindEntryByListedId(BtlAiState *state, void *actor);
BtlAiScales *FUN_0028cb6c(void);
s32 lcgRandomRange(u32 limit);

/* Whether the actor's unit already has an action queued. */
static __inline bool btlAiUnitHasQueuedAction(void *actor)
{
    BtlAiUnit *unit = btlMainFindEntryByListedId(reinterpret_cast<BtlAiState *>(btlGetMainState()), actor);

    return unit != NULL && unit->queuedAction > 0;
}

/* Rolls whether `actor` takes its action: the base chance comes from the kind of action it has
 * chosen, scaled by the unit's tendencies; returns 1 when the roll succeeds. `mode` 2 and `flag` 1
 * select the ally and aggressive variants. */
u32 FUN_004bf348(void *actor, s32 mode, s32 flag)
{
    BtlAiState *state = reinterpret_cast<BtlAiState *>(btlGetMainState());
    BtlAiUnit *unit;
    s32 chance;
    s32 roll;

    if ((state->blocked & g_btlSkillResponseMasks.blockKind) != 0 || gameFlagIsSet(0x46E) != 0) {
        return 1;
    }
    if (gameFlagIsSet(0x472) != 0) {
        return 0;
    }
    chance = 40;
    unit = btlMainFindEntryByListedId(state, actor);
    if (unit != NULL) {
        u64 input = unit->input;

        if ((input & g_btlSkillResponseMasks.mappedKind) != 0 || (input & g_btlSkillResponseMasks.sourceKind) != 0) {
            chance = 30;
            if (flag == 1) {
                chance = 85;
                if ((input & g_btlSkillResponseMasks.boostKind) != 0) {
                    chance = 100;
                }
            }
            if (mode != 1 && mode == 2 && (input & g_btlSkillResponseMasks.allyKind) != 0) {
                if (btlAiUnitHasQueuedAction(actor)) {
                    return 1;
                }
            }
        } else if ((input & g_btlSkillResponseMasks.kindD) != 0) {
            if (mode != 1 && mode == 2 && (input & g_btlSkillResponseMasks.allyKind) != 0) {
                if (btlAiUnitHasQueuedAction(actor)) {
                    return 1;
                }
            }
        } else if ((input & g_btlSkillResponseMasks.demonKind) != 0) {
            if ((unit->category >> 10) == 1) {
                return 0;
            }
            if (flag == 1) {
                chance = 85;
                if ((input & g_btlSkillResponseMasks.boostKind) != 0) {
                    chance = 100;
                }
            }
            if (mode != 1 && mode == 2 && (input & g_btlSkillResponseMasks.allyKind) != 0) {
                if (btlAiUnitHasQueuedAction(actor)) {
                    return 1;
                }
            }
        }
        input = unit->input;
        if ((input & g_btlSkillResponseMasks.demonKind) != 0 && unit->hp * 100 / unit->maxHp <= 40 && chance < 80) {
            chance = 80;
        }
        if ((input & g_btlSkillResponseMasks.mappedKind) != 0 || (input & g_btlSkillResponseMasks.sourceKind) != 0) {
            chance = (s32)(FUN_0028cb6c()->scaleA * (f32)chance);
        }
        if ((unit->input & g_btlSkillResponseMasks.demonKind) != 0) {
            chance = (s32)(FUN_0028cb6c()->scaleC * (f32)chance);
        }
    }
    roll = lcgRandomRange(99);
    if ((state->forced & g_btlSkillResponseMasks.alwaysProc) != 0) {
        chance = state->forcedResult != 0 ? 100 : 0;
    }
    return roll < chance;
}

} /* extern "C" */
