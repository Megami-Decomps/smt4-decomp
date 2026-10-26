/* NON_MATCHING: readable rebuild (same shape as FUN_002277d4 inside a per-mode loop; the unroll-by-two marking loop now matches); retail writes the mode count and first mode with one stm after the flag test and numbers the saved registers differently. */
#include "common.h"
#include "gamedata/PlayerDataBlock.h"

/* A candidate target (only the fields read here). */
typedef struct AiSkillTarget {
    /* 0x000 */ u32 flags;              /* 0x400: can be targeted */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 slot;
    /* 0x00A */ u8 unk00a[0x64];
    /* 0x06E */ s16 markIndex;
    /* 0x070 */ u8 unk070[0x5E];
    /* 0x0CE */ u16 recordId;
} AiSkillTarget;

typedef struct AiSkillCaster {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 slot;
} AiSkillCaster;

typedef struct AiSkillOutcome {
    /* 0x00 */ u8 unk00[0x14C];
    /* 0x14C */ u16 state;
    /* 0x14E */ u16 skillId;
} AiSkillOutcome;

/* The AI's command state (only the fields used here). */
typedef struct AiSkillContext {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 *actor;              /* its first word holds the actor's flags */
    /* 0x24 */ AiSkillCaster *caster;
    /* 0x28 */ AiSkillOutcome *outcome;
    /* 0x2C */ u8 unk2c[0xC];
    /* 0x38 */ u8 marks[1];
} AiSkillContext;

struct BtlMainState;

extern "C" {

s32 FUN_0029e9cc(u16 recordId);
s32 FUN_00228220(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, s32 c, u32 d, u8 *out);
s32 FUN_0022899c(u32 id, s32 a, s32 b, s32 casterSlot, s32 targetSlot, u32 c);
void FUN_00247478(u16 *summary, BtlMainState *state, u32 *actor);
void *dataTable08Sub2GetRecord(u32 id);

/* Looks for a use of the actor's skill (the first mode in its list that works) on one candidate
 * target, or on all of them when the skill revives. Marks the chosen target(s) and records the
 * skill in the outcome. Returns 1 when something was chosen. */
s32 FUN_003d10a0(BtlMainState **state, AiSkillContext *context, AiSkillTarget **targets, u32 count, s32 anyTarget)
{
    struct {
        s32 count;
        s32 skills[3];
    } modes;

    if ((*context->actor & 2) == 0) {
        modes.count = 1;
        modes.skills[0] = 0;
    } else {
        modes.count = 1;
        modes.skills[0] = 1;
        if (dataTable08Sub2GetRecord(*reinterpret_cast<u16 *>(gameGetPlayerData() + 2)) != 0) {
            modes.count = 2;
            modes.skills[1] = 2;
        }
    }
    s32 mode = 0;
    do {
        s32 reviveKind = 0;
        context->outcome->state = 1;
        context->outcome->skillId = modes.skills[mode];
        u16 summary[18];
        FUN_00247478(summary, *state, context->actor);
        switch (summary[0]) {
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
                s32 result = FUN_00228220(0, 0, 1, context->caster->slot, targets[i]->slot, 0, 1, &out);

                if (result == 1 || result == 2 || result == 3) {
                    blocked = 1;
                }
                if ((blocked & reviveKind) != 0) {
                    return 0;
                }
                if ((blocked & ~reviveKind) == 0) {
                    s32 check = FUN_0022899c(0, 0, 0, context->caster->slot, targets[i]->slot, 1);

                    if (anyTarget == 0 || check == 2) {
                        usable = 1;
                        if (reviveKind == 0) {
                            context->outcome->state = 1;
                            context->outcome->skillId = modes.skills[mode];
                            context->marks[targets[i]->markIndex] = 1;
                            return 1;
                        }
                    }
                }
            }
        }
        if ((usable & reviveKind) != 0) {
            context->outcome->state = 1;
            context->outcome->skillId = modes.skills[mode];
            for (s32 i = 0; i < count; i++) {
                if ((targets[i]->flags & 0x400) != 0) {
                    context->marks[targets[i]->markIndex] = 1;
                }
            }
            return 1;
        }
        mode++;
    } while (mode < modes.count);
    return 0;
}

}
