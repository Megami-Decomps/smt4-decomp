/* NON_MATCHING: 158 lines: retail clears both candidate arrays through two walking pointers and a down counter (the
 * build indexes them), and gives the three flags other stack slots (pick-one 568, favour-guarding 572, broad 576). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlUnitTarget.h"
#include "util/Random.h"
#include "battle/btlAction.h"
#include "gamedata/SkillDataLookup.h"

/* The action a battle unit is about to use (as btlEntryBuildSummary fills it). */
struct BattleActionInfo {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[0x14];
    /* 0x16 */ s16 skill;          /* skill id, 0 when none */
    /* 0x18 */ u8 unk18[7];
    /* 0x1F */ s8 powerMin;
    /* 0x20 */ s8 powerMax;
    /* 0x21 */ u8 unk21[3];
};

/* One candidate: a target id and a weight. */
struct TargetCandidate {
    s16 id;
    s16 weight;
};

/* The enemy's per-turn work (only the fields the builder reads). */
struct EnemyTurnWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 unit;
    /* 0x024 */ u8 unk024[0x14];
    /* 0x038 */ s8 allowed[0x85];    /* targets this enemy may pick */
    /* 0x0BD */ u8 unk0BD[0x4B3];
    /* 0x570 */ s32 disabled;
};

struct EnemyAiContext {
    /* 0x00 */ BtlMainState *battle;
};

extern "C" {
void btlEntryBuildSummary(BattleActionInfo *info, BtlMainState *battle, u32 unit);

/* Marks a candidate slot unused. */
static __inline void candidateClear(TargetCandidate *candidate)
{
    candidate->id = -1;
    candidate->weight = 0;
}

/* Fills `out` (0x85 id/weight pairs, ids -1 when unused) with the targets the enemy may pick this
 * turn: one random allowed target for a single-target heal-like action, or every allowed target
 * weighted by the power roll, and raises the enemy's stat bonuses when guarding targets are hit. */
void FUN_003cf4f8(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *out)
{
    BattleActionInfo info;
    TargetCandidate scratch[0x85];
    BtlMainState *battle = btlGetMainState();
    btlEntryBuildSummary(&info, battle, work->unit);
    for (s32 i = 0; i < 0x85; i++) {
        candidateClear(&out[i]);
        candidateClear(&scratch[i]);
    }
    if (work->disabled != 0)
        return;
    bool pickOne = false;
    bool favourGuarding = false;
    bool broadSkill = false;
    if (info.skill != 0) {
        const SkillDataRecord *skill = skillDataFindById(info.skill);
        if (skill != NULL) {
            if (skill->sort.category != 4 && skill->range.splash == 0) {
                if (skill->range.hitsAll != 0 || skill->range.hitsRow != 0 || (skill->range.rangeFlags & 2))
                    broadSkill = true;
            } else {
                broadSkill = true;
            }
        }
    }
    s32 power = info.powerMin;
    s32 maxPower = info.powerMax;
    if (info.kind == 6)
        pickOne = true;
    else if (info.kind == 1)
        favourGuarding = true;
    if ((context->battle->battleFlags & 0x40000) == 0) {
        if (power < maxPower)
            power += randRange((u16)(maxPower - power));
    } else {
        power = maxPower;
    }
    for (s32 target = 0; target < 0x6D; target++) {
        if (work->allowed[target] &&
            ((context->battle->entries[target].flags & 0x40) || btlUnitIsDeadAndUncopied(&context->battle, (BtlUnit *)work, target)))
            work->allowed[target] = 0;
    }
    if (pickOne) {
        s32 count = 0;
        for (s32 target = 0; target < 0x85; target++) {
            if (work->allowed[target]) {
                scratch[count].id = target;
                scratch[count].weight = 0;
                count++;
            }
        }
        if (count != 0) {
            s32 pick = randRange((u16)(count - 1));
            scratch[pick].weight++;
            out[0].id = scratch[pick].id;
            out[0].weight = 1;
            if (context->battle->core.firstBonus < 0)
                context->battle->core.firstBonus = (s8)power;
            if (context->battle->core.secondBonus < 0)
                context->battle->core.secondBonus = (s8)power;
        }
        return;
    }
    s32 count = 0;
    for (s32 target = 0; target < 0x85; target++) {
        if (!work->allowed[target])
            continue;
        bool guarding = false;
        s32 slot = context->battle->actions[target].participant.combatantIndex;
        if (slot >= 0) {
            BtlEntry *unit = &context->battle->entries[slot];
            if (unit != NULL && (unit->flags & 0x100))
                guarding = true;
        }
        out[count].id = (s16)target;
        out[count].weight = (s16)power;
        if (guarding && favourGuarding && !broadSkill) {
            if (context->battle->core.firstBonus < 0)
                context->battle->core.firstBonus = (s8)power * 3;
            if (context->battle->core.secondBonus < 0)
                context->battle->core.secondBonus = (s8)power * 3;
        }
        count++;
    }
}

} /* extern "C" */
