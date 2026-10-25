/* NON_MATCHING: retail copies the hit/magic points through VFP registers (vldr/vstmia) and keeps the unit vitals in other registers; this build uses core registers */
#include "battle/BattleUnitInit.h"

/* An enemy record as the battle reads it when it builds a unit (halfword indexed in the original
   data; only the fields this initializer copies are named). */
struct EnemyRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 level : 15;
    /* 0x02 */ u16 boss : 1;
    /* 0x04 */ u32 hp;
    /* 0x08 */ u32 mp;
    /* 0x0c */ u16 stats[5];
    /* 0x16 */ u16 flags;              /* bit 9 / bit 10: unit flags */
    /* 0x18 */ u8 unk18[0x0c];
    /* 0x24 */ SkillSlot skills[21];
    /* 0x4e */ u8 unk4e[2];
    /* 0x50 */ UnitAffinities affinities;
    /* 0x60 */ u8 unk60[0x13];
    /* 0x73 */ u8 category;
    /* 0x74 */ u8 unk74[0x18];
    /* 0x8c */ s16 unk8c;
    /* 0x8e */ u8 unk8e[0x14];
    /* 0xa2 */ s8 flagA2;
    /* 0xa3 */ s8 flagA3;
    /* 0xa4 */ u8 unka4[0x46];
};

/* The battle state's progress counter. */
struct EnemyBattle {
    /* 0x00 */ u8 unk00[0xf0];
    /* 0xf0 */ s32 phase;
};

extern "C" {
void sysMemClear(void *memory, u32 size);
void clearTwoWords(void *words);
void rt_memclr(void *memory, u32 size);
DemonModelInfo *FUN_00184310(u32 id);
s32 gameProgressIsAdvanced(void);
u32 gameDataGetTableValue(void);
s32 FUN_001f4da0(s32 sourceId);

/* Initializes a battle unit's state block from an enemy record, then scales its numbers up with
   the game's progress grade once the story has advanced. */
void FUN_003eb314(EnemyBattle *battle, BattleUnitState *unit, EnemyRecord *record)
{
    unit->kind = 4;
    unit->unk008 = -1;
    unit->sourceId = record->id;
    unit->unk004 = -1;
    unit->unk006 = -1;
    sysMemClear(&unit->unk00C, 200);
    unit->unk00C = record->unk8c;
    unit->clearedD4[0] = record->boss;
    if (record->flagA2 != 0 || record->flagA3 != 0) {
        unit->clearedD4[0] = 1;
    } else {
        unit->clearedD4[0] = 0;
    }
    if ((record->flags & 0x200) != 0) {
        unit->clearedD4[1] = 1;
    } else {
        unit->clearedD4[1] = 0;
    }
    if ((record->flags & 0x400) != 0) {
        unit->clearedD4[2] = 1;
    } else {
        unit->clearedD4[2] = 0;
    }
    unit->clearedD4[3] = 1;
    unit->current.hp = record->hp;
    unit->current.maxHp = record->hp;
    unit->current.mp = record->mp;
    unit->current.level = record->mp;
    unit->current.stats[0] = record->stats[0];
    unit->current.stats[1] = record->stats[1];
    unit->current.stats[2] = record->stats[2];
    unit->current.stats[3] = record->stats[3];
    unit->current.stats[4] = record->stats[4];
    unit->initial = unit->current;
    unit->unk110 = 0;
    unit->unk112 = 0;
    unit->unk114 = 0;
    unit->unk116 = record->level;
    unit->unk228 = 0;
    clearTwoWords(unit->clear1BE);
    clearTwoWords(unit->clear1C6);
    clearTwoWords(unit->clear1CE);
    rt_memclr(unit->clear1D6, 0x50);
    for (s32 i = 0; i < 21; i++) {
        unit->skills[i] = record->skills[i];
        unit->learnable[i] = record->skills[i];
        unit->learnableCategory[i] = unit->learnable[i].category;
    }
    unit->unk1BB = record->category;
    DemonModelInfo *model = FUN_00184310(unit->sourceId);
    if (model->kind == 1) {
        unit->unk1BC = 1;
    } else if (model->kind == 4) {
        unit->unk1BC = 0;
    } else if (model->kind == 5) {
        unit->unk1BC = 2;
    }
    unit->affinities = record->affinities;
    sysMemClear(unit->flagsA, 0x15);
    unit->flagsB.first = 0;
    unit->flagsB.second = 0;
    unit->flagsB.third = 0;
    unit->flagsB.fourth = 0;
    unit->flagsB.fifth = 0;
    unit->flagsB.last = 0;

    if (gameProgressIsAdvanced() != 0) {
        f32 grade = (f32)(s32)gameDataGetTableValue();
        f32 clamped = 0.0f;
        if (0.0f <= grade) {
            clamped = grade;
            if (grade > 9.0f) {
                clamped = 9.0f;
            }
        }
        f32 square = clamped * clamped;
        u16 level = (u16)(u32)((f32)unit->unk116 * (clamped * 0.55f + 1.0f) + square * 5.0f);
        if (level >= 999) {
            level = 999;
        }
        unit->unk116 = level;
        f32 vitalsScale = clamped * 0.3f + 1.0f + square * 0.06666667f;
        s32 maxHp = (s32)(vitalsScale * (f32)unit->initial.maxHp);
        unit->initial.maxHp = maxHp;
        if (maxHp >= 9999999) {
            maxHp = 9999999;
        }
        unit->initial.maxHp = maxHp;
        s32 level2 = (s32)(vitalsScale * (f32)unit->initial.level);
        unit->initial.level = level2;
        if (level2 >= 9999999) {
            level2 = 9999999;
        }
        unit->initial.hp = maxHp;
        unit->initial.level = level2;
        unit->initial.mp = level2;
        f32 statScale = clamped * 0.25f + 1.0f + square * 0.033333335f;
        for (s32 i = 0; i < 5; i++) {
            s16 stat = (s16)(s32)(statScale * (f32)(s32)(s16)unit->initial.stats[i]);
            if (stat >= 999) {
                stat = 999;
            }
            unit->initial.stats[i] = stat;
        }
        if (gameProgressIsAdvanced() != 0 && battle->phase >= 0) {
            s32 hp = FUN_001f4da0(unit->sourceId);
            if (hp > 0) {
                if (unit->initial.maxHp < hp) {
                    hp = unit->initial.maxHp;
                }
                unit->initial.hp = hp;
            }
        }
    }
}

} /* extern "C" */
