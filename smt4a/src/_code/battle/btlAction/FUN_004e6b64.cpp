/* NON_MATCHING: readable rebuild of the Apocalypse enemy target-candidate builder (twin of smt4 FUN_003cf4f8 with 64-bit unit flags and a weighted pick); the local action-info block and candidate array are laid out differently by armcc, and retail's 0x85-entry clear loop pairs two stores per iteration. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "gamedata/Table04Record.h"
#include "util/Random.h"

/* The action a battle unit is about to use (as FUN_003e8bb0 fills it). */
struct BattleActionInfo {
    /* 0x00 */ s16 kind;
    /* 0x02 */ u8 unk02[0x14];
    /* 0x16 */ s16 skill;
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
    /* 0x020 */ u64 *unitFlags;     /* the acting unit's flag word */
    /* 0x024 */ u8 unk024[0x14];
    /* 0x038 */ s8 allowed[0x85];
    /* 0x0BD */ u8 unk0BD[0x4B3];
    /* 0x570 */ s32 disabled;
};

struct EnemyAiContext {
    /* 0x00 */ BtlMainStateA *battle;
};

struct SkillRecord04 {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[0xB];
    /* 0x2F */ u8 splash;
};

extern "C" {
extern u64 DAT_00571168;
extern u64 DAT_00571178;
extern u64 DAT_00571188;
extern u64 DAT_00571260;

void FUN_003e8bb0(BattleActionInfo *info, BtlMainStateA *battle, u64 *unitFlags);
s32 FUN_004e83ac(EnemyAiContext *context, EnemyTurnWork *work, s32 target);
s32 FUN_004de7a0(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *candidates, s32 count);

/* Fills `out` (0x85 id/weight pairs, ids -1 when unused) with the targets the enemy may pick this
 * turn: one weighted pick for a single-target action, or every allowed target weighted by the
 * power roll, and raises the enemy's stat bonuses when guarding targets are hit. */
void FUN_004e6b64(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *out)
{
    BattleActionInfo info;
    TargetCandidate scratch[0x85];
    BtlMainStateA *battle = btlGetMainState();
    FUN_003e8bb0(&info, battle, work->unitFlags);
    for (s32 i = 0; i < 0x85; i++) {
        out[i].id = -1;
        out[i].weight = 0;
        scratch[i].id = -1;
        scratch[i].weight = 0;
    }
    if (work->disabled != 0)
        return;
    bool pickOne = false;
    bool favourGuarding = false;
    bool plainSkill = false;
    if (info.skill != 0) {
        SkillRecord04 *skill = (SkillRecord04 *)dataTable04FindById(info.skill);
        if (skill != NULL && skill->kind == 4 && skill->splash == 0)
            plainSkill = true;
    }
    if (info.kind == 6)
        pickOne = true;
    else if (info.kind == 1)
        favourGuarding = true;
    s32 power = info.powerMax;
    if (!(context->battle->stateFlags64.bits & DAT_00571260) && info.powerMin < info.powerMax)
        power = info.powerMin + lcgRandomRange((u16)(info.powerMax - info.powerMin));
    else if (!(context->battle->stateFlags64.bits & DAT_00571260))
        power = info.powerMin;
    for (s32 target = 0; target < 0x6D; target++) {
        if (work->allowed[target]) {
            BtlCombatantEntryA *unit = &context->battle->entries[target];
            if ((unit->flags & DAT_00571178) || FUN_004e83ac(context, work, target))
                work->allowed[target] = 0;
        }
    }
    if (!pickOne) {
        s32 count = 0;
        for (s32 target = 0; target < 0x85; target++) {
            if (!work->allowed[target])
                continue;
            bool guarding = false;
            s32 slot = context->battle->roster[target].combatant.combatantIndex;
            if (slot >= 0) {
                BtlCombatantEntryA *unit = &context->battle->entries[slot];
                if (unit->flags & DAT_00571188)
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
        return;
    }
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
}

} /* extern "C" */
