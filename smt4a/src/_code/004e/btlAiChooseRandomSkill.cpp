/* NON_MATCHING: the interrupt test ands the flag and mask halves in the other registers, retail loads reachMask with ldm but requiredMask's halves with separate ldr (ours: two ldm), and the slot index load is scheduled after the 0x495 stride constant (retail: before). */
#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "util/Random.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BtlGlobals.h"

extern "C" {

#define SKILL_SLOTS 9

enum {
    SKILL_MODE_UNUSABLE = 1,  /* effectProperties.mode: the skill cannot be used */
    SKILL_TARGET_ALLY = 4,    /* effectProperties.targeting: the skill targets an ally */
    BTL_UNIT_AI_DONE = 0x8000 /* BtlUnitA flags: the AI has chosen the action */
};

s32 source4CCopyHalves(BtlCombatantEntryA *entry, u16 *out);
void qsort(void *base, s32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 compareHalfwordsDescending(const u16 *left, const u16 *right);
s32 uiCompareHalfwordValuesDescending(const u16 *left, const u16 *right);
s32 FUN_004c9160(s32, BtlCombatantEntryA *, s32, s32);
s32 btlUnitSetParam(BtlMainStateA **owner, s32 param, s32 value, s32 flag);
s32 FUN_004eb838(BtlMainStateA **owner, BtlUnitA *unit);
s32 FUN_004a9308(BtlUiA *block, u32 index, s32 flag, s32 arg);

/* Sets the command of the owner's action slot (FUN_004eb838's setScriptState). */
static __inline void setScriptState(BtlMainStateA **owner, u8 command)
{
    BtlActionSlotA &slot = g_btlAction.slots[(*owner)->unitRecord.currentSlot];
    slot.unit.command = command;
}

/* AI step: with the interrupt flags clear and a coin flip, picks a usable skill from the
 * unit's list at random; otherwise the unit just waits. */
u32 btlAiChooseRandomSkill(BtlMainStateA **owner, BtlUnitA *unit)
{
    s32 roll = lcgRandomRange(1);
    s32 count = 0;

    if (((*owner)->stateFlags64.bits & g_btlAction.interruptMask) == 0 && roll == 1) {
        u16 skills[10] = { 0 };
        source4CCopyHalves(unit->entry, skills);
        for (s32 i = 0; i < SKILL_SLOTS; i++) {
            if (skills[i] != 0) {
                SkillDataRecordA *record = skillDataFindById(skills[i]);

                if (record != NULL && record->effectProperties.mode != 0 &&
                    record->effectProperties.mode != SKILL_MODE_UNUSABLE) {
                    count++;
                } else {
                    skills[i] = 0;
                }
            }
        }
        if (count != 0) {
            qsort(skills, SKILL_SLOTS, 2, (s32 (*)(const void *, const void *))compareHalfwordsDescending);
            FUN_004c9160(10, unit->entry, 0, 1);
            qsort(skills, count, 2, (s32 (*)(const void *, const void *))uiCompareHalfwordValuesDescending);
            s32 pick = lcgRandomRange((u16)(count - 1));
            unit->data->actionKind = 2;
            unit->data->actionArg = skills[pick];
            unit->flags |= BTL_UNIT_AI_DONE;
            if (skillDataFindById(skills[pick])->effectProperties.targeting == SKILL_TARGET_ALLY) {
                btlUnitSetParam(owner, 0xF, 0, 1);
            } else {
                btlUnitSetParam(owner, 2, 0, 1);
            }
            FUN_004eb838(owner, unit);
            return 1;
        }
    }
    FUN_004c9160(9, unit->entry, 0, 1);
    if (((g_btlAction.interaction.reachMask | g_btlAction.interaction.requiredMask) & unit->entry->flags) == 0) {
        FUN_004a9308(g_btlUiBlock, unit->id, 0, 0);
    }
    unit->data->actionKind = 0xF;
    setScriptState(owner, 0x13);
    return 1;
}

} /* extern "C" */
