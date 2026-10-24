/* NON_MATCHING: readable rebuild from asm of the enemy action's target-marker setup (draft gotos removed); retail keeps the party/down flags in stack slots and shares the final tail by jumps, and armcc here orders the 64-bit bit scan and the marker offset arithmetic differently. */
#include "common.h"

#define WORK_PARTY 0x4000
#define WORK_MARKED 0x2000000
#define UNIT_PRESENT 1
#define UNIT_TAKEN 0x1000000

/* A battle unit (only the fields read here). */
struct BattleUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0xD0];
    /* 0x0D4 */ s16 slot;
    /* 0x0D6 */ u8 unk0D6[0x1B2];
};

struct BattleSideInfo {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BattleUnit *units;
    /* 0x1FC4 */ u8 unk1FC4[0xC];
    /* 0x1FD0 */ u64 targetMask;
    /* 0x1FD8 */ u8 unk1FD8[8];
    /* 0x1FE0 */ s8 partyTargets[3];
};

struct BattleContext {
    BattleSideInfo *side;
};

struct ActionWork {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 *actorFlags;     /* bit 4: the actor is down */
    /* 0x24 */ u8 *actor;           /* +0x62: the actor's skill */
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ u8 allowed[0x6D];
};

extern "C" {
u8 *gameGetSlotTable(void);
s32 partyHasEligibleMember(BattleSideInfo *side);
void FUN_00246454(s32 offset, ActionWork *work, BattleUnit *unit);
void FUN_0024b888(s32 offset, ActionWork *work, s32 down, s32 pick, f32 scale, s32 zero);
void FUN_002296f4(BattleContext *context, ActionWork *work, s32 skill, s32 base, s32 a, s32 b);

/* Sets up the target markers of an enemy action: marks the `count` targets the action covers (the
 * allowed units, or the party members for a party action), resolves which one is the selected pick
 * and places the cursor/marker, then reports the skill to the battle context. Returns 1. */
u32 FUN_003d13d4(BattleContext *context, ActionWork *work, u32 a, u32 b, f32 scale, s32 base, s32 count)
{
    s32 selected = 0;
    s32 pick = -1;
    bool down = (*work->actorFlags & 0x10) != 0;
    bool party = (work->flags & WORK_PARTY) != 0;
    s32 step = party ? 7 : 0;
    BattleUnit *chosen = NULL;
    if (!down) {
        if (party) {
            for (s32 i = count; i < 3; i++) {
                s8 id = context->side->partyTargets[i];
                if (id >= 0) {
                    pick = id > 0 ? id - 1 : id;
                    break;
                }
            }
        } else {
            s32 seen = 0;
            for (s32 bit = 0; bit < 64; bit++) {
                if (context->side->targetMask & ((u64)1 << bit)) {
                    if (count > seen) {
                        seen = (s8)(seen + 1);
                    } else {
                        pick = bit > 0 ? bit - 1 : bit;
                        break;
                    }
                }
            }
        }
    }
    s32 placed = 0;
    for (s32 target = 0; target < 0x6D; target++) {
        if (!work->allowed[target])
            continue;
        if (party) {
            BattleUnit *unit = &context->side->units[target];
            if (unit != NULL && (unit->flags & UNIT_PRESENT) && !(unit->flags & UNIT_TAKEN)) {
                selected = 5;
                FUN_00246454(step * placed + base + 5, work, unit);
                placed = (s8)(placed + 1);
                unit->flags |= UNIT_TAKEN;
            }
        } else if (placed < count) {
            placed = (s8)(placed + 1);
        } else {
            BattleUnit *unit = &context->side->units[target];
            if (unit != NULL && (unit->flags & UNIT_PRESENT)) {
                selected = 5;
                FUN_00246454(step * count + base + 5, work, unit);
                chosen = unit;
            }
            break;
        }
    }
    if (party && partyHasEligibleMember(context->side) > 0)
        selected = 5;
    if (down) {
        FUN_0024b888(step * count + base + selected, work, down, 0, scale, 0);
        work->flags |= WORK_MARKED;
    } else if (pick >= 0 &&
               (chosen == NULL || chosen->slot < 0 || party || gameGetSlotTable()[0x90F0 + pick] != chosen->slot)) {
        if (selected > 0)
            selected += party ? 0x28 : 0x14;
        FUN_0024b888(step * count + base + selected, work, 0, pick, scale, 0);
        work->flags |= WORK_MARKED;
    }
    FUN_002296f4(context, work, *(s16 *)(work->actor + 0x62), base, 15, 20);
    return 1;
}

} /* extern "C" */
