/* NON_MATCHING: same instruction stream except the zero constant and the 0xfc00 mask swap r8/r9 and the last skillsB upper-six-bits update keeps its result in r2 (extra mov) in retail */
#include "gamedata/PackedSkillSlot.h"

/* The persistent unit record the battle unit is built from. */
struct SourceUnit {
    /* 0x000 */ u8 unk000[0xE];
    /* 0x00E */ s16 maxHp;
    /* 0x010 */ s16 maxMp;
    /* 0x012 */ s16 attributes[5];
    /* 0x01C */ u8 unk01C[0xE];
    /* 0x02A */ s16 hp;
    /* 0x02C */ s16 mp;
    /* 0x02E */ u8 unk02E[0x16];
    /* 0x044 */ u16 level;
    /* 0x046 */ u16 id;
    /* 0x048 */ u8 variant;
    /* 0x049 */ u8 unk049[0x5BB];
    /* 0x604 */ s16 supportKind;
    /* 0x606 */ u16 supportIndex;
};

/* Current values of a unit: HP, max HP, MP, max MP and the five attributes. */
struct UnitVitals {
    s16 hp, maxHp, mp, maxMp;
    s16 attributes[5];
};

struct BattleUnit {
    /* 0x000 */ u8 type;
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 id;
    /* 0x004 */ s16 supportKind;
    /* 0x006 */ s16 supportIndex;
    /* 0x008 */ s16 unk008;
    /* 0x00A */ u8 unk00A[0xCA];
    /* 0x0D4 */ u8 unkD4;
    /* 0x0D5 */ u8 unkD5;
    /* 0x0D6 */ UnitVitals vitals;
    /* 0x0E8 */ UnitVitals baseVitals;
    /* 0x0FA */ u16 level;
    /* 0x0FC */ u16 unkFC;
    /* 0x0FE */ u16 unkFE;
    /* 0x100 */ u16 variant;
    /* 0x102 */ PackedSkillSlot skillsA[18];
    /* 0x126 */ PackedSkillSlot skillsB[18];
    /* 0x14A */ u8 unk14A;
    /* 0x14B */ u8 unk14B;
    /* 0x14C */ u32 unk14C[14];
    /* 0x184 */ u32 unk184;
};

struct DevilRecord;

extern "C" {
s32 FUN_002b6ad0(void);
u32 randomGetLowerTenBits(const SourceUnit *unit, u32 index);
u32 randomGetUpperSixBits(const SourceUnit *unit, u32 index);
u32 FUN_003c8538(u32 index);
u32 FUN_003c862c(u32 index);
struct SupportEntry {
    u8 unk00[8];
    u32 packed;
};
const SupportEntry *supportUnitGetEntry(s32 kind, u32 index);
u8 *devilGetRecord(u32 id);

/* Fills an ally battle unit from the persistent unit record: vitals, random or support-unit skills and cleared work fields. */
void FUN_00337cfc(u32 unused, BattleUnit *unit, SourceUnit *source)
{
    s32 support = FUN_002b6ad0();
    unit->id = source->id;
    unit->type = 8;
    unit->unk008 = -1;
    unit->supportKind = -1;
    unit->supportIndex = -1;
    unit->unkD4 = 0;
    unit->vitals.hp = source->hp;
    unit->vitals.maxHp = source->maxHp;
    unit->vitals.mp = source->mp;
    unit->vitals.maxMp = source->maxMp;
    unit->vitals.attributes[0] = source->attributes[0];
    unit->vitals.attributes[1] = source->attributes[1];
    unit->vitals.attributes[2] = source->attributes[2];
    unit->vitals.attributes[3] = source->attributes[3];
    unit->vitals.attributes[4] = source->attributes[4];
    unit->baseVitals = unit->vitals;
    unit->level = source->level;
    unit->variant = source->variant;
    s32 i = 0;
    if (support != 0) {
        unit->supportKind = source->supportKind;
        unit->supportIndex = source->supportIndex;
        do {
            unit->skillsA[i].id = FUN_003c8538(i & 0xFF);
            unit->skillsA[i].unk00 = FUN_003c862c(i & 0xFF);
            unit->skillsB[i].id = FUN_003c8538(i & 0xFF);
            unit->skillsB[i].unk00 = FUN_003c862c(i & 0xFF);
            i++;
        } while (i < 18);
        unit->unk14A = (supportUnitGetEntry(source->supportKind, source->supportIndex)->packed << 2) >> 24;
    } else {
        do {
            unit->skillsA[i].id = randomGetLowerTenBits(source, i & 0xFF);
            unit->skillsA[i].unk00 = randomGetUpperSixBits(source, i & 0xFF);
            unit->skillsB[i].id = randomGetLowerTenBits(source, i & 0xFF);
            unit->skillsB[i].unk00 = randomGetUpperSixBits(source, i & 0xFF);
            i++;
        } while (i < 18);
        const u8 *record = devilGetRecord(unit->id);
        unit->unk14A = record[0x33];
        u8 kind = record[5];
        if (kind == 1) {
            unit->unk14B = 1;
        } else if (kind == 4) {
            unit->unk14B = 0;
        } else if (kind == 5) {
            unit->unk14B = 2;
        }
    }
    for (s32 k = 0; k < 14; k++) {
        unit->unk14C[k] = 0;
    }
    unit->unkFC = 0;
    unit->unkFE = 0;
    unit->unk184 = 0;
}
}
