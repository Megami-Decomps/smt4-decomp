/* NON_MATCHING: 218 lines, now in the IV twin FUN_003cf4f8's shape (candidateClear, the power roll from a min/max pair, the 0x34-byte summary, the pick-one branch first, the NULL-checked guarding entry). Retail still clears the two candidate arrays through walking pointers and a down counter (the build indexes them), reads two range bytes of a non-category-4 skill without using them (`ldrb #51; ldrbeq #50`), and allocates the context, output and pick registers differently. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "gamedata/SkillDataRecord.h"
#include "util/Random.h"
#include "battle/BtlGlobals.h"

/* The action a battle unit is about to use (as btlEntryBuildSummary fills it). */
struct BattleActionInfo {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u8 unk02[0x14];
    /* 0x16 */ s16 skill;
    /* 0x18 */ u8 unk18[7];
    /* 0x1F */ s8 powerMin;
    /* 0x20 */ s8 powerMax;
    /* 0x21 */ u8 unk21[0x13];
};
typedef char BattleActionInfoSizeCheck[sizeof(BattleActionInfo) == 0x34 ? 1 : -1]; /* btlEntryBuildSummary's 0x34-byte summary */

/* One candidate: a target id and a weight. */
struct TargetCandidate {
    s16 id;
    s16 weight;
};

/* The enemy's per-turn work (only the fields the builder reads). */
struct EnemyTurnWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u64 *unitFlags;     /* the acting unit's flag word */
    /* 0x024 */ u8 unk024[0x14];
    /* 0x038 */ s8 allowed[0x85];
    /* 0x0BD */ u8 unk0BD[0x4B3];
    /* 0x570 */ s32 disabled;
};

struct EnemyAiContext {
    /* 0x00 */ BtlMainStateA *battle;
};


extern "C" {
extern u64 DAT_00571168;
extern u64 DAT_00571188;
extern u64 DAT_00571260;

void btlEntryBuildSummary(BattleActionInfo *info, BtlMainStateA *battle, u64 *unitFlags);
s32 btlActionTargetSlotScore(EnemyAiContext *context, EnemyTurnWork *work, s32 target);
s32 FUN_004de7a0(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *candidates, s32 count);

/* Marks a candidate slot unused. */
static __inline void candidateClear(TargetCandidate *candidate)
{
    candidate->id = -1;
    candidate->weight = 0;
}

/* Fills `out` (0x85 id/weight pairs, ids -1 when unused) with the targets the enemy may pick this
 * turn: one weighted pick for a single-target action, or every allowed target weighted by the
 * power roll, and raises the enemy's stat bonuses when guarding targets are hit. */
void FUN_004e6b64(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *out)
{
    BattleActionInfo info;
    TargetCandidate scratch[0x85];
    BtlMainStateA *battle = btlGetMainState();
    btlEntryBuildSummary(&info, battle, work->unitFlags);
    for (s32 i = 0; i < 0x85; i++) {
        candidateClear(&out[i]);
        candidateClear(&scratch[i]);
    }
    if (work->disabled != 0)
        return;
    bool pickOne = false;
    bool favourGuarding = false;
    bool plainSkill = false;
    if (info.skill != 0) {
        const SkillDataRecordA *skill = skillDataFindById(info.skill);
        if (skill != NULL && skill->sort.category == 4 && skill->usability.target == 0)
            plainSkill = true;
    }
    s32 power = info.powerMin;
    s32 maxPower = info.powerMax;
    if (info.kind == 6)
        pickOne = true;
    else if (info.kind == 1)
        favourGuarding = true;
    if ((context->battle->stateFlags64.bits & DAT_00571260) == 0) {
        if (power < maxPower)
            power += lcgRandomRange((u16)(maxPower - power));
    } else {
        power = maxPower;
    }
    for (s32 target = 0; target < 0x6D; target++) {
        if (work->allowed[target]) {
            BtlCombatantEntryA *unit = &context->battle->entries[target];
            if ((unit->flags & g_btlAction.interaction.excludedMask) || btlActionTargetSlotScore(context, work, target))
                work->allowed[target] = 0;
        }
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
        if (count == 0)
            return;
        s16 pick;
        if ((*work->unitFlags & DAT_00571168) && count >= 2) {
            pick = (s16)FUN_004de7a0(context, work, scratch, count);
        } else {
            s32 index = lcgRandomRange((u16)(count - 1));
            pick = scratch[index].id;
            scratch[index].weight++;
        }
        out[0].weight = 1;
        out[0].id = pick;
        if (context->battle->statBonus.firstBonus < 0)
            context->battle->statBonus.firstBonus = (s8)power;
        if (context->battle->statBonus.secondBonus < 0)
            context->battle->statBonus.secondBonus = (s8)power;
        return;
    }
    s32 count = 0;
    for (s32 target = 0; target < 0x85; target++) {
        if (!work->allowed[target])
            continue;
        bool guarding = false;
        s32 slot = context->battle->roster[target].combatant.combatantIndex;
        if (slot >= 0) {
            BtlCombatantEntryA *unit = &context->battle->entries[slot];
            if (unit != NULL && (unit->flags & DAT_00571188))
                guarding = true;
        }
        out[count].id = (s16)target;
        out[count].weight = (s16)power;
        if (guarding && favourGuarding && !plainSkill) {
            if (context->battle->statBonus.firstBonus < 0)
                context->battle->statBonus.firstBonus = (s8)power * 3;
            if (context->battle->statBonus.secondBonus < 0)
                context->battle->statBonus.secondBonus = (s8)power * 3;
        }
        count++;
    }
}

} /* extern "C" */
