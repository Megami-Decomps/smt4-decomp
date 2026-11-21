/* NON_MATCHING: 58 lines; both candidate-scan loops now match, remaining: rank/step r5/r6 register swap in the percentage roll and switch. */
#include "battle/BattleCommandMenu.h"
#include "util/Random.h"
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillFlags.h"
#include "code/Code003f.h"

struct RankShiftRecord {
    /* 0x00 */ u8 rank;
    /* 0x01 */ u8 weights[5];
};

struct SkillSet {
    u16 ids[8];
};

extern "C" {

/* Rolls a rank-shift step (0..4) from the rank's weight table (twin of smt4a FUN_003f36a4). */
static __inline u8 rollRankStep(u8 rank)
{
    const u8 *weights = ((RankShiftRecord *)dataTable14Sub0GetRecord(rank))->weights;
    u8 step = 0;
    u8 total = 0;
    u32 roll = randNextInRange(99);
    do {
        total = weights[step] + total;
        if (total > roll)
            break;
        step++;
    } while (step < 5);
    return step;
}

/* Picks a random learnable skill after shifting the source skill's rank by -2..+2 (+1 when flag 5 is set). */
u16 skillRollRandomMutatedSkill(const SkillSet *current, s32 slot, u16 devilId)
{
    if (slot < 0)
        return 0;

    u8 rank = dataTable06Sub1GetRecord(current->ids[slot])->flags & 0x1F;
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
    if (flagBitIsSet(5))
        rank = (rank + 1) & 0xFF;

    u16 known[16];
    *(SkillSet *)known = *current;
    const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord(devilId);
    known[8] = devil->learnedSkills[0].id;
    known[9] = devil->learnedSkills[1].id;
    known[10] = devil->learnedSkills[2].id;
    known[11] = devil->learnedSkills[3].id;
    known[12] = devil->learnedSkills[4].id;
    known[13] = devil->learnedSkills[5].id;
    known[14] = devil->learnedSkills[6].id;
    known[15] = devil->learnedSkills[7].id;

    s32 candidates = 0;
    for (u16 id = 1; id <= 500; id++) {
        SkillFlagsRecord *skill = dataTable06Sub1GetRecord(id);
        if ((skill->flags & 0x80) && (skill->flags & 0x1F) == rank) {
            bool found = false;
            for (s32 i = 0; i < 16; i++) {
                if (known[i] == skill->id) {
                    found = true;
                    break;
                }
            }
            if (!found)
                candidates++;
        }
    }
    if (candidates != 0) {
        s32 pick = randNextInRange((u16)(candidates - 1));
        for (u16 id = 1; id <= 500; id++) {
            SkillFlagsRecord *skill = dataTable06Sub1GetRecord(id);
            if ((skill->flags & 0x80) && (skill->flags & 0x1F) == rank) {
                bool found = false;
                for (s32 i = 0; i < 16; i++) {
                    if (known[i] == skill->id) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    pick--;
                    if (pick == 0)
                        return skill->id;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
