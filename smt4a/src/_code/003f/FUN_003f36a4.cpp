/* NON_MATCHING: skill inheritance pick; retail's candidate scan loops and the u8 rank arithmetic schedule differently */
#include "common.h"

/* A skill record; the byte at +3 packs the learnable flag (0x80) and the skill rank (low 5 bits). */
struct SkillMeta {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 rankFlags;
};

/* Chance table of one rank: cumulative-free percentages of landing on rank-2 .. rank+2. */
struct SkillRankChances {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 percent[5];
};

/* The unit's skill slots (every second halfword). */
struct UnitSkillSlots {
    /* 0x00 */ u8 unk00[0x52];
    /* 0x52 */ u16 slot0;
    /* 0x54 */ u16 pad54;
    /* 0x56 */ u16 slot1;
    /* 0x58 */ u16 pad58;
    /* 0x5A */ u16 slot2;
    /* 0x5C */ u16 pad5C;
    /* 0x5E */ u16 slot3;
    /* 0x60 */ u16 pad60;
    /* 0x62 */ u16 slot4;
    /* 0x64 */ u16 pad64;
    /* 0x66 */ u16 slot5;
    /* 0x68 */ u16 pad68;
    /* 0x6A */ u16 slot6;
    /* 0x6C */ u16 pad6C;
    /* 0x6E */ u16 slot7;
};

extern "C" {
u32 randRange(u32 maximum);
UnitSkillSlots *FUN_00184310(void *unit);
SkillMeta *findSkillMetadataById(u32 id);
SkillRankChances *FUN_003f39ac(u32 rank);
s32 gameDataFlagTestBit(u32 flag);

#define SKILL_ID_COUNT 0x1F5
#define SKILL_KNOWN_COUNT 16

/* Picks a random learnable skill of a rank derived from the skill at `index` of the source
 * list: the rank shifts by -2..+2 according to a percentage table (+1 with flag 5 set). Skills
 * the unit already knows are skipped. Returns the skill id or 0. */
s16 FUN_003f36a4(const u16 *sourceSkills, s32 index, void *unit)
{
    if (index < 0)
        return 0;

    u32 rank = findSkillMetadataById(sourceSkills[index])->rankFlags & 0x1F;
    SkillRankChances *chances = FUN_003f39ac(rank);
    u8 step = 0;
    u8 cumulative = 0;
    u32 roll = randRange(99);
    do {
        cumulative = chances->percent[step] + cumulative;
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

    u16 known[SKILL_KNOWN_COUNT];
    for (s32 i = 0; i < 8; i++)
        known[i] = sourceSkills[i];
    UnitSkillSlots *slots = FUN_00184310(unit);
    known[8] = slots->slot0;
    known[9] = slots->slot1;
    known[10] = slots->slot2;
    known[11] = slots->slot3;
    known[12] = slots->slot4;
    known[13] = slots->slot5;
    known[14] = slots->slot6;
    known[15] = slots->slot7;

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
