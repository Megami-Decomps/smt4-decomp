/* NON_MATCHING: register assignment and the 64-bit target mask tests differ from retail (227 vs 231 rows); the skill usability checks are the same as smt4 FUN_002277d4's. */
#include "common.h"

extern "C" {

/* A skill record (only the fields read here). */
typedef struct SkillRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 scope;               /* 0..10: who the skill can be used on */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 bits;               /* bits 5..8: the effect kind */
    /* 0x2C */ u8 unk2c[3];
    /* 0x2F */ u8 category;
} SkillRecord;

/* A candidate target (only the fields read here). */
typedef struct SkillTarget {
    /* 0x000 */ u64 flags;              /* matched against the battle target mask */
    /* 0x008 */ s16 slot;
    /* 0x00A */ u8 unk00a[0x64];
    /* 0x06E */ s16 markIndex;
    /* 0x070 */ u8 unk070[0xF6];
    /* 0x166 */ u16 recordId;
    /* 0x168 */ u8 unk168[0x10C];
    /* 0x274 */ u16 categoryMask;
} SkillTarget;

typedef struct SkillCaster {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 slot;
} SkillCaster;

typedef struct SkillOutcome {
    /* 0x00 */ u8 unk00[0x1BE];
    /* 0x1BE */ u16 state;
    /* 0x1C0 */ u16 skillId;
} SkillOutcome;

/* The skill check context (only the fields used here). */
typedef struct SkillContext {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ SkillCaster *caster;
    /* 0x28 */ SkillOutcome *outcome;
    /* 0x2C */ u8 unk2c[0xC];
    /* 0x38 */ u8 marks[1];
} SkillContext;

/* The battle owner record (only the fields read here). */
typedef struct SkillOwner {
    /* 0x00 */ u8 unk00[0xEC];
    /* 0xEC */ s32 unkEC;
    /* 0xF0 */ u8 unkf0[0x20];
    /* 0x110 */ u32 flags;              /* 0x80: skip the progress check */
} SkillOwner;

extern u64 g_btlTargetableMask;

s32 FUN_0026264c(u16 recordId);
s32 gameProgressIsAdvanced(void);
s32 valueAtF0IsReady(SkillOwner *owner);
u16 FUN_004c3a10(u8 category);
s32 FUN_004c4604(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, s32 c, u32 d, u8 out[8]);
s32 FUN_004bfcfc(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, u32 c, u32 d);

/* Checks whether skill `skill` can be used on the candidate `targets` (`count` of them) in the
 * given use mode, marks the usable targets and records the skill in the outcome. Returns 1 when
 * it can be used. */
u32 FUN_004e9bd0(SkillOwner **owner, SkillContext *context, SkillRecord *skill, SkillTarget **targets, u32 count,
                 s32 anyTarget, s32 mode)
{
    switch (skill->scope) {
    case 0:
    case 1:
        if (mode == 2) {
            return 0;
        }
        break;
    case 2:
        if (mode == 1) {
            return 0;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        return 0;
    }
    s32 reviveKind = 0;

    switch ((skill->bits << 23) >> 28) {
    case 1:
    case 6:
        reviveKind = 1;
        break;
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
        return 0;
    }
    s32 usable = 0;
    u8 out[8];

    out[0] = 0;
    for (u32 i = 0; i < count; i++) {
        SkillTarget *target = targets[i];

        if ((target->flags & g_btlTargetableMask) == 0) {
            continue;
        }
        if (FUN_0026264c(target->recordId) == 0) {
            u32 id = target->recordId;

            if (((*owner)->unkEC < 0 || ((*owner)->flags & 0x80) == 0) && id != 0x493 && id != 0x494 && id != 0x495
                && id != 0x496 && (gameProgressIsAdvanced() == 0 || valueAtF0IsReady(*owner) != 0)) {
                continue;
            }
        }
        context->outcome->state = 2;
        context->outcome->skillId = skill->id;
        s32 result = FUN_004c4604(skill->id, 0, 2, context->caster->slot, target->slot, 0, 1, out);
        s32 blocked = 0;

        if (result == 1 || result == 2 || result == 3) {
            blocked = 1;
        }
        if ((blocked & reviveKind) != 0) {
            return 0;
        }
        if ((blocked & ~reviveKind) == 0) {
            s32 check = FUN_004bfcfc(skill->id, 0, 0, context->caster->slot, target->slot, 1, 1);

            if ((anyTarget == 0 || check == 2) && (FUN_004c3a10(skill->category) & target->categoryMask) == 0) {
                usable = 1;
                if (reviveKind == 0) {
                    context->outcome->state = 2;
                    context->outcome->skillId = skill->id;
                    context->marks[target->markIndex] = 1;
                    return 1;
                }
            }
        }
    }
    if ((usable & reviveKind) == 0) {
        return 0;
    }
    context->outcome->state = 2;
    context->outcome->skillId = skill->id;
    for (u32 i = 0; i < count; i++) {
        if ((targets[i]->flags & g_btlTargetableMask) != 0) {
            context->marks[targets[i]->markIndex] = 1;
        }
    }
    return 1;
}

}
