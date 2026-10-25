/* NON_MATCHING: retail loads the 64-bit flag masks with ldm (4-aligned) and tests the skill's usable bits without CSE (tst, then and/cmp); the unit table is indexed through a u32 stride (lsl #2). */
#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

#define SKILL_SLOTS 9

/* Skill record flags: bits 9-10 are the "usable" selector, bits 5-8 the element class. */
#define SKILL_USABLE_MASK 0x600
#define SKILL_USABLE_NONE 0x200
#define SKILL_ELEMENT_MASK 0x1FF
#define SKILL_ELEMENT_SHIFT 5
#define SKILL_ELEMENT_ALLY 4

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

struct BtlUnitData {
    /* 0x0000 */ u8 unk0000[0xA4];
    /* 0x00A4 */ s32 unitIndex;
    /* 0x00A8 */ u8 unk00A8[0x44F8];
    /* 0x45A0 */ u64 flags;
};

struct BtlUnitHandle {
    /* 0x00 */ BtlUnitData *data;
};

struct BtlTargetSet {
    /* 0x00 */ u64 flags;
};

struct BtlActionChoice {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ u16 mode;
    /* 0x1C0 */ u16 skillId;
};

struct BtlAiAction {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ BtlTargetSet *targets;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlActionChoice *choice;
    /* 0x2C */ u16 uiIndex;
};

struct BtlScriptUnit {
    /* 0x0000 */ u8 unk0000[9];
    /* 0x0009 */ u8 state;
    /* 0x000A */ u8 unk000A[0x124A];
};

struct BtlActionMasks {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ BtlScriptUnit *units;
    /* 0x008 */ u8 unk008[0x28];
    /* 0x030 */ u64 blockedA;
    /* 0x038 */ u64 blockedB;
    /* 0x040 */ u8 unk040[0xE8];
    /* 0x128 */ u64 interruptMask;
};

#define BTL_ACTION_AI_DONE 0x8000

s32 lcgRandomRange(u32 limit);
s32 source4CCopyHalves(u32 set, u16 *out);
void qsort(void *base, s32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 compareHalfwordsDescending(const u16 *left, const u16 *right);
s32 uiCompareHalfwordValuesDescending(const u16 *left, const u16 *right);
s32 FUN_004c9160(s32, BtlTargetSet *, s32, s32);
s32 btlUnitSetParam(BtlUnitHandle *unit, s32 param, s32 value, s32 flag);
s32 FUN_004eb838(BtlUnitHandle *unit, BtlAiAction *action);
s32 FUN_004a9308(void *block, u32 index, s32 flag, s32 arg);

extern BtlActionMasks g_btlAction;
extern void *g_btlUiBlock;

/* AI step: with the interrupt flags clear and a coin flip, picks a usable skill from the
 * target's list at random; otherwise the unit just waits. */
u32 FUN_004e6018(BtlUnitHandle *unit, BtlAiAction *action)
{
    s32 roll = lcgRandomRange(1);
    s32 count = 0;

    if ((unit->data->flags & g_btlAction.interruptMask) == 0 && roll == 1) {
        u16 skills[10] = { 0 };
        source4CCopyHalves((u32)action->targets, skills);
        for (s32 i = 0; i < SKILL_SLOTS; i++) {
            if (skills[i] != 0) {
                SkillRecord *record = (SkillRecord *)dataTable04FindById(skills[i]);

                if (record != NULL && (record->flags & SKILL_USABLE_MASK) != 0 &&
                    (record->flags & SKILL_USABLE_MASK) != SKILL_USABLE_NONE) {
                    count++;
                } else {
                    skills[i] = 0;
                }
            }
        }
        if (count != 0) {
            qsort(skills, SKILL_SLOTS, 2, (s32 (*)(const void *, const void *))compareHalfwordsDescending);
            FUN_004c9160(10, action->targets, 0, 1);
            qsort(skills, count, 2, (s32 (*)(const void *, const void *))uiCompareHalfwordValuesDescending);
            s32 pick = lcgRandomRange((u16)(count - 1));
            action->choice->mode = 2;
            action->choice->skillId = skills[pick];
            action->flags |= BTL_ACTION_AI_DONE;
            if (((dataTable04FindById(skills[pick])->flags >> SKILL_ELEMENT_SHIFT) & 0xF) == SKILL_ELEMENT_ALLY) {
                btlUnitSetParam(unit, 0xF, 0, 1);
            } else {
                btlUnitSetParam(unit, 2, 0, 1);
            }
            FUN_004eb838(unit, action);
            return 1;
        }
    }
    FUN_004c9160(9, action->targets, 0, 1);
    if (((g_btlAction.blockedA | g_btlAction.blockedB) & action->targets->flags) == 0) {
        FUN_004a9308(g_btlUiBlock, action->uiIndex, 0, 0);
    }
    action->choice->mode = 0xF;
    g_btlAction.units[unit->data->unitIndex].state = 0x13;
    return 1;
}

} /* extern "C" */
