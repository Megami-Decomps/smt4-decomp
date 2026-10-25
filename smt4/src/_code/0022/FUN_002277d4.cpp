/* NON_MATCHING: final target-marking loops and the early-success state stores use permuted scratch registers; target mask offset and one-byte output now match retail. */
#include "common.h"
#include <stddef.h>

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
    /* 0x000 */ u32 flags;              /* 0x400: can be targeted */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 slot;
    /* 0x00A */ u8 unk00a[0x64];
    /* 0x06E */ s16 markIndex;
    /* 0x070 */ u8 unk070[0x5E];
    /* 0x0CE */ u16 recordId;
    /* 0x0D0 */ u8 unk0D0[0xF6];
    /* 0x1C6 */ u16 categoryMask;
} SkillTarget;
typedef char SkillTargetOffsetsCheck[
    offsetof(SkillTarget, recordId) == 0xCE &&
    offsetof(SkillTarget, categoryMask) == 0x1C6 ? 1 : -1];

typedef struct SkillCaster {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 slot;
} SkillCaster;

typedef struct SkillOutcome {
    /* 0x00 */ u8 unk00[0x14C];
    /* 0x14C */ u16 state;
    /* 0x14E */ u16 skillId;
} SkillOutcome;

/* The skill check context (only the fields used here). */
typedef struct SkillContext {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ SkillCaster *caster;
    /* 0x28 */ SkillOutcome *outcome;
    /* 0x2C */ u8 unk2c[0xC];
    /* 0x38 */ u8 marks[1];
} SkillContext;

s32 FUN_0029e9cc(u16 recordId);
int categoryMaskFromId(u32 id);
s32 FUN_00228220(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, s32 c, u32 d, u8 *out);
s32 FUN_0022899c(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, u32 c);

/* Checks whether skill `skill` can be used on the candidate `targets` (`count` of them) in the
 * given use mode, marks the usable targets and records the skill in the outcome. Returns 1 when
 * it can be used. */
u32 FUN_002277d4(u32 unused, SkillContext *context, SkillRecord *skill, SkillTarget **targets, u32 count, s32 anyTarget,
                 s32 mode)
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
    u8 out = 0;
    for (u32 i = 0; i < count; i++) {
        s32 blocked = 0;

        if ((targets[i]->flags & 0x400) != 0 && FUN_0029e9cc(targets[i]->recordId) != 0) {
            context->outcome->state = 2;
            context->outcome->skillId = skill->id;
            s32 result = FUN_00228220(skill->id, 0, 2, context->caster->slot, targets[i]->slot, 0, 1, &out);

            if (result == 1 || result == 2 || result == 3) {
                blocked = 1;
            }
            if ((blocked & reviveKind) != 0) {
                return 0;
            }
            if ((blocked & ~reviveKind) == 0) {
                s32 check = FUN_0022899c(skill->id, 0, 0, context->caster->slot, targets[i]->slot, 1);

                if ((anyTarget == 0 || check == 2) && (categoryMaskFromId(skill->category) & targets[i]->categoryMask) == 0) {
                    usable = 1;
                    if (reviveKind == 0) {
                        context->outcome->state = 2;
                        context->outcome->skillId = skill->id;
                        context->marks[targets[i]->markIndex] = 1;
                        return 1;
                    }
                }
            }
        }
    }
    if ((usable & reviveKind) == 0) {
        return 0;
    }
    context->outcome->state = 2;
    context->outcome->skillId = skill->id;
    for (s32 i = 0; i < count; i++) {
        if ((targets[i]->flags & 0x400) != 0) {
            context->marks[targets[i]->markIndex] = 1;
        }
    }
    return 1;
}

}
