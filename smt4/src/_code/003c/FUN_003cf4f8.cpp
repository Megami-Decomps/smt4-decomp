/* NON_MATCHING: readable rebuild of the enemy target-candidate builder; the local action-info block (29 bytes in retail) and the duplicated candidate array are laid out differently by armcc, and retail's 0x85-entry clear loop pairs two stores per iteration. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"

/* The action a battle unit is about to use (as FUN_00247478 fills it). */
struct BattleActionInfo {
    /* 0x00 */ s16 kind;
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

struct SkillRecord40 {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[0xE];
    /* 0x32 */ u8 splash;
    /* 0x33 */ u8 hitsAll;
    /* 0x34 */ u8 hitsRow;
    /* 0x35 */ u8 flags;
};

extern "C" {
void FUN_00247478(BattleActionInfo *info, BtlMainState *battle, u32 unit);
SkillRecord40 *dataTable40FindById(s16 id);
s32 FUN_00229914(EnemyAiContext *context, EnemyTurnWork *work, s32 target);
s32 randRange(u32 limit);

/* Fills `out` (0x85 id/weight pairs, ids -1 when unused) with the targets the enemy may pick this
 * turn: one random allowed target for a single-target heal-like action, or every allowed target
 * weighted by the power roll, and raises the enemy's stat bonuses when guarding targets are hit. */
void FUN_003cf4f8(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *out)
{
    BattleActionInfo info;
    TargetCandidate scratch[0x85];
    BtlMainState *battle = btlGetMainState();
    FUN_00247478(&info, battle, work->unit);
    for (s32 i = 0; i < 0x85; i++) {
        out[i].id = -1;
        out[i].weight = 0;
        scratch[i].id = -1;
        scratch[i].weight = 0;
    }
    if (work->disabled != 0)
        return;
    bool broadSkill = false;
    if (info.skill != 0) {
        SkillRecord40 *skill = dataTable40FindById(info.skill);
        if (skill != NULL) {
            if (skill->kind != 4 && skill->splash == 0) {
                if (skill->hitsAll != 0 || skill->hitsRow != 0 || (skill->flags & 2))
                    broadSkill = true;
            } else {
                broadSkill = true;
            }
        }
    }
    bool pickOne = false;
    bool favourGuarding = false;
    if (info.kind == 6)
        pickOne = true;
    else if (info.kind == 1)
        favourGuarding = true;
    s32 power = info.powerMax;
    if (!(context->battle->battleFlags & 0x40000) && info.powerMin < info.powerMax)
        power = info.powerMin + randRange((u16)(info.powerMax - info.powerMin));
    else if (!(context->battle->battleFlags & 0x40000))
        power = info.powerMin;
    for (s32 target = 0; target < 0x6D; target++) {
        if (work->allowed[target] &&
            ((context->battle->entries[target].flags & 0x40) || FUN_00229914(context, work, target)))
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
