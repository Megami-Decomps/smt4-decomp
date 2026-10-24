/* NON_MATCHING: readable rebuild of the Apocalypse enemy target-candidate builder (twin of smt4 FUN_003cf4f8 with 64-bit unit flags and a weighted pick); the local action-info block and candidate array are laid out differently by armcc, and retail's 0x85-entry clear loop pairs two stores per iteration. */
#include "common.h"

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

struct BattleUnitView {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x400];
};

struct BattleSideInfo {
    /* 0x0000 */ u8 unk0000[0xA0];
    /* 0x00A0 */ s8 firstBonus;
    /* 0x00A1 */ s8 secondBonus;
    /* 0x00A2 */ u8 unk00A2[0x1E32];
    /* 0x1ED4 */ u8 *slotRecords;   /* 0x1D0-byte records, target slot at +0x68 */
    /* 0x1ED8 */ u8 unk1ED8[0x124];
    /* 0x1FFC */ BattleUnitView *units;
    /* 0x2000 */ u8 unk2000[0x25A0];
    /* 0x45A0 */ u64 stateFlags;
};

struct EnemyAiContext {
    /* 0x00 */ BattleSideInfo *battle;
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

BattleSideInfo *btlGetMainState(void);
void FUN_003e8bb0(BattleActionInfo *info, BattleSideInfo *battle, u64 *unitFlags);
SkillRecord04 *dataTable04FindById(s16 id);
s32 FUN_004e83ac(EnemyAiContext *context, EnemyTurnWork *work, s32 target);
s32 FUN_004de7a0(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *candidates, s32 count);
s32 lcgRandomRange(u32 limit);

/* Fills `out` (0x85 id/weight pairs, ids -1 when unused) with the targets the enemy may pick this
 * turn: one weighted pick for a single-target action, or every allowed target weighted by the
 * power roll, and raises the enemy's stat bonuses when guarding targets are hit. */
void FUN_004e6b64(EnemyAiContext *context, EnemyTurnWork *work, TargetCandidate *out)
{
    BattleActionInfo info;
    TargetCandidate scratch[0x85];
    BattleSideInfo *battle = btlGetMainState();
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
        SkillRecord04 *skill = dataTable04FindById(info.skill);
        if (skill != NULL && skill->kind == 4 && skill->splash == 0)
            plainSkill = true;
    }
    if (info.kind == 6)
        pickOne = true;
    else if (info.kind == 1)
        favourGuarding = true;
    s32 power = info.powerMax;
    if (!(context->battle->stateFlags & DAT_00571260) && info.powerMin < info.powerMax)
        power = info.powerMin + lcgRandomRange((u16)(info.powerMax - info.powerMin));
    else if (!(context->battle->stateFlags & DAT_00571260))
        power = info.powerMin;
    for (s32 target = 0; target < 0x6D; target++) {
        if (work->allowed[target]) {
            BattleUnitView *unit = &context->battle->units[target];
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
            s32 slot = *(s16 *)(context->battle->slotRecords + target * 0x1D0 + 0x68);
            if (slot >= 0) {
                BattleUnitView *unit = &context->battle->units[slot];
                if (unit != NULL && (unit->flags & DAT_00571188))
                    guarding = true;
            }
            out[count].id = (s16)target;
            out[count].weight = (s16)power;
            if (guarding && favourGuarding && !plainSkill) {
                if (context->battle->firstBonus < 0)
                    context->battle->firstBonus = (s8)power * 3;
                if (context->battle->secondBonus < 0)
                    context->battle->secondBonus = (s8)power * 3;
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
    if (context->battle->firstBonus < 0)
        context->battle->firstBonus = (s8)power;
    if (context->battle->secondBonus < 0)
        context->battle->secondBonus = (s8)power;
}

} /* extern "C" */
