/* NON_MATCHING: 208 lines (66 by shape): the code is retail's but for the allocation of three values. Retail keeps
 * foundCount in fp (then the count) and spills the record's index * 3 where this keeps index * 3 in sl and reloads
 * foundCount from its pushed slot, so the departure block, the candidate count and the picked id sit in other
 * registers, and retail's `return 0` block follows the member count (reached with r0 already 0 from three tests). */
#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/SaveSlotTable.h"
#include "util/Random.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_VariantG.h"

/* unit-local: a row of data table 0x42 (12 bytes) as this search reads it: how many relics a search finds, by the
 * number of party members that take part, and the level range and kinds of the candidates. */
struct RelicSearchCount {
    /* 0x00 */ u8 low;
    /* 0x01 */ u8 high;
};

struct RelicSearchRecord {
    /* 0x00 */ RelicSearchCount counts[3]; /* with up to two, up to four and more members */
    /* 0x06 */ u8 levelA;                  /* the candidates' level lies between levelA and levelB */
    /* 0x07 */ u8 levelB;
    /* 0x08 */ u8 kinds[4];
};

/* unit-local: the candidate record aocRecordLookup83 returns (observed fields). */
struct RelicCandidate {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u8 level;
    /* 0x25 */ u8 kind;
};

/* unit-local: the departure block's record of the find the partner comments on. */
struct MapDepartFind {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ s32 praisedKind;   /* kind of the best relic the partner is pleased with, 0 for none */
    /* 0xA8 */ s32 praisedLevel;
};

extern "C" {

extern MapDepartFind *g_mapDepart;

RelicCandidate *aocRecordLookup83(u32 id); // declcheck: local (the shared declarations return void; the lookup returns the record)
s32 gamePackedFlagTest(s32 id);
void flagValueAdd(s32 id, u32 amount);

/* Row `index` of data table 0x42, NULL past its end. */
static __inline RelicSearchRecord *relicSearchRecord(u32 index)
{
    void *table = dataTableGet(0x42, 0);
    RelicSearchRecord *records = (RelicSearchRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        return NULL;
    return &records[index];
}

/* Lists the ids of the relics within search record `index`'s level range and of its kinds; returns how many. */
static __inline s16 relicSearchCandidates(s32 index, s16 *list)
{
    RelicSearchRecord *range = relicSearchRecord(index);
    u8 kind0 = range->kinds[0];
    u8 levelLow = range->levelA;
    u8 levelHigh = range->levelB;
    u8 kind1 = range->kinds[1];
    u8 kind2 = range->kinds[2];
    u8 kind3 = range->kinds[3];
    if (levelLow > levelHigh) {
        u8 swap = levelLow;
        levelLow = levelHigh;
        levelHigh = swap;
    }
    s32 count = 0;
    for (u32 id = 0x3B7; id <= 0x47E; id++) {
        RelicCandidate *candidate = aocRecordLookup83(id);
        if (candidate == NULL || candidate->level < levelLow || candidate->level > levelHigh)
            continue;
        u8 kind = candidate->kind;
        if (kind == kind0 || kind == kind1 || kind == kind2 || kind == kind3)
            list[count++] = candidate->id;
    }
    return count;
}

/* Searches for relics with search record `index` (one time in five, unless the game state forces it): the number
 * found depends on how many party members take part, each one is a random candidate of the record's level range
 * and kinds. Each id goes to `ids` (when given) and is added to the inventory; `fresh[i]` tells whether the i-th
 * was still unknown. Returns 0 when nothing is found, 2 when the partner is pleased with a find (its kind and
 * level are left in the departure block) and 1 otherwise. */
s32 relicSearchDraw(s32 index, s32 *ids, u8 *fresh, s32 *foundCount)
{
    s16 candidates[200];
    MapDepartFind *depart = g_mapDepart;
    RelicSearchRecord *record = relicSearchRecord(index);
    if (record == NULL || index <= 0)
        return 0;
    if (g_gameState.relicSearchAlways == 0) {
        f32 roll = randRange(99);
        if (roll >= 20.0f)
            return 0;
    }
    s32 found = 0;
    s32 members = 0;
    for (s32 i = 0; i < 12; i++) {
        if (partyGetSlot((u16)i)->flags & 1)
            members++;
    }
    if (members <= 0)
        return 0;
    s32 tier;
    if (members <= 2)
        tier = 0;
    else if (members <= 4)
        tier = 1;
    else
        tier = 2;
    s32 low = record->counts[tier].low;
    s32 count = randRange((u16)(record->counts[tier].high - low)) + low;
    if (count == 0)
        return 0;
    *foundCount = count;
    PartySlotA *partner = saveSlotFindSelected();
    if (partner == NULL)
        return 0;
    s16 candidateCount = relicSearchCandidates(index, candidates);
    if (candidateCount != 0) {
        depart->praisedKind = 0;
        s32 result = 1;
        depart->praisedLevel = 0;
        for (; found < count; found++) {
            s16 id = candidates[randRange((u16)(candidateCount - 1))];
            fresh[found] = gamePackedFlagTest(id) == 0;
            result = 1;
            flagValueAdd(id, 1);
            RelicCandidate *relic = aocRecordLookup83(id);

            /* Is this a kind of relic the partner (unit id 5 or 0xAE-0xC0) is pleased with? */
            if (relic->kind == 9) {
                if (partner->id == 0xAE || partner->id == 0xB2 || partner->id == 5 ||
                    partner->id == 0xB9)
                    result = 2;
            } else if (relic->kind == 10) {
                if (partner->id == 0xAE || partner->id == 0xB0 || partner->id == 5)
                    result = 2;
            } else if (relic->kind == 1) {
                if (partner->id == 0xAF || partner->id == 0xB1 || partner->id == 0xB2 ||
                    partner->id == 0xB3 || partner->id == 0xBF || partner->id == 0xC0 ||
                    partner->id == 0xB9 || partner->id == 0xBA)
                    result = 2;
            } else if (relic->kind == 2) {
                if (partner->id == 0xB0 || partner->id == 0xB2 || partner->id == 0xB3 ||
                    partner->id == 5 || partner->id == 0xB9 || partner->id == 0xBA)
                    result = 2;
            } else if (relic->kind == 3) {
                if (partner->id == 0xAE || partner->id == 0xB2 || partner->id == 0xB9)
                    result = 2;
            } else if (relic->kind == 4) {
                if (partner->id == 0xAE || partner->id == 0xAF || partner->id == 0xB1 ||
                    partner->id == 0xBF || partner->id == 0xC0)
                    result = 2;
            } else if (relic->kind == 5) {
                if (partner->id == 0xB0 || partner->id == 0xB3 || partner->id == 0xBA)
                    result = 2;
            } else if (relic->kind == 6) {
                if (partner->id == 0xAE || partner->id == 0xAF || partner->id == 0xB1 ||
                    partner->id == 0xB3 || partner->id == 0xBF || partner->id == 0xC0 ||
                    partner->id == 0xBA)
                    result = 2;
            } else if (relic->kind == 7) {
                if (partner->id == 0xB0 || partner->id == 5)
                    result = 2;
            } else if (relic->kind == 8) {
                if (partner->id == 0xAF || partner->id == 0xB1 || partner->id == 0xB2 ||
                    partner->id == 0xB3 || partner->id == 0xBF || partner->id == 0xC0 ||
                    partner->id == 0xB9 || partner->id == 0xBA)
                    result = 2;
            } else if (relic->kind == 11) {
                result = 2;
            }
            if (partner->id == 0xB1 && !gameFlagIsSet(0xC2)) {
                result = 1; /* this partner says nothing before flag 0xC2 */
            } else if (result == 2) {
                if (depart->praisedLevel == 0 || relic->level > depart->praisedLevel) {
                    depart->praisedKind = relic->kind;
                    depart->praisedLevel = relic->level;
                }
            }
            if (ids != NULL)
                ids[found] = id;
        }
        if (depart->praisedKind != 0)
            result = 2;
        return result;
    }
    return 0;
}

} /* extern "C" */
