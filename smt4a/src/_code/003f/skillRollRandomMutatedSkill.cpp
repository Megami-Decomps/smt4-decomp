/* NON_MATCHING: 2 lines; only `mov r5, #0; add r7, r0, #1` vs `add r7, r0, #1; mov r5, #0` before randRange(99) differs. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include "util/Random.h"
#include "code/Code003f.h"

/* Chance table of one rank: cumulative-free percentages of landing on rank-2 .. rank+2. */
struct SkillRankChances {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 percent[5];
};

extern "C" {
s32 gameDataFlagTestBit(u32 flag);

#define SKILL_ID_COUNT 0x1F5
#define SKILL_KNOWN_COUNT 16

/* Rolls a rank-shift step (0..4) from the rank's percentage table (same helper as twin smt4 FUN_0033be90). */
static __inline u8 rollRankStep(u8 rank)
{
    const u8 *percent = ((SkillRankChances *)dataTable14Sub0GetRecord(rank))->percent;
    u8 step = 0;
    u8 cumulative = 0;
    u32 roll = randRange(99);
    do {
        cumulative += percent[step];
        if (roll < cumulative)
            break;
        step++;
    } while (step < 5);
    return step;
}

/* Picks a random learnable skill of a rank derived from the skill at `index` of the source
 * list: the rank shifts by -2..+2 according to a percentage table (+1 with flag 5 set). Skills
 * the unit already knows are skipped. Returns the skill id or 0. */
u16 skillRollRandomMutatedSkill(const u16 *sourceSkills, s32 index, u32 demonId)
{
    if (index < 0)
        return 0;

    u32 rank = findSkillMetadataById(sourceSkills[index])->flags & 0x1F;
    u8 step = rollRankStep(rank);
    switch (step) {
    case 0:
        if (rank >= 2)
            rank = (rank - 2) & 0xFF;
        break;
    case 1:
        if (rank != 0)
            rank = (rank - 1) & 0xFF;
        break;
    case 3:
        rank = (rank + 1) & 0xFF;
        break;
    case 4:
        rank = (rank + 2) & 0xFF;
        break;
    }
    if (gameDataFlagTestBit(5) != 0)
        rank = (rank + 1) & 0xFF;

    u16 known[SKILL_KNOWN_COUNT] = {0};
    for (s32 i = 0; i < 8; i++)
        known[i] = sourceSkills[i];
    const NkmBaseRecordA *demon = nkmBaseGetRecord(demonId);
    known[8] = demon->learnedSkills[0].id;
    known[9] = demon->learnedSkills[1].id;
    known[10] = demon->learnedSkills[2].id;
    known[11] = demon->learnedSkills[3].id;
    known[12] = demon->learnedSkills[4].id;
    known[13] = demon->learnedSkills[5].id;
    known[14] = demon->learnedSkills[6].id;
    known[15] = demon->learnedSkills[7].id;

    s32 candidates = 0;
    for (u16 id = 1; id < SKILL_ID_COUNT; id++) {
        CompactSortRecord *meta = findSkillMetadataById(id);
        if (meta != NULL && (meta->flags & 0x80) && (meta->flags & 0x1F) == rank) {
            bool found = false;
            for (s32 i = 0; i < SKILL_KNOWN_COUNT; i++) {
                if (known[i] == meta->id) {
                    found = true;
                    break;
                }
            }
            if (!found)
                candidates++;
        }
    }
    if (candidates != 0) {
        s32 pick = randRange((candidates - 1) & 0xFFFF);
        for (u16 id = 1; id < SKILL_ID_COUNT; id++) {
            CompactSortRecord *meta = findSkillMetadataById(id);
            if (meta != NULL && (meta->flags & 0x80) && (meta->flags & 0x1F) == rank) {
                bool found = false;
                for (s32 i = 0; i < SKILL_KNOWN_COUNT; i++) {
                    if (known[i] == meta->id) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    pick--;
                    if (pick == 0)
                        return meta->id;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
