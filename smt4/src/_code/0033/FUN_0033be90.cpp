/* NON_MATCHING: logic matches; armcc re-rolls the eight devil skill copies into a loop (retail is straight-line) and allocates rank/bucket/count registers differently. */
#include "common.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/SkillFlags.h"

/* Table 14 record: rank id and the odds (percent) of shifting the rank. */
struct RankShiftRecord {
    /* 0x00 */ u8 rank;
    /* 0x01 */ u8 weights[5];
};

struct SkillSet {
    u16 ids[8];
};

extern "C" {
RankShiftRecord *dataTable14Sub0GetRecord(u8 rank);
u32 randNextInRange(int limit);
u8 flagBitIsSet(u32 bit);

/* Whether a skill is learnable at `rank` and not already known. */
static inline s32 isNewSkillOfRank(u8 flags, u16 id, u32 rank, const u16 *known)
{
    if ((flags & 0x80) == 0 || (flags & 0x1F) != rank) {
        return 0;
    }
    for (s32 i = 0; i < 16; i++) {
        if (known[i] == id) {
            return 0;
        }
    }
    return 1;
}

// Pick a random skill a demon could newly learn, a rank shifted from the one at `slot` of its current skills.
u32 FUN_0033be90(const SkillSet *current, s32 slot, u16 devilId)
{
    if (slot < 0) {
        return 0;
    }
    u8 rank = dataTable06Sub1GetRecord(current->ids[slot])->flags & 0x1F;
    const u8 *weights = dataTable14Sub0GetRecord(rank)->weights;
    u8 bucket = 0;
    u8 total = 0;
    u32 roll = randNextInRange(99);
    do {
        total = weights[bucket] + total;
        if (total > roll) {
            break;
        }
        bucket++;
    } while (bucket < 5);
    switch (bucket) {
    case 0:
        if (rank >= 2) {
            rank -= 2;
        }
        break;
    case 1:
        if (rank != 0) {
            rank -= 1;
        }
        break;
    case 3:
        rank += 1;
        break;
    case 4:
        rank += 2;
        break;
    }
    if (flagBitIsSet(5)) {
        rank += 1;
    }

    u16 known[16];
    *(SkillSet *)known = *current;
    const DevilRecord *devil = (const DevilRecord *)devilGetRecord(devilId);
    known[8] = devil->learnedSkills.entries[0].id;
    known[9] = devil->learnedSkills.entries[1].id;
    known[10] = devil->learnedSkills.entries[2].id;
    known[11] = devil->learnedSkills.entries[3].id;
    known[12] = devil->learnedSkills.entries[4].id;
    known[13] = devil->learnedSkills.entries[5].id;
    known[14] = devil->learnedSkills.entries[6].id;
    known[15] = devil->learnedSkills.entries[7].id;

    s32 candidates = 0;
    for (u16 id = 1; id <= 500; id++) {
        SkillFlagsRecord *skill = dataTable06Sub1GetRecord(id);
        if (isNewSkillOfRank(skill->flags, skill->id, rank, known)) {
            candidates++;
        }
    }
    if (candidates == 0) {
        return 0;
    }
    s32 pick = randNextInRange((u16)(candidates - 1));
    for (u16 id = 1; id <= 500; id++) {
        SkillFlagsRecord *skill = dataTable06Sub1GetRecord(id);
        u16 skillId = skill->id;
        if (isNewSkillOfRank(skill->flags, skillId, rank, known) && --pick == 0) {
            return skillId;
        }
    }
    return 0;
}

}
