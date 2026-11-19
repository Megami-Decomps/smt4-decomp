/* NON_MATCHING: skill inheritance pick; retail's candidate scan loops are not unrolled (signed counter) and step/cumulative take r5/r4 (swapped here). */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "code/Code003f.h"

/* A skill record; the byte at +3 packs the learnable flag (0x80) and the skill rank (low 5 bits). */
struct SkillMeta {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 rankFlags;
};

/* Chance table of one rank: cumulative-free percentages of landing on rank-2 .. rank+2. */
struct SkillRankChances {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 percent[5];
};

extern "C" {
u32 randRange(u32 maximum);
SkillMeta *findSkillMetadataById(u32 id);
s32 gameDataFlagTestBit(u32 flag);

#define SKILL_ID_COUNT 0x1F5
#define SKILL_KNOWN_COUNT 16

/* Picks a random learnable skill of a rank derived from the skill at `index` of the source
 * list: the rank shifts by -2..+2 according to a percentage table (+1 with flag 5 set). Skills
 * the unit already knows are skipped. Returns the skill id or 0. */
s16 FUN_003f36a4(const u16 *sourceSkills, s32 index, u32 demonId)
{
    if (index < 0)
        return 0;

    u32 rank = findSkillMetadataById(sourceSkills[index])->rankFlags & 0x1F;
    const u8 *percent = static_cast<SkillRankChances *>(dataTable14Sub0GetRecord(rank))->percent;
    u8 step = 0;
    u8 cumulative = 0;
    u32 roll = randRange(99);
    do {
        cumulative = percent[step] + cumulative;
        if (roll < cumulative)
            break;
        step++;
    } while (step < 5);

    if (step == 0) {
        if (rank >= 2)
            rank = (rank - 2) & 0xFF;
    } else if (step == 1) {
        if (rank != 0)
            rank = (rank - 1) & 0xFF;
    } else if (step == 3) {
        rank = (rank + 1) & 0xFF;
    } else if (step == 4) {
        rank = (rank + 2) & 0xFF;
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
        SkillMeta *meta = findSkillMetadataById(id);
        if (meta != NULL && (meta->rankFlags & 0x80) && (meta->rankFlags & 0x1F) == rank) {
            s32 i;
            for (i = 0; i < SKILL_KNOWN_COUNT; i++) {
                if (known[i] == meta->id)
                    break;
            }
            if (i == SKILL_KNOWN_COUNT)
                candidates++;
        }
    }
    if (candidates != 0) {
        s32 pick = randRange((candidates - 1) & 0xFFFF);
        for (u16 id = 1; id < SKILL_ID_COUNT; id++) {
            SkillMeta *meta = findSkillMetadataById(id);
            if (meta != NULL && (meta->rankFlags & 0x80) && (meta->rankFlags & 0x1F) == rank) {
                s32 i;
                for (i = 0; i < SKILL_KNOWN_COUNT; i++) {
                    if (known[i] == meta->id)
                        break;
                }
                if (i == SKILL_KNOWN_COUNT) {
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
