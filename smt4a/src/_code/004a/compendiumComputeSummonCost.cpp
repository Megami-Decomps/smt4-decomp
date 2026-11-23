/* NON_MATCHING: 195 shape lines. Retail homes `id` on the stack, loads it and &record once ahead of the switch
 * (as the arguments of an inlined builder would be) and keeps 40 more bytes of frame; it clamps the ranks with
 * signed compares, and its two constant initialisers (the affinity order and the state/weight pairs) are 144
 * bytes apart in .constdata, with entryCollectionSortByMode's comparator table between them (8 apart here). */
#include <string.h>
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotTable.h"
#include "kernel/jyoucyuGetTableEntry.h"
#include "shard/Shard0032.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "util/Random_Smt4a.h"

extern "C" {

void unitRecordBuild(s32 id, UnitRecord *out);
void unitRecordBuildFromSave(u32 id, UnitRecord *unit);
void unitRecomputeDerivedStats(UnitRecord *unit);
f32 FUN_001a9698(f32 base, f32 exponent);

/* Set while a cost is computed with its trace enabled. */
extern u8 DAT_0057f0ac;

enum {
    SUMMON_COST_TABLE = 0x22,
    SUMMON_COST_SKILL_RANK_MAX = 31,
    SUMMON_COST_MAX = 99999999
};

/* Where the costed unit comes from. */
enum SummonCostSource {
    SUMMON_COST_FROM_TABLE,
    SUMMON_COST_FROM_SAVE,
    SUMMON_COST_FROM_PARTY
};

/* The affinities in the order the cost visits them: a constant of this file (0x52b5cc). Retail reaches the
 * state/weight pairs below from this constant's base (+0x90), past entryCollectionSortByMode's comparator table at
 * 0x52b5d4, so the three are one file's .constdata: a translation unit with entryCollectionSortByMode (and the
 * functions between, 0x4a84e8-0x4a8ec4) is the follow-up. An extern of the image's word makes armcc call
 * __ARM_common_memcpy4_8 where retail copies with ldrd/stm. */
static const u8 sAffinityOrder[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

/* What one affinity state adds to the affinity score. */
struct SummonCostAffinityWeight {
    u8 state;
    s16 weight;
};

/* The compendium's cost of summoning demon `id`: its stats, affinities and skills weighted by table 0x22,
 * scaled by the demon's cost rate, the difficulty and the discount flags. */
u32 compendiumComputeSummonCost(u32 id, s32 saved, s32 registered, u32 unused, s32 trace)
{
    UnitRecord record;
    UnitRecord tableRecord;
    u8 affinityStates[8];
    UnitRecord *unit;
    const NkmBaseRecordA *base;
    const s32 *entries;
    s32 source;
    s32 statScore;
    s32 affinityScore;
    s32 levelScore;
    s32 skillScore;
    s32 rankScore;
    s32 level;
    s32 rank;
    u32 topRank;
    u32 cost;
    s32 i;
    s32 j;
    f32 hp;
    f32 mp;
    f32 statTotal;
    f32 hpScale;
    f32 hpExponent;
    f32 mpScale;
    f32 mpExponent;
    f32 statExponent;

    DAT_0057f0ac = trace;
    base = nkmBaseGetRecord(id);
    if (registered != 0) {
        if (saved != 0) {
            source = SUMMON_COST_FROM_PARTY;
        } else {
            source = SUMMON_COST_FROM_SAVE;
        }
    } else if (saved != 0) {
        source = SUMMON_COST_FROM_SAVE;
    } else {
        source = SUMMON_COST_FROM_TABLE;
    }
    if (trace != 0) {
        jyoucyuGetTableEntry(0);
    }

    unit = NULL;
    switch (source) {
    case SUMMON_COST_FROM_TABLE:
        unitRecordBuild(id, &record);
        unit = &record;
        break;
    case SUMMON_COST_FROM_SAVE:
        unitRecordBuildFromSave(id, &record);
        unit = &record;
        break;
    case SUMMON_COST_FROM_PARTY: {
        SlotRecordA *member = saveSlotTableFindPartyUnit(id);

        record = *member;
        for (i = 0; i < (s32)sizeof(record.inheritedFlags); i++) {
            record.inheritedFlags[i] = 0;
        }
        unitRecomputeDerivedStats(&record);
        unit = &record;
        break;
    }
    }

    hp = unit->maxHp;
    mp = unit->maxMp;
    statTotal = unit->baseStats[0] + unit->baseStats[1] + unit->baseStats[2] + unit->baseStats[3] + unit->baseStats[4];
    entries = (const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 0));
    hpScale = entries[0] * 0.01f;
    hpExponent = entries[1] * 0.01f;
    mpScale = entries[2] * 0.01f;
    mpExponent = entries[3] * 0.01f;
    statExponent = entries[4] * 0.01f;
    if (DAT_0057f0ac != 0) {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    }
    hp /= hpScale;
    mp /= mpScale;
    statScore = (s32)(FUN_001a9698(hp, hpExponent) + FUN_001a9698(mp, mpExponent) + FUN_001a9698(statTotal, statExponent));

    affinityScore = 0;
    level = unit->level;
    for (i = 0; i <= 7; i++) {
        affinityStates[i] = randomGetUpperSixBits((u32)unit, (u8)i);
    }
    entries = (const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 1));
    {
        u8 order[8];
        SummonCostAffinityWeight weights[6] = { { 0, 0 }, { 1, 0 }, { 2, 0 }, { 3, 0 }, { 4, 0 }, { 5, 0 } };

        memcpy(order, sAffinityOrder, sizeof(order));
        weights[0].weight = entries[1] / 100;
        weights[1].weight = entries[3] / 100;
        weights[2].weight = entries[0] / 100;
        weights[3].weight = entries[4] / 100;
        weights[4].weight = entries[5] / 100;
        weights[5].weight = entries[2] / 100;
        if (DAT_0057f0ac != 0) {
            jyoucyuGetTableEntry(0);
        }
        for (i = 0; i < 8; i++) {
            s32 weight = 0;

            for (j = 0; j < 6; j++) {
                if (weights[j].state == affinityStates[order[i]]) {
                    weight = (s8)weights[j].weight;
                    break;
                }
            }
            affinityScore += weight;
            if (DAT_0057f0ac != 0) {
                jyoucyuGetTableEntry(0);
            }
        }
    }
    if (affinityScore < 0) {
        affinityScore = 0;
    }
    levelScore = (s32)(FUN_001a9698(affinityScore, entries[6] * 0.01f) * level);

    unitRecordBuild(id, &tableRecord);
    skillScore = 0;
    if (DAT_0057f0ac != 0) {
        jyoucyuGetTableEntry(0);
    }
    for (i = 0; i < 8; i++) {
        if (tableRecord.skills[i] != 0) {
            const CompactSortRecord *skill = findSkillMetadataById(tableRecord.skills[i]);

            if (skill != NULL) {
                rank = skill->flags & 0x1F;
                if (rank < 0) {
                    rank = 0;
                } else if (rank > SUMMON_COST_SKILL_RANK_MAX) {
                    rank = SUMMON_COST_SKILL_RANK_MAX;
                }
                skillScore += ((const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 2)))[rank];
                if (DAT_0057f0ac != 0) {
                    jyoucyuGetTableEntry(0);
                }
            }
        }
    }

    /* The highest rank among the skills the demon does not start with. */
    {
        const NkmBaseRecordA *unitBase = nkmBaseGetRecord(unit->id);

        topRank = 0;
        for (i = 0; i < 8; i++) {
            if (unit->skills[i] != 0) {
                const CompactSortRecord *skill = findSkillMetadataById(unit->skills[i]);

                if (skill != NULL && (skill->flags & 0x1F) > topRank) {
                    for (j = 0; j < 8; j++) {
                        if (unitBase->skills.ids[j] != 0 && unit->skills[i] == unitBase->skills.ids[j]) {
                            break;
                        }
                    }
                    if (j == 8) {
                        topRank = skill->flags & 0x1F;
                    }
                }
            }
        }
    }
    rank = topRank;
    if (rank < 0) {
        rank = 0;
    } else if (rank > SUMMON_COST_SKILL_RANK_MAX) {
        rank = SUMMON_COST_SKILL_RANK_MAX;
    }
    rankScore = ((const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 2)))[rank];
    if (DAT_0057f0ac != 0) {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    }

    entries = (const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 3));
    cost = (statScore * entries[0] + levelScore * entries[1] + skillScore * entries[2] + rankScore * entries[3]) * (base->summonCostRate / 10);
    if (gameDataBlocksGetTableFlag() == 2) {
        cost *= 3;
    }
    if (trace != 0) {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    }
    if (gameDataFlagTestBit(45)) {
        cost = (u32)(cost * 0.5f);
    } else if (gameDataFlagTestBit(44)) {
        cost = (u32)(cost * 0.8f);
    } else if (gameDataFlagTestBit(43)) {
        cost = (u32)(cost * 0.9f);
    } else if (gameDataFlagTestBit(42)) {
        cost = (u32)(cost * 0.95f);
    }
    if (cost > SUMMON_COST_MAX) {
        cost = SUMMON_COST_MAX;
    }
    return cost;
}

} /* extern "C" */
