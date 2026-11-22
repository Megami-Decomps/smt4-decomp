/* NON_MATCHING: 82 lines: retail swaps the count range in place (movlt pair, the drawn count zeroed ahead of it), keeps the record lookup's result in its own register (movne) and tests the swapped range with the swap's compare; the candidate list (the helper smt4a FUN_003774e8 shares) matches but for its frame offsets. */
#include "common.h"
#include "addon/AocSystem.h"
#include "gamedata/DataTable.h"
#include "util/Random.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

/* unit-local: a row of data table 0x21 (0x18 bytes) as this draw reads it: how many to draw, three fixed
 * rewards with their chances, and the level range and races of the random candidates. */
struct RewardDrawEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 disabled;
    /* 0x03 */ u8 chance;      /* percent */
};

struct RewardDrawRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 countA;      /* the number drawn lies between countA and countB */
    /* 0x05 */ u8 countB;
    /* 0x06 */ u8 levelA;      /* the candidates' level lies between levelA and levelB */
    /* 0x07 */ u8 levelB;
    /* 0x08 */ RewardDrawEntry fixed[3];
    /* 0x14 */ u8 races[4];
};

/* unit-local: the candidate record aocRecordLookup83 returns (observed fields). */
struct RewardCandidate {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u8 level;
    /* 0x25 */ u8 race;
};

extern "C" {
RewardCandidate *aocRecordLookup83(u32 id); // declcheck: local (the shared declarations return void; the lookup returns the record)
void saveFlagSetOrAddCounter(s32 id, s32 mode);
u32 unlockFlagTest(s32 id);

/* The draw record `index`: a loaded package's override, else row `index` of data table 0x21 (NULL past
 * its end). */
static __inline RewardDrawRecord *rewardDrawRecord(u32 index)
{
    RewardDrawRecord *record = (RewardDrawRecord *)aocFindPackageTable22Record(g_aocSystem, index);
    if (record != NULL)
        return record;
    void *table = dataTableGet(0x21, 0);
    RewardDrawRecord *records = (RewardDrawRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        return NULL;
    return &records[index];
}

/* Lists the ids of the candidates within draw record `index`'s level range and of its races; returns how many. */
static __inline s16 rewardDrawCandidates(u32 index, s16 *list)
{
    RewardDrawRecord *range = rewardDrawRecord(index);
    u8 race0 = range->races[0];
    u8 levelLow = range->levelA;
    u8 levelHigh = range->levelB;
    u8 race1 = range->races[1];
    u8 race2 = range->races[2];
    u8 race3 = range->races[3];
    if (levelLow > levelHigh) {
        u8 swap = levelLow;
        levelLow = levelHigh;
        levelHigh = swap;
    }
    s32 count = 0;
    for (u32 id = 0x3B7; id <= 0x47E; id++) {
        RewardCandidate *candidate = aocRecordLookup83(id);
        if (candidate == NULL || candidate->level < levelLow || candidate->level > levelHigh)
            continue;
        u8 race = candidate->race;
        if (race == race0 || race == race1 || race == race2 || race == race3)
            list[count++] = candidate->id;
    }
    return count;
}

/* Draws the rewards of draw record `index`: first the fixed ones by their chances, then random candidates
 * of the record's level range and races. Each id goes to `ids` (when given) and is counted; `fresh[i]`
 * tells whether the i-th random candidate was still locked. Returns the percentage of the drawn count
 * within its range (50 when the range is one value), 0 when nothing could be drawn. */
u32 rewardDrawFromRecord(u32 index, s32 *ids, u8 *fresh, s32 *drawCount)
{
    s16 candidates[200];
    RewardDrawRecord *record = rewardDrawRecord(index);
    if (record != NULL) {
        s32 first = record->countA;
        s32 second = record->countB;
        s32 low = second < first ? second : first;
        s32 high = second < first ? first : second;
        u32 percent;
        if (high == low) {
            percent = 50;
        } else {
            s32 extra = randNextInRange((u16)(high - low));
            percent = extra * 100 / (high - low);
            high = low + extra;
        }
        s32 count = high;
        if (count > 0) {
            if (drawCount != NULL)
                *drawCount = count;
            s32 drawn = 0;
            for (s32 i = 0; i < 3; i++) {
                u16 id = record->fixed[i].id;
                if (id == 0 || record->fixed[i].chance == 0 || record->fixed[i].disabled != 0)
                    continue;
                if ((u16)(randNextInRange(99) + 1) > record->fixed[i].chance)
                    continue;
                saveFlagSetOrAddCounter(id, 1);
                if (ids != NULL)
                    ids[drawn] = id;
                drawn++;
                if (drawn >= count)
                    return percent;
            }

            s16 candidateCount = rewardDrawCandidates(index, candidates);
            if (candidateCount != 0) {
                for (; drawn < count; drawn++) {
                    s16 id = candidates[randNextInRange((u16)(candidateCount - 1))];
                    if (unlockFlagTest(id) == 0)
                        fresh[drawn] = 1;
                    else
                        fresh[drawn] = 0;
                    saveFlagSetOrAddCounter(id, 1);
                    if (ids != NULL)
                        ids[drawn] = id;
                }
                return percent;
            }
        }
    }
    jyoucyuGetTableEntry(0);
    return 0;
}

} /* extern "C" */
