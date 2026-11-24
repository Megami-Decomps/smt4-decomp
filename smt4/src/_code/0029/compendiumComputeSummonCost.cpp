/* NON_MATCHING: 424 lines (shape 326); the port of smt4a compendiumComputeSummonCost. Control flow, calls and constants
 * match. Retail loads the id from its stack home and forms &record once ahead of the source switch and moves the
 * result into the unit register at the end of each case, as for the arguments and result of an inlined builder; this
 * build reloads the id in every case. Written as a plain static helper `summonCostBuildUnit(source, id, &record)`
 * the function is 311 lines (shape 221) and the twin 223 instead of 247, but the helper has one call and no evidence
 * besides that shape, so the switch is written in place. Retail's frame is also 44 bytes larger (3184), it copies the
 * affinity order before the weight pairs, reads the stock count through a pooled offset (0x910b) with the table left
 * in r0 and clamps both ranks with signed compares (movgt, here movhi). The two constant initialisers are 144 bytes
 * apart in retail's .constdata (8 here), as in the twin. */
#include <string.h>
#include "gamedata/DataTable.h"
#include "AsdSDK/AsdMemUtil.h"
#include "camp/Config/Config.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/UnitStats.h"

extern "C" {

void unitRecordBuild(u32 id, StatBlock *block);
void unitInitializeFromSavedRecord(u32 id, StatBlock *unit);
void bitsetSetBit(StatBlock *unit, u32 flag);
void unitRecalculateEffectiveStats(StatBlock *unit);
u32 randomGetUpperSixBits(const StatBlock *unit, u8 index);
u32 jyoucyuGetTableEntry(s32 index);
f32 FUN_002b99b8(f32 base, f32 exponent);

/* Set while a cost is computed with its trace enabled. */
extern u8 DAT_0043d9b0;

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

/* The affinities in the order the cost visits them: a constant of this file (0x40227c). Retail reaches the
 * state/weight pairs below from this constant's base (+0x90), as Apocalypse's compendiumComputeSummonCost does. */
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
    StatBlock record;
    StatBlock tableRecord;
    u8 affinityStates[8];
    StatBlock *unit;
    const NkmBaseRecord *base;
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

    DAT_0043d9b0 = trace;
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
        unitInitializeFromSavedRecord(id, &record);
        unit = &record;
        break;
    case SUMMON_COST_FROM_PARTY: {
        StatBlock *member = slotTableFindStockUnit(id);

        record = *member;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 8; j++) {
                record.growth.progressWords[i].words[j] = 0;
            }
        }
        memClear(record.growth.counters, sizeof(record.growth.counters));
        bitsetSetBit(&record, nkmBaseGetRecord(id)->innateFlag);
        unitRecalculateEffectiveStats(&record);
        unit = &record;
        break;
    }
    }

    hp = unit->maxHp;
    mp = unit->maxMp;
    statTotal = unit->effectiveStats[0] + unit->effectiveStats[1] + unit->effectiveStats[2] + unit->effectiveStats[3] + unit->effectiveStats[4];
    entries = (const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 0));
    hpScale = entries[0] * 0.01f;
    hpExponent = entries[1] * 0.01f;
    mpScale = entries[2] * 0.01f;
    mpExponent = entries[3] * 0.01f;
    statExponent = entries[4] * 0.01f;
    if (DAT_0043d9b0 != 0) {
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
    statScore = (s32)(FUN_002b99b8(hp, hpExponent) + FUN_002b99b8(mp, mpExponent) + FUN_002b99b8(statTotal, statExponent));

    affinityScore = 0;
    level = unit->level;
    for (i = 0; i <= 7; i++) {
        affinityStates[i] = randomGetUpperSixBits(unit, (u8)i);
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
        if (DAT_0043d9b0 != 0) {
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
            if (DAT_0043d9b0 != 0) {
                jyoucyuGetTableEntry(0);
            }
        }
    }
    if (affinityScore < 0) {
        affinityScore = 0;
    }
    levelScore = (s32)(FUN_002b99b8(affinityScore, entries[6] * 0.01f) * level);

    unitRecordBuild(id, &tableRecord);
    skillScore = 0;
    if (DAT_0043d9b0 != 0) {
        jyoucyuGetTableEntry(0);
    }
    for (i = 0; i < 8; i++) {
        if (tableRecord.skills.ids[i] != 0) {
            const SkillFlagsRecord *skill = dataTable06Sub1GetRecord(tableRecord.skills.ids[i]);

            if (skill != NULL) {
                rank = skill->flags & 0x1F;
                if (rank < 0) {
                    rank = 0;
                } else if (rank > SUMMON_COST_SKILL_RANK_MAX) {
                    rank = SUMMON_COST_SKILL_RANK_MAX;
                }
                skillScore += ((const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 2)))[rank];
                if (DAT_0043d9b0 != 0) {
                    jyoucyuGetTableEntry(0);
                }
            }
        }
    }

    /* The highest rank among the skills the demon does not start with. */
    {
        const NkmBaseRecord *unitBase = nkmBaseGetRecord(unit->id);

        topRank = 0;
        for (i = 0; i < 8; i++) {
            if (unit->skills.ids[i] != 0) {
                const SkillFlagsRecord *skill = dataTable06Sub1GetRecord(unit->skills.ids[i]);

                if (skill != NULL && (skill->flags & 0x1F) > topRank) {
                    for (j = 0; j < 8; j++) {
                        if (unitBase->skills[j] != 0 && unit->skills.ids[i] == unitBase->skills[j]) {
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
    if (DAT_0043d9b0 != 0) {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    }

    entries = (const s32 *)dataTableGetEntries(dataTableGet(SUMMON_COST_TABLE, 3));
    cost = (statScore * entries[0] + levelScore * entries[1] + skillScore * entries[2] + rankScore * entries[3]) * (base->summonCostRate / 10);
    if (FUN_002973ec() == 2) {
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
    if (flagBitIsSet(45)) {
        cost = (u32)(cost * 0.5f);
    } else if (flagBitIsSet(44)) {
        cost = (u32)(cost * 0.8f);
    } else if (flagBitIsSet(43)) {
        cost = (u32)(cost * 0.9f);
    } else if (flagBitIsSet(42)) {
        cost = (u32)(cost * 0.95f);
    }
    if (cost > SUMMON_COST_MAX) {
        cost = SUMMON_COST_MAX;
    }
    return cost;
}

} /* extern "C" */
