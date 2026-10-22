/* NON_MATCHING: the two conditional set-ups before the skill loop (`skills` base and `j = 0`) are emitted in the opposite order. */
#include "common.h"

struct SkillRollUnit {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[0x1E];
    /* 0x62 */ u16 id;
};

struct SkillRollRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 level : 7;
    /* 0x34 */ u32 unk34Bits : 25;
};

struct SkillRollMetadata {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 flags;
};

extern "C" {

SkillRollRecord *FUN_00184310(u16 id);
s32 FUN_0031cfd0(u16 id);
s32 gameDataFlagTestBit(u32 bit);
s32 randRange(u32 max);
SkillRollMetadata *findSkillMetadataById(u16 id);

/* Rolls `tries` times against the unit's level-based chance (always succeeding when `force` is
 * set) and reports whether a successful roll finds a skill with metadata flag 0x40. */
s32 FUN_003f3048(SkillRollUnit *unit, s32 tries, s32 force)
{
    SkillRollRecord *record;
    s32 chance;
    s32 i;
    s32 j;

    if (tries <= 0) {
        return 0;
    }
    record = FUN_00184310(unit->id);
    chance = FUN_0031cfd0(unit->id) / 500 + record->level;
    if (gameDataFlagTestBit(5) != 0) {
        chance += 30;
    }
    for (i = 0; i < tries; i++) {
        s32 roll = randRange(99);
        if (force != 0) {
            roll = -1;
        }
        if (roll < chance) {
            const u16 *skills = unit->skills;
            for (j = 0; j < 8; j++) {
                if (findSkillMetadataById(skills[j])->flags & 0x40) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
