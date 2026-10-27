/* NON_MATCHING: the candidate loop is written three times and the unit scan is a pointer walk (frame 468 now matches); retail tail-duplicates the budget compare into both cost arms and numbers a few callee-saved registers differently. */
#include "common.h"
#include "gamedata/DataTable40.h"
#include "battle/BattleCommandController.h"
#include "battle/BtlMainAccess.h"

struct SkillInfo;

extern "C" {
s32 sortRecordCompareKey(const void *a, const void *b);
s32 FUN_002197a0(const void *a, const void *b);
s32 unitCompareByPriorityValue(const void *a, const void *b);
void FUN_002b7bca(void *array, s32 count, s32 elementSize, s32 (*compare)(const void *, const void *));
s32 FUN_003d10a0(BtlMainState **block, CommandState *state, BtlEntry **units, s32 count, s32 mode);
void FUN_0022abe0(BtlEntry *entry, u16 *skills);
s32 FUN_0029a9d4(u32 id, s32 arg);
s32 FUN_0029a924(u32 id);
s32 FUN_002277d4(BtlMainState **block, CommandState *state, SkillInfo *info, BtlEntry **units, s32 count, s32 a, s32 b);
s32 FUN_0029e9cc(u32 skillId);
void btlMarkLowestHpUnit(BtlMainState **block);

/* Picks the AI's command: gathers the units that take part, tries the first-choice behaviour, then walks the
   sorted candidate skills in three passes with different modes, and falls back to a plain attack (or a
   guard when a unit can still be hit). */
void FUN_003d06e4(BtlMainState **block, CommandState *state)
{
    BtlEntry *units[109];
    s32 count = 0;
    BtlEntry *walk = (*block)->entries;
    for (s32 i = 0; i < 109; i++, walk++) {
        if ((walk->flags & 0x400) != 0) {
            units[count] = &(*block)->entries[i];
            count++;
        }
    }
    FUN_002b7bca(units, count, 4, sortRecordCompareKey);
    if (FUN_003d10a0(block, state, units, count, 1) != 0) {
        return;
    }
    u16 skills[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    FUN_0022abe0(state->entry, skills);
    if ((state->entry->flags & 2) != 0) {
        FUN_002b7bca(skills, 9, 2, FUN_002197a0);
    } else {
        FUN_002b7bca(skills, 9, 2, unitCompareByPriorityValue);
    }
    for (s32 i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            SkillInfo *info = reinterpret_cast<SkillInfo *>(dataTable40FindById(skills[i]));
            if (info != NULL) {
                s32 cost = (state->entry->flags & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
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
                s32 cost = (state->entry->flags & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
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
                s32 cost = (state->entry->flags & 2) != 0 ? FUN_0029a9d4(skills[i], 1) : FUN_0029a924(skills[i]);
                if (cost <= state->selection->budget) {
                    if (FUN_002277d4(block, state, info, units, count, 0, 2) != 0) {
                        return;
                    }
                }
            }
        }
    }
    for (s32 i = 0; i < count; i++) {
        BtlEntry *unit = units[i];
        if ((unit->flags & 0x400) != 0 && FUN_0029e9cc(unit->id) != 0) {
            state->selection->kind = 6;
            state->selection->value = 0;
            return;
        }
    }
    state->selection->kind = 1;
    state->selection->value = (state->entry->flags & 6) != 0;
    btlMarkLowestHpUnit(block);
}

} /* extern "C" */
