/* NON_MATCHING: retail also stores zeros into the unit's 0x1C/0x1E words and copies words 0xE/0x10 to 0x2A/0x2C after the recalculation (dead stores that are left out here), and schedules the field copies and comparisons differently (about 130 diff lines). */
#include "common.h"
#include <stddef.h>

/* The record a demon id expands to (gameRecordCopy): the base values a fresh unit starts from. */
struct DemonBaseRecord {
    /* 0x00 */ u16 level;
    /* 0x02 */ u16 stat1;
    /* 0x04 */ u16 stat2;
    /* 0x06 */ u16 stat3;
    /* 0x08 */ u16 stat4;
    /* 0x0A */ u16 stat5;
    /* 0x0C */ u16 stat6;
    /* 0x0E */ u16 stat7;
    /* 0x10 */ u16 stat8;
    /* 0x12 */ u16 stat9;
    /* 0x14 */ u16 stat10;
    /* 0x16 */ u8 flags; /* bits 2-5: the growth type */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 hp;
    /* 0x1A */ u16 mp;
    /* 0x1C */ u16 skills[8];
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u32 experience;
};
typedef char DemonBaseRecordSizeCheck[sizeof(DemonBaseRecord) == 0x34 ? 1 : -1];

struct DevilBitSource {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u16 bit;
};

/* A unit built from a demon's base record; only the fields the comparison reads are named. */
struct FreshUnit {
    /* 0x000 */ s16 hp;
    /* 0x002 */ s16 mp;
    /* 0x004 */ s16 stats[5];
    /* 0x00E */ u8 unk00E[0x12];
    /* 0x020 */ u16 extra[5];
    /* 0x02A */ u8 unk02A[6];
    /* 0x030 */ u32 experience;
    /* 0x034 */ u16 skills[8];
    /* 0x044 */ u8 unk044[2];
    /* 0x046 */ u16 id;
    /* 0x048 */ u8 level;
    /* 0x049 */ u8 unk049[0x5B8];
    /* 0x601 */ u8 growthType;
    /* 0x602 */ u8 unk602[2];
};
typedef char FreshUnitSizeCheck[sizeof(FreshUnit) == 0x604 && offsetof(FreshUnit, growthType) == 0x601 ? 1 : -1];

/* The saved unit being validated: stats are stored without the bonuses kept at 0x590. */
struct SavedUnit {
    /* 0x000 */ s16 hp;
    /* 0x002 */ s16 mp;
    /* 0x004 */ s16 stats[5];
    /* 0x00E */ u8 unk00E[0x22];
    /* 0x030 */ u32 experience;
    /* 0x034 */ u16 skills[8];
    /* 0x044 */ u8 unk044[2];
    /* 0x046 */ u16 id;
    /* 0x048 */ u8 level;
    /* 0x049 */ u8 unk049[0x547];
    /* 0x590 */ u16 statBonus[5];
};
typedef char SavedUnitOffsets[offsetof(SavedUnit, statBonus) == 0x590 ? 1 : -1];

extern "C" {
bool gameRecordCopy(u32 id, void *destination);
DevilBitSource *devilGetRecord(u16 id);
void *memClear(void *destination, u32 size);
void bitsetSetBit(void *owner, u32 bit);
void unitRecalculateEffectiveStats(FreshUnit *unit);
s32 flagCountUnlockedSlots(SavedUnit *unit);

/* Whether the saved unit is what its demon would be when freshly summoned: same level, experience and stats, and
 * every skill it knows among the skills of the fresh unit. */
u32 FUN_002cd37c(SavedUnit *saved)
{
    u32 id = saved->id;
    u32 matches = 1;
    u8 scratch[0x38];
    if (!gameRecordCopy(id, scratch)) {
        return 0;
    }
    DevilBitSource *devil = devilGetRecord(id);
    DemonBaseRecord base;
    gameRecordCopy(id, &base);
    FreshUnit fresh;
    memClear(&fresh, 0x604);
    fresh.id = id;
    fresh.level = base.level;
    fresh.hp = base.hp;
    fresh.mp = base.mp;
    fresh.stats[0] = base.stat1;
    fresh.stats[1] = base.stat2;
    fresh.stats[2] = base.stat3;
    fresh.stats[3] = base.stat4;
    fresh.stats[4] = base.stat5;
    fresh.extra[0] = base.stat6;
    fresh.extra[1] = base.stat7;
    fresh.extra[2] = base.stat8;
    fresh.extra[3] = base.stat9;
    fresh.extra[4] = base.stat10;
    for (s32 i = 0; i < 8; i++) {
        fresh.skills[i] = base.skills[i];
    }
    fresh.growthType = (base.flags >> 2) & 0xF;
    fresh.experience = base.experience;
    bitsetSetBit(&fresh, devil->bit);
    unitRecalculateEffectiveStats(&fresh);
    if (fresh.level != saved->level || fresh.experience != saved->experience) {
        matches = 0;
    }
    if (fresh.hp != saved->hp) {
        matches = 0;
    }
    if (fresh.mp != saved->mp) {
        matches = 0;
    }
    for (s32 i = 0; i < 5; i++) {
        if (saved->stats[i] + saved->statBonus[i] != fresh.stats[i]) {
            matches = 0;
        }
    }
    s32 slots = flagCountUnlockedSlots(saved);
    for (s32 i = 0; i < slots; i++) {
        u16 skill = saved->skills[i];
        if (skill != 0) {
            s32 k;
            for (k = 0; k < slots; k++) {
                if (fresh.skills[k] == skill) {
                    break;
                }
            }
            if (k == slots) {
                return 0;
            }
        }
    }
    return matches;
}
}
