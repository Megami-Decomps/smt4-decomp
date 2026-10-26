/* NON_MATCHING: the candidate loop is written three times and the unit scan is a pointer walk (frame 468 now matches); retail tail-duplicates the budget compare into both cost arms and numbers a few callee-saved registers differently. */
#include "common.h"
#include "gamedata/DataTable40.h"

namespace {
/* The battle state block: only the pointer to the unit table (109 units of 0x288 bytes) is read. */
struct BattleBlock {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1fc0 */ u8 *units;
};

/* A battle unit entry: its flags (0x400: takes part in the AI pick) and a skill id at +0xce. */
struct AiUnit {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xca];
    /* 0xce */ u16 skillId;
    /* 0xd0 */ u8 unkd0[0x1b8];
};

/* The command selection the AI fills in. */
struct CommandSelection {
    /* 0x000 */ u8 unk000[0xec];
    /* 0x0ec */ s16 budget;              /* what the actor can still spend */
    /* 0x0ee */ u8 unk0ee[0x5e];
    /* 0x14c */ s16 kind;
    /* 0x14e */ s16 value;
};

/* The command controller's state. */
struct AiState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 *environment;         /* its first word: bit 1: use the second cost table, bits 1-2: ... */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ CommandSelection *selection;
};

struct SkillInfo;
}

extern "C" {
s32 sortRecordCompareKey(const void *a, const void *b);
s32 FUN_002197a0(const void *a, const void *b);
s32 unitCompareByPriorityValue(const void *a, const void *b);
void FUN_002b7bca(void *array, s32 count, s32 elementSize, s32 (*compare)(const void *, const void *));
s32 FUN_003d10a0(BattleBlock **block, AiState *state, AiUnit **units, s32 count, s32 mode);
void FUN_0022abe0(u32 *environment, u16 *skills);
s32 FUN_0029a9d4(u32 id, s32 arg);
s32 FUN_0029a924(u32 id);
s32 FUN_002277d4(BattleBlock **block, AiState *state, SkillInfo *info, AiUnit **units, s32 count, s32 a, s32 b);
s32 FUN_0029e9cc(u32 skillId);
void btlMarkLowestHpUnit(BattleBlock **block);

/* Picks the AI's command: gathers the units that take part, tries the first-choice behaviour, then walks the
   sorted candidate skills in three passes with different modes, and falls back to a plain attack (or a
   guard when a unit can still be hit). */
void FUN_003d06e4(BattleBlock **block, AiState *state)
{
    AiUnit *units[109];
    s32 count = 0;
    AiUnit *walk = reinterpret_cast<AiUnit *>((*block)->units);
    for (s32 i = 0; i < 109; i++, walk++) {
        if ((walk->flags & 0x400) != 0) {
            units[count] = reinterpret_cast<AiUnit *>((*block)->units + i * 0x288);
            count++;
        }
    }
    FUN_002b7bca(units, count, 4, sortRecordCompareKey);
    if (FUN_003d10a0(block, state, units, count, 1) != 0) {
        return;
    }
    u16 skills[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    FUN_0022abe0(state->environment, skills);
    if ((*state->environment & 2) != 0) {
        FUN_002b7bca(skills, 9, 2, FUN_002197a0);
    } else {
        FUN_002b7bca(skills, 9, 2, unitCompareByPriorityValue);
    }
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillInfo *info = reinterpret_cast<SkillInfo *>(dataTable40FindById(skills[i]));
            if (info != NULL) {
                s32 cost = (*state->environment & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
                if (cost <= state->selection->budget) {
                    if (FUN_002277d4(block, state, info, units, count, 1, 0) != 0) {
                        return;
                    }
                }
            }
        }
    }
    if (FUN_003d10a0(block, state, units, count, 0) != 0) {
        return;
    }
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillInfo *info = reinterpret_cast<SkillInfo *>(dataTable40FindById(skills[i]));
            if (info != NULL) {
                s32 cost = (*state->environment & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
                if (cost <= state->selection->budget) {
                    if (FUN_002277d4(block, state, info, units, count, 0, 1) != 0) {
                        return;
                    }
                }
            }
        }
    }
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillInfo *info = reinterpret_cast<SkillInfo *>(dataTable40FindById(skills[i]));
            if (info != NULL) {
                s32 cost = (*state->environment & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
                if (cost <= state->selection->budget) {
                    if (FUN_002277d4(block, state, info, units, count, 0, 2) != 0) {
                        return;
                    }
                }
            }
        }
    }
    for (s32 i = 0; i < count; i++) {
        AiUnit *unit = units[i];
        if ((unit->flags & 0x400) != 0 && FUN_0029e9cc(unit->skillId) != 0) {
            state->selection->kind = 6;
            state->selection->value = 0;
            return;
        }
    }
    state->selection->kind = 1;
    state->selection->value = (*state->environment & 6) != 0;
    btlMarkLowestHpUnit(block);
}

} /* extern "C" */
